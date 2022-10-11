# include <iostream> 
# include <string> 
using namespace std; 

// a program that will read in a line of text and output the number of words in the line and the number of occurrences of each letter

const int NUM_OF_LETTERS = 26; 

bool isDelimiter(char ch);
void countChars (int charCountArr[], char ch); 

int main(){
    string userInput; 
    int letter_count = 0, word_count = 1;
    int charCountArr[NUM_OF_LETTERS] = {};
    char ch, convertedChar; 

    cout << "Please enter a line of text: \n"; 
    getline (cin, userInput); 

    // iterating through each character to check it and update our "dictionary"
    for (int i = 0; i < userInput.length(); i++) {
        ch = userInput[i]; 
        if (isDelimiter(ch)) {
            if (letter_count > 0) { 
                word_count++;
            }
            letter_count = 0;
        } else {
            countChars(charCountArr, ch);
            letter_count++;
        }
    }

    cout << word_count << "\t words" << endl;

    for (int i = 0; i < NUM_OF_LETTERS; i++) {
        if (charCountArr[i] > 0){
            convertedChar = char('a' + i); 
            cout << charCountArr[i] << "\t" << convertedChar << endl; 
        }
    } 
     

    return 0; 
}

// this function checks if a character is a whitespace, a period or a comma
bool isDelimiter(char ch){
    return ((ch == ' ') || (ch == ',') || (ch == '.'));
}

// this function helps us count number of occurrences of each letter 
void countChars (int charCountArr[], char ch){ 
    if (('a' <= ch) && (ch <= 'z')) {
        charCountArr[ch - 'a']++;
    } else if (('A' <= ch) && (ch <= 'Z')) {
        charCountArr[ch - 'A']++;
    }
}


