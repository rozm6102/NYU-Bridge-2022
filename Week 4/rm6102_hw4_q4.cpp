# include <iostream> 
# include <cmath>
using namespace std; 

int main(){

    // Method 1
    double number, counter, len_seq, sum, geometric_mean, exp; // len_seq is length of sequence
    cout << "Please enter the length of the sequence: ";
    cin >> len_seq; 
    cout << "Please enter your sequence: " << endl;
    
    counter = 1; 
    sum = 0; 
    while (counter <= len_seq){
        cout << ""; 
        cin >> number; 
        counter ++;
        sum += number; 
    }
    
    exp = 1/ len_seq; 
    geometric_mean = pow (sum, exp); 
    cout << "The geometric mean is " << geometric_mean << endl; 

    // Method 2 
    double number1, len_seq1, sum1, geometric_mean1, exp1; // len_seq is length of sequence
    bool end1; 
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " <<endl;
    end1 = false; 
    len_seq1 = 0; 
    
    sum1 = 0; 
    while (end1 == false){
        cout << ""; 
        cin >> number1;

        if (number1 != -1){
            sum1 += number1;
            len_seq1 += 1;
        } else {
            end1 = true; 
        }
    }
    cout << sum << endl; 
    exp = 1/ len_seq1;
    cout << len_seq1 << endl; 
    geometric_mean = pow (sum, exp); 
    cout << "The geometric mean is " << geometric_mean << endl; 

    return 0; 
}