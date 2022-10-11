# include <iostream>
# include <cmath>
using namespace std; 

// part a 
int sumOfSquares(int arr[], int arrSize){
    int result; 
    if (arrSize == 0){
        result = 0; 
    } else if (arrSize > 0){
        result = sumOfSquares(arr, arrSize - 1) + pow(arr[arrSize - 1], 2); 
    }
    return result; 
}

// above is generally similar to how you might go about using recrusion to find the sum of an array, except we need to square the elements
// https://www.geeksforgeeks.org/sum-array-elements-using-recursion/

// part b 
bool isSorted(int arr[], int arrSize){
    if ((arrSize == 0)|| (arrSize == 1)){ //In this cases, there is nothing to sort. A little unusual because there are 2 base cases. 
        return true; 
    } else if (arrSize > 0){
        if (arr[arrSize - 1] < arr[arrSize - 2]){
            return false;
        }
    }
    return isSorted(arr, arrSize - 1); 
}

// testing out code from parts a and b 
int main(){
    int arrSize, result, resultX, resultY; 
    int arr[5] = {1, 2, 3, 4, 5}; 
    arrSize = 5; 
    result = sumOfSquares (arr, 5); 
    cout << result;
    cout << endl; 

    int arrX[5] = {5, 10, 15, 20, 25}; // sorted
    int arrY[5] = {10, 5, 4, 2, 100}; // unsorted
    
    resultX = isSorted(arrX, 5); 
    cout << resultX;
    cout << endl;
    
    resultY = isSorted(arrY, 5); 
    cout << resultY; 
    return 0; 
}

