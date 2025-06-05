#pragma once
#include <string>
#include <map>
using namespace std;

class GradeManager {
    map<string, int> scoreMap;
    void insert();
    void search();
public:
    void run();
};