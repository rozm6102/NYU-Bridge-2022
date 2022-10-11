# include <iostream> 
using namespace std; 

// Subquestion 1 
int minInArray(int arr[], int arrSize){  //arrSize is the logical size of the array
    int minimumValue, i; 
    minimumValue = arr[0]; 
    for (i = 0; i < arrSize; i++){
        if (arr[i] < minimumValue){ 
            minimumValue = arr[i]; 
        }
        // the function checks if the value is lesser than the currently assigned minumumValue
        // if yes, minimumValue is updated
    }
    return minimumValue; 
}

// Subquestion 2
const int SIZE = 20; 
int main(){
    int i, score[SIZE], minimumValue; 
    cout << "Please enter 20 integers separated by a space: "; 
    for (i = 0; i < SIZE; i++){ 
        cin >> score[i]; 
    }
    minimumValue = minInArray(score, SIZE); // calculate the minimum value
    cout << "The minimum value is " << minimumValue << " and it is located in the following indices: ";

    for (i = 0; i < SIZE; i++){ // I don't know what other additional functions we had to define. The solution is fairly short? 
        if (score[i] == minimumValue){
            cout << i << "  "; 
        }
    }


    return 0; 
}



