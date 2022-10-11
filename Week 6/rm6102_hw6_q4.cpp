# include <iostream>
# include <cmath>
using namespace std; 

void printDivisors(int num){
    int x, y, squareRoot; 
    x = 1;
    squareRoot = sqrt(num); 
    while (x <= squareRoot){ // faster because we don't brute force all the way to x, we stop at square root. 
        if (num % x == 0){
            cout << x << " "; 
        }
        x++;
    }
    y = squareRoot; // might speed this up further if able to store previous items in a list (if those exist in C++) instead of redoing calculations in reverse? 
    while ((y <= squareRoot) && (y > 0)){
        if (num % y == 0){
            if (num / y != y){
                cout << num/y << " "; 
            }
        }
        y--; 
    }
}


/* void printDivisors(int num){ //this was the intial idea, but it is not the most efficient due to the use of brute force throughout
    int divisor; 
    for (divisor = 1; divisor <= 100; divisor ++){
        if (num % divisor == 0){
            cout << divisor << "  "; 
        }
    }
} */ 

int main(){
    int num; 
    cout << "Please enter a positive integer >= 2: ";
    cin >> num; 
    printDivisors (num); 
    return 0; 
}