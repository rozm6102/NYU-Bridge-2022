# include <iostream>
using namespace std; 

int main (){
    int n, x, y, z; 
    cout << "Please enter a positive integer: " << endl; 
    cin >> n; 

    for (x = 1; x <= n; x++){
        for (y = 1; y <= n; y++){
                if (y == n){
                    cout << x * y << "\t" << endl; // go to the next line if it is the last digit of the row 
                } else { 

                    cout << x * y << "\t"; 
                }   
        }
    }
    return 0; 
}