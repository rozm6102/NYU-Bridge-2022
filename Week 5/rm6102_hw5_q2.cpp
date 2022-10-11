#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_GUESSES = 5; 

int main(){

    int random_num, range_start, range_end, num_guesses, user_guess;
    bool correct_ans; 

    srand(time(0)); //to generate random numbers, we call the srand function to intialize a seed for the random number generator
    random_num = (rand() % 100) + 1; //this random number would be in the range of 1-100 (shifting the range 1-99 by 1)
    
    range_start = 1; 
    range_end = 100; 
    num_guesses = 0;
    correct_ans = false; 

    cout<< "I thought of number between 1 and 100! Try to guess it." <<endl; // this should appear only once at the start of the game.

    while ((num_guesses < MAX_GUESSES)&&(correct_ans == false)) {
        cout << "Range: [" << range_start << "," << range_end << "], Number of guesses: "  << MAX_GUESSES - num_guesses << endl;
        cout << "Your guess: "; 
        cin >> user_guess; 
        
        num_guesses ++; //increment number of guesses 

        // check if user guess is correct or wrong, and if wrong, bigger or smaller.
        // if wrong, then update either the start or end of the range. 
        if (user_guess == random_num){
            cout << "Congrats! You guessed my number in " << num_guesses << " guesses. " << endl;
            cout << " " << endl;
            correct_ans = true; 
        } else if (user_guess <= random_num){
            if (num_guesses == 5){
                cout << "Out of guesses! My number is "<< random_num << endl;
            } else {
                cout << "Wrong! My number is bigger." << endl;
                cout << " " << endl;
                range_start = user_guess + 1; 
            }
        } else if (user_guess >= random_num){
            if (num_guesses == 5){
                cout << "Out of guesses! My number is "<< random_num << "." << endl;
            } else {
                cout << "Wrong! My number is smaller." << endl;
                cout << " " << endl;
                range_end = user_guess - 1; 
            }
        }
    } 
    return 0;
} 