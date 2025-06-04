#include <iostream>
#include "GraphicEditor.h"

int main() {
    GraphicEditor* ge = new GraphicEditor();
    ge->run();
    delete ge;
}