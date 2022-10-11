# include <iostream>
# include <cmath> // this is required to deal with calculations involving exponents 
using namespace std; 

int main (){
    int input, number, exp, sum_gp, place;
    bool start_of_number; 
    // exp, refers to "exponent", gp refers to "geometric progression"
    // place refers to the 10 places ranging in the binary representation whose values we have to figure out using this program
    
    cout << "Enter decimal number: "; 
    cin >> input;
    cout << input << " is ";
    
    number = input;
    place = 9;
    start_of_number = true;  

    while (number > 0){

        exp = 0; 
        sum_gp = (pow(2, exp + 1) - 1); 

        while (number > sum_gp){ // find the exp value at which gp first exceeds the number, value at place representing 2^exp is 1
            exp += 1; 
            sum_gp = (pow(2, exp + 1) - 1); 
        }
        number -= (pow(2, exp));

        while (place > exp){ // values at places before place representing 2^exp are 0

            if (start_of_number == false){ // we don't want zeros in front of the first time that 1 appears 
                cout << '0';
                place -= 1;
            } else {
                place -= 1; 
            }
        }
        if (place == exp){ // value at place representing 2^exp is 0
            cout << '1'; 
            place -= 1; 
            start_of_number = false;
        }
        }

    // this is to deal with any empty places towards the end  
    while (place >= 0){
        cout << '0'; 
        place -= 1; 
    }
    
    return 0;
    }
     
