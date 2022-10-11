# include <iostream>
using namespace std; 

int fib(int n){
    int counter, x1, x2, x3, output; 
    if (n == 1){ // taking care of the first 2 "starter elements"
        output = 1;
    } else if (n == 2){
        output = 1;
    } else {
        counter = 2;
        x1 = 1; 
        x2 = 1;
        while (counter < n){
            x3 = x1 + x2; // in a fibonnaci sequence, the next element is the sum of the 2 preceding elements
            counter ++; 
            x1 = x2; // reassignment of values for x1 and x2 so we can calculate the next element
            x2 = x3; 
    }
    output = x3; 
    }
    return output; 
}
int main(){ // running the function
    int userInput; 
    cout << "Please enter a positive integer: "; 
    cin >> userInput; 
    cout << fib (userInput);
    return 0; 
}