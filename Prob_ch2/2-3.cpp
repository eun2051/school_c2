#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int max;
    cout << "두 수를 입력하라>>";
    cin >> a >> b;
    if (a > b) {
        max = a;
    } else
        max = b;
    cout << "큰 수 = " << max << endl;
}