#include "GraphicEditor.h"
#include "Shape.h"
#include "Rect.h"
#include "Line.h"
#include "Circle.h"
#include "UI.h"

GraphicEditor::GraphicEditor() {
    pStart = nullptr;
    pLast = nullptr;
}

GraphicEditor::~GraphicEditor() {
    Shape* p = pStart;
    while(p != nullptr) {
        Shape* next = p->getNext();
        delete p;
        p = next;
    }
}

void GraphicEditor::edit() {
    int shapeType = UI::getShapeType();
    switch (shapeType) {
    case LINE:
        add(new Line()); break;
    case RECT:
        add(new Rect()); break;
    case CIRCLE:
        add(new Circle()); break;
    default:
        UI::println("도형 선택 오류");
    }
}
 void GraphicEditor::paint() {
    Shape* p = pStart;
    if(p == nullptr) {
        UI::println("도형이 없음");
        return;
    }
    int i = 0;
    while (p != nullptr) {
        UI::print(i);
        UI::print(" : ");
        p->paint();
        p = p->getNext();
        i++;
    }
}

void GraphicEditor::remove() {
        int ShapeIndex = UI :: getShapeIndex();
        remove(ShapeIndex);
}
void GraphicEditor::add(Shape* p) {
    //첫 번째 도형?
    if(pStart == nullptr) {
        pStart = p;
        pLast = p;
    }
    else {
        pLast -> setNext(p);
        pLast = p;
    }
}

void GraphicEditor ::remove (int shapeIndex) {
    if(pLast == nullptr) {
        UI::println("그려진 도형 없음.");
        return;
    }
    int i = 0;
    Shape* p = pStart;
    Shape* beforeP = pStart;
    while(i < shapeIndex && p != nullptr) {
        beforeP = p;
        p = p->getNext();
        i++;
    }
    if(p == nullptr) {
        UI::println("삭제 인덱스 오류");
        return;
    }
    //몇가지 경우...
    //현재 pNext는 뭐가 더 남았는지? 확인하기 위한 것. 따라서 그 다음번의 ptr을 가리키고 있다
    //삭제한 도형이 첫 번째 도형인 경우
    if (p == pStart) {
        pStart = p->getNext();
        if(p == pLast) pLast = nullptr;
        delete p;
        return;
    }
    //마지막 도형을 삭제한 경우
    if (p == pLast) {
        if (pStart == nullptr) { //처음이자 마지막
            pLast = nullptr;
        } else { 
            pLast = beforeP;
        //pStart, pLast의 위치를 조정해 주는 게 중요하다.
        }
    }
    Shape* pNext = beforeP->add(p->getNext()); 
    delete p;
}

void GraphicEditor::run() {
    UI::println("그래픽 에디터 시작");
    while(true) {
        int menu = UI::getMainMenu();
        switch(menu) {
        case EDIT:
            edit(); break;
        case REMOVE:
            remove(); break;
        case PAINT:
            paint(); break;
        case EXIT:
            return;
        default:
            UI::println("메뉴 입력 오류");
        }
    }
}