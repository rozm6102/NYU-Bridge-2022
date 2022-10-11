#include <iostream>
#include <string>
using namespace std;

bool isDigit(string word) {
    for (int i = 0; i < word.length(); i++) {
        if (word[i] < '0' || word[i] > '9') {
            return false;
        }
    }

    return true;
}

string changeWord(string word) {
    string result2; 
    if (isDigit(word)) {
        string newWord;
        int i; 
        for (i = 0; i < word.length(); i++) {
            newWord += 'x';
        }
        result2 = newWord;
    } else {
        result2 = word;
    }
    return result2; 
}

int main() {
    string line;

    cout << "Please enter a line of text:\n";
    getline(cin, line);

    for (int start = 0, end = 0; end <= line.length(); end++) {
        if ((end == line.length()) || (line[end] == ' ')) {
            string word = line.substr(start, end - start);
            cout << changeWord(word) << ' ';
            start = end + 1;
        }
    }

    return 0;
}