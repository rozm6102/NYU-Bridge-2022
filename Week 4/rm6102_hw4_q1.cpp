# include <iostream> 
using namespace std; 

int main (){

    // Method 1: For loop
    int input1, output1, count1; 
    cout << "Please enter a positive integer: ";
    cin >> input1; 

    for (count1 = 1; count1 <= input1; count1 +=1){
        output1 = count1 * 2; 
        cout << output1 << endl; 
    }

    // Method 2: While loop
    int input2, output2, count2; 
    cout << "Please enter a positive integer: "; 
    cin >> input2; 
    count2 = 1; 
    while (count2 <= input2) {
        output2 = count2 * 2;
        count2 += 1; 
        cout << output2 << endl;
    }

    return 0; 
}