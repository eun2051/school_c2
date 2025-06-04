#pragma once
#include "Shape.h"
class GraphicEditor {
    enum {LINE=1, CIRCLE=2, RECT=3};
    enum {EDIT=1, REMOVE=2, PAINT=3, EXIT=4};
    Shape* pStart;
    Shape* pLast;
    void add(Shape* p); ////지금 있는 곳에 추가
protected:
    void edit();
    void paint();
    void remove();
    void remove(int shapeIndex);
public:
    GraphicEditor();
    ~GraphicEditor();
    void run();
};