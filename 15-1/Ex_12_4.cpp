#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin) {
    fin.seekg(0, ios::end);
    long length = fin.tellg();
    return length;
}

int main() {
    const char* filename = "/etc/passwd";

    ifstream fin(filename);

    cout << filename << "의 크기는 " << getFileSize(fin) << endl;
    fin.close();
}