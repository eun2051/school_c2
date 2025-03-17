#include <iostream>
using namespace std;

/* int main() {
    double a, b, c, d, e, f;
    cout << "6개의 실수를 입력하세요 : ";
    cin >> a >> b >> c >> d >> e >> f;
    cout << "가장 큰 수 : ";
    cout << "가장 작은 수: ";
} */

int main() {
    cout << "실수 6개를 입력하세요 : ";
    double input, max, min;
    cin >> input;
    max = min = input;
    for (int i = 0; i < 5; i++) {
        cin >> input;
        if (input > max) max = input;
        if (input < min) min = input;
    }
    cout << "최댓값 : " << max << endl;
    cout << "최솟값 : " << min << endl;
}