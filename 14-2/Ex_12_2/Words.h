#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
class Words {
    ifstream fin;
    vector<string> wordVector;
    bool exist(string word);
    void search(string word);
public:
    Words();
    ~Words();
    void run();
};