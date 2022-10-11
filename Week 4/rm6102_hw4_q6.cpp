# include <iostream>
using namespace std; 

int main (){
    int n, odd_digits, even_digits, x, y, current_digit; 
    cout << "Please enter a positive integer n: "; 
    cin >> n;

    // check each number one at a time from 1 all the way to n. 
    for (x = 1; x <= n; x++){ 
        odd_digits = 0;
        even_digits = 0;
        y = x; 
        while ( y > 0){  // this method of isolating last digit was in counting and summing digits example in videos
            current_digit = y % 10;
            if (current_digit % 2 == 0){ 
                even_digits += 1;
            } else {
                odd_digits += 1; 
            }
            y /= 10;
        }
        // if even digits exceed odd digits, number is printed. 
        if (even_digits > odd_digits){
            cout << x << endl; 
        }
    }
    return 0;
    }