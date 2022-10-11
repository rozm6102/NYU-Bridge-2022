# include <iostream>
using namespace std; 

// part a 
void printTriangle (int n){
   if (n == 1){
        cout << "*";
        cout << endl;  
    } else {
        printTriangle (n-1);
        for (int i = 1; i <= n; i++){
            cout << "*"; 
        } 
        cout << endl; 
   }
}

// part b
void printOppositeTriangles(int n){ 
    for (int i = 1; i <= n; i++){  // I wasn't sure if we had to implement recursion here too. 
        cout << "*"; 
    } 
    cout << endl; 
    if (n == 1){
        cout << "*";
        cout << endl;  
    } else {
        printOppositeTriangles(n - 1);
        for (int i = 1; i <= n; i++){
            cout << "*"; 
        } 
        cout << endl;  
   }
}

// part c 
void printRuler(int n){
    if (n = 0){
    } else if (n > 0){ 
        printRuler(n-1);
        for (int i = 1; i <= n; i++){
            cout << "-";
        }
        cout << endl;
        printRuler(n-1);
    }
}

// great video which helped me understand how to implement part c: https://www.youtube.com/watch?v=oj0djqHoFWw

// testing out code from parts a, b and c
int main(){
    printTriangle (4);
    cout << endl; 
    printOppositeTriangles(5);
    cout << endl; 
    printRuler(4);
    cout << endl; 
    return 0; 
}