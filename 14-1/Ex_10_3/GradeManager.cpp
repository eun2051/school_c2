#include "GradeManager.h"
#include <iostream>
using namespace std;

void GradeManager::insert() {
    string name;
    int score;
    cout << "이름과 점수>> ";
    cin >> name >> score;
    if( scoreMap.find(name) != scoreMap.end()) {
        cout << "이미 등록된 학생입니다." << endl;
    } else {
        scoreMap[name] = score;
        //scoreMap.insert( make_pair(name, score));
    }
}
void GradeManager::search() {
    string name;
    cout << "검색할 이름>> ";
    cin >> name;
    if(scoreMap.find(name) == scoreMap.end()) {
        cout << name << "을 찾을 수 없음" << endl;
    } else {
        cout << name << "의 점수는 " << scoreMap[name] << endl;
    }
}
void GradeManager::run() {
    int menu;
    while(true) {
        cout << "등록:1, 검색:2, 종료:0";
        cin >> menu;
        if (menu == 0) break;
        switch(menu) {
        case 1:
            insert(); break;
        case 2:
            search(); break;
        default:
            cout << "메뉴 입력 오류" << endl;
        }
    }
}