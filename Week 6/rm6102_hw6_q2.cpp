# include <iostream>
using namespace std; 

// part a 
void printShiftedTriangle(int n, int m, char symbol){
    int row, rowFromBack, spaces, numChar, x, y; 
    row = 1; 
    while (row <= n){ //dealing with each row one by one
        numChar = row * 2 - 1; // number of times the character should be printed out
        x = 1; 
        rowFromBack = n - row + 1; 
        spaces = m + rowFromBack - 1; //number of spaces to add in front of each row
        y = 1; 
        while (y <= spaces){
            cout << " "; 
            y ++; 
        }
        while (x < numChar){
            cout << symbol;
            x ++;  
        }
        cout << symbol << endl;
        row ++; 
    }
}
//int main(){
    //printShiftedTriangle(3, 4, '+');
    //return 0; 
//}

// part b 
void printPineTree(int n, char symbol){
    int triNum, spaces, triNumFromBack, numRows;
    triNum = 1; 
    numRows = 2; // smallest triange at the top has 2 rows 

    while (triNum <= n){
        triNumFromBack = n - triNum + 1;
        spaces = triNumFromBack - 1;
        printShiftedTriangle(numRows, spaces, symbol);
        triNum ++;
        numRows ++;
    }
}
int main(){
    printPineTree(4, '#'); 
    return 0; 
}