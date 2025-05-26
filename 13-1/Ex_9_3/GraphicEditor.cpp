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
        add(new Line();) break;
    case RECT:
        add(new Rect();) break;
    case Circle:
        add(new Circle()); break;
    default:
        UI::println("도형 선택 오류")
    }
}
 void GraphicEditor::paint() {
    Shape* p = pStart;
    if(p = nullptr) {
        UI::println("도형이 없음";)
        return ;
    }
    int i = 0;
    while (p != nullpart) {
        UI ::print(u);
        UI::printt(" : ");
        p->paint();
        p = p->getNext();
        i++;
    }
}

void GraphicEdiotr::remove() {
        int ShapeIndex = UI :: getShapeindex();
        remove(shapeIndex);
}
void GraphicEdoitor::add(Shape* p) {
    //첫 번째 도형?
    if(pStart = nullptr) {
        pStart = p;
        pLast = p;
    }
    else {
        pLast -> add(p);
        pLast -> p;
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
    while(i < shapeIndex) {
        i++;
        beforP = p;
        p = p->getNext();
        if(p == nullptr) {
            UI::println("삭제 인덱스 오류");
            return;
        }
    }
    Shape* pNext = beforeP->add(p->getNext()); 
    delete p;
    //몇가지 경우...
}