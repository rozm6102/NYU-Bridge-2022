# include <iostream>
using namespace std; 

int main (){
    int n, line_num, num_stars, num_spaces, x, y, a, b; 
    cout << "Please enter a positive integer n: "; 
    cin >> n; 

    // output for the first n lines 
    for (line_num = 1; line_num <= n; line_num ++){
        // formula for number of spaces and number of stars 
        num_stars = 2 * (n - line_num) + 1; 
        num_spaces = line_num - 1; 
        // print the number of spaces before the asterisks
        x = 1; 
        for (x = 1; x <= num_spaces; x ++){
            cout << ' '; 
        }
        // print the asterisks
        y = 1;
        for (y = 1; y <= num_stars; y ++){
            if (y == num_stars){
                cout << '*' << endl;
            } else {
                cout << '*'; 
            }    
        }
    }
    // output for the next n lines
    for (line_num = n+1; line_num <= 2 * n; line_num ++){
        // formula for number of spaces and number of stars 
        num_stars = (line_num - n) * 2 -1; 
        num_spaces = (2 * n - num_stars) / 2; 
        // print the number of spaces before the asterisks
        a = 1; 
        for (a = 1; a <= num_spaces; a ++){
            cout << ' '; 
        }
        // print the asterisks
        b = 1;
        for (b = 1; b <= num_stars; b ++){
            if (b == num_stars){
                cout << '*' << endl;
            } else {
                cout << '*'; 
            }    
        }
    }
    return 0; 
}
