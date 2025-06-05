//<cctype> toupper() 함수로 처리
#include <iostream>
#include <fstream>
#include <cctype> //toupper() 함수를 위함
using namespace std;

int main() {
    string inputFile = "C:\\windows\\system.ini ";
    string outputFile = "c:\\temp\\system.txt";

    ifstream fin(inputFile);
    if (!fin) {
        cout << inputFile << "열기 실패" << endl;
        return 0;
    }
    ofstream fout(outputFile);
    if (!fout) {
        cout << outputFile << "열기 실패" << endl;
        return 0; //int 값이 있기 때문에 그냥 return만 쓰면 안됨
    }
    cout << "파일 읽기 시작 ..." << endl;
    int ch; //정수값 ? 못 읽으면 -1 값을 부여해서 파일 끝을 표시 가능
    while( (ch = fin.get() ) != EOF) {
        fout.put(toupper(ch));
    }
    cout << "파일 쓰기 끝!" << endl;
    fout.close();
    fin.close();
}