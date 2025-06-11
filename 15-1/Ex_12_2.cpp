#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("student.txt");
    if(!fin) {
        cout << "파일 열기 실패" << endl;
        return 0;
    }
    char name[10], dept[20];
    int sid;

    fin >> name;
    fin >> sid;
    fin >> dept;

    cout << "이름: " << name << endl;
    cout << "학번: " << sid << endl;
    cout << "전공: " << dept << endl;

    fin.close();
    
    ifstream fin2("/etc/passwd");
    if(!fin) {
        cout << "Error" << endl;
        return 0;
    }
    int count = 0;
    int c;
    while( ( c=fin2.get()) != EOF) {
        cout << (char) c;
        count++;
    }
    cout << "읽은 바이트 수는" << count << endl;
    fin2.close();
}