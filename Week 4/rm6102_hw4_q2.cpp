# include <iostream>
using namespace std; 

int main (){
    int input, number, remainder, counter; 
    
    cout << "Enter a decimal number: " << endl; 
    cin >> input;
    number = input;  

    cout << input << " is "; 

    while (number / 1000 != 0){
        cout << "M"; 
        number -= 1000;
        remainder = number % 1000; 
    }
    while (number / 500 != 0){
        counter = 0; 
        if (counter < 1){
            cout << "D"; 
            number -= 500;
            remainder = number % 500; 
        } 
    }
    while (number / 100 != 0){
        counter = 0; 
        if (counter < 4){
            cout << "C"; 
            number -= 100;
            remainder = number % 100; 
        } 
    }
    while (number / 50 != 0){
        counter = 0; 
        if (counter < 1){
            cout << "L"; 
            number -= 50;
            remainder = number % 50; 
        } 
    }
    while (number / 10 != 0){
        counter = 0; 
        if (counter < 4){
            cout << "X"; 
            number -= 10;
            remainder = number % 10; 
        } 
    }
    while (number / 5 != 0){
        counter = 0; 
        if (counter < 1){
            cout << "V"; 
            number -= 5;
            remainder = number % 5; 
        } 
    }
    while (number / 1 != 0){
        counter = 0; 
        if (counter < 4){
            cout << "I"; 
            number -= 1;
            remainder = number % 1; 
        } 
    }

    return 0; 
}