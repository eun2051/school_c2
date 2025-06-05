#include "Words.h"

Words::Words() {
    fin.open( "words.txt");
    if(!fin) {
        cout << "파일 열기 실패" << endl;
        exit(0);
    }
    string word;
    while( getline(fin, word)) {
        wordVector.push_back(word);
    }
    cout << "words.txt 로딩 완료" << wordVector.size() << endl;
} 

Words::~Words() {
    fin.close();
} 

bool Words::exist(string word) {
    for (int i = 0; i < wordVector.size(); i++) {
        if(wordVector[i] == word)
            return true;
    }
    return false;
}

void Words::search(string word) {
    int length = word.length();
    for (int i = 0; i < wordVector.size(); i++) {
        if (wordVector[i].size() == length) {
            if(wordVector[i] == word)
                continue;
            for (int j = 0; j < length; j++) {
                string orig = word;
                string dic_word = wordVector[i];
                orig[j] = dic_word[j] = '*';
                if (orig == dic_word) {
                    cout << wordVector[i] << endl;
                    break;
                }
            }
        }
    }
}

void Words::run() {
    while(true){ 
        cout << "단어>> ";
        string word;
        getline(cin, word);
        if( word == "exit") break;
        if( !exist(word))
            cout << word << "사전에 없음" << endl;
        search (word);
    }
}