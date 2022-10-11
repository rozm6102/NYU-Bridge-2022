# include <iostream>
# include <string>
using namespace std; 


// part a 
bool isPalindrome (string str){
    int length;
    bool result; 
    length = str.length(); 

    for (int i = 0; i < length / 2; i++) { 
        if (str[i] != str[length - i - 1]) { // as long as there is one mismatch, it is not a palindrome
            result = false;
            } else {
            result = true;
            }
    }
    return result; 
}

// part b 
int main(){
    string userStr;
    cout << "Please enter a word: "; 
    cin >> userStr;

    cout << userStr; 
    if (isPalindrome (userStr) == true){
        cout << " is a palindrome"; 
    } else {
        cout << " is not a palindrome"; 
    }
    return 0; 
}
