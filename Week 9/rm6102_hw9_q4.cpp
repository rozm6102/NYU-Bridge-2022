#include <iostream>
using namespace std;

int main() {
    const int arr_size = 6;
    int test_arr[arr_size] = { 5, 2, 11, 7, 6, 4 };

    return 0; 
}




// this function lets us print out the array
void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }

    cout << endl;
}