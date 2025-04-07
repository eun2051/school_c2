#include <iostream>
#include <string>
using namespace std;

int main () {
    string text;
    cout << "문자열 입력>";
    getline(cin, text);
    int counts['z' - 'a' + 1] = { 0 ,  };
    int startIndex = 0;
    /* for (char c = 'a'; c <= 'z'; c++) {
        while (true) {
            startIndex = text.find(c, startIndex);
            if(startIndex == -1)
                break;
            counts[c - 'a']++;
            startIndex++;
        }
        startIndex = 0; //다시 처음부터 볼 수 있도록
    } */
    for (int i = 0 ; i < text.length(); i++) {
        if(text[i] >= 'a' && text[i] <= 'z')
            counts[text[i] - 'a']++;
    } //더 간단한 방법으로 해결가능
    for (char c = 'a' ; c <= 'z'; c++) { 
        if (counts[c - 'a'] != 0)
            cout << c << ":" << counts [c - 'a'] << endl;
    }
}
