#include <iostream>
using namespace std;

/* int main(){
    cout << "이름 : ";
    char name[10];
    cin >> name;
    cout << "주소 : ";
    char address[30];
    cin >> address;
    cout << "나이 : ";
    int age;
    cin >> age;
} */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, addr;
    int age;
    cout << "이름 : ";
    getline(cin, name);
    cout << "주소 : ";
    getline(cin, addr);
    cout << "나이 : ";
    cin >> age;
    cout << name << "(" << age << "세)" << addr << endl;
}