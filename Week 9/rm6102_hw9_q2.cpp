# include <iostream> 
# include <string> 
using namespace std; 

// a program that determines if two strings are anagrams

const int NUM_OF_LETTERS = 26; 


void countChars (int charCountArr[], char ch);
bool isAnagram (string str_1, string str_2); 

int main(){
    string str_1, str_2; 
    cout << "Please enter string 1: \n"; 
    getline (cin, str_1); 
    cout << "Please enter string 2: \n"; 
    getline (cin, str_2); 
    
    if (isAnagram (str_1, str_2)){
        cout << "The two strings are anagrams." << endl; 
    } else {
        cout << "The two strings are not anagrams." << endl; 
    }

    return 0; 
}



bool isAnagram (string str_1, string str_2){
    char ch; 
    bool result; 
    int charCount_1[NUM_OF_LETTERS] = {};
    int charCount_2[NUM_OF_LETTERS] = {};

    for (int i = 0; i < str_1.length(); i++) {
        ch = str_1[i];
        countChars (charCount_1 , ch); 
    }

    for (int i = 0; i < str_1.length(); i++) {
        ch = str_2[i];
        countChars (charCount_2 , ch); 
    }

    // logic of test: anagrams need to have the same number of each letter, so as long as number of one letter is not the same, it's not an anagram
    for (int i = 0; i < NUM_OF_LETTERS; i++) {
        if (str_1[i] != str_2[i]){
            result = false; 
        } else {
            result = true; 
        }
    }
    return result;
} 

// this function helps us count number of occurrences of each letter 
void countChars (int charCountArr[], char ch){ 
    if (('a' <= ch) && (ch <= 'z')) {
        charCountArr[ch - 'a']++;
    } else if (('A' <= ch) && (ch <= 'Z')) {
        charCountArr[ch - 'A']++;
    }
}
