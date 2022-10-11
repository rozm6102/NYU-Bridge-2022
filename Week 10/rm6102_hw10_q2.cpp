# include <iostream> 
using namespace std; 

int* findMissing(int arr[], int n, int& resArrSize); 
void printArray (int arr[], int arrSize); 

int main(){
    int arr[] = {3, 1, 3, 0, 6, 4};
    int n = 6, resArrSize;
    int* resArr = findMissing(arr, n , resArrSize); 
    printArray (resArr, resArrSize); 
    
    delete [] resArr; 
    return 0; 
}

int* findMissing(int arr[], int n, int& resArrSize){ //we avoid nested loops to keep the runtime at theta(n)

    // this array stores the frequency of numbers, the number is the index in the array
    int* freqNum = new int [n+1];
    for (int i = 0; i <= n; i++){
        freqNum[i] = 0;
    }

    // we check which numbers are in the array and increase count accordingly
    for (int i = 0; i < n; i++){
        freqNum[arr[i]] += 1; 
    }

    // if a number has a 0 count, that means it wasn't in the array and we can store it in a new array
    int* missingNums = new int [1];
    int intArrSize = 0; 

    for (int i = 0; i < n + 1; i++){
        //cout << freqNum[i] << endl;
        // cout << "*" << i << endl;
        if (freqNum[i] == 0){
            missingNums[intArrSize++] = i;
        }
    }

    resArrSize = intArrSize; 
    delete [] freqNum;
    return missingNums;
}

void printArray (int arr[], int arrSize){
    cout << "Resized Array: ["; 
    for (int i = 0; i < arrSize - 1; i++){
        cout << "\""; 
        cout << arr[i];
        cout << "\", ";
    }
    cout << "\"";
    cout << arr[arrSize - 1];
    cout << "\"";
    cout << "]";
}