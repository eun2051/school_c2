#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[10], dept[10];
    int sid;

    cout << "이름>> ";
    cin >> name;
    cout << "학번>> ";
    cin >> sid;
    cout << "학과>> ";
    cin >> dept;

    ofstream fout("student.txt");
    if(!fout) {
        cout << "파일을 열수 없음." << endl;
        return 0;
    }

    fout << name << endl;
    fout << sid << endl;
    fout << dept << endl;

    fout.close();
} 