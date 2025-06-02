#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> & v) {//참조로 받는것
//가장 쉬운 방법 : 배열처럼 인덱스로 받는것
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
}
double getAvg(vector<int>& v) {
    int sum = 0;
    for(auto it = v.begin(); it != v.end(); it++){ //iterator
        sum += *it; //포인터니까 값을 가져오면 됨
    }
    return (double) sum / v.size();
}
int main() {
    vector<int> v;
    while(true) {
        cout << "정수 (0:종료) >> ";
        int num;
        cin >> num;
        if(num == 0) break;
        v.push_back(num); //마지막에 하는것
        //printVector(v); //우리가 직접 만든함수
        //원래 있는 함수 (어디서부터 어디까지 ~)
        for_each(v.begin(), v.end(), [](int n) { cout << n << ' '; });
        cout << endl;

        // cout << "평균: " << getAvg(v) << endl;
        //함수로 안하고 다른 방법으로 해보기 //for_each 뒤에꺼는 람다함수임
        int sum = 0;
        for_each(v.begin(), v.end(), [&sum](int n) { sum += n;});
        cout << "평균: " << (double)sum / v.size() << endl;
    }
}