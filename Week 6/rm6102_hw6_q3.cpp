# include <iostream>
using namespace std; 

double eApprox(int n){ // faster than the other solution because it only uses 1 while loop instead of 2 
    double estimate, factorial, y, factorialBase; 
    int x;
    x = 1; 
    estimate = 1;
    factorialBase = 1; 
    while (x <= n){
        factorialBase *= x;
        factorial = 1/ factorialBase;
        estimate += factorial; 
        x ++; 
    }
    return estimate; 
}
    
/* double eApprox(int n){ //this was the initial idea, but it is not the most efficient due to the two while loops
    double estimate, factorial, y, factorialBase;
    int x; 
    estimate = 1;
    x = 1; 
    while (x <= n){
        y = 1;
        factorialBase = 1; 
        while (y <=x){
            factorialBase = factorialBase * y;
            y += 1;
        }
        factorial = 1/ factorialBase;
        estimate += factorial; 
        x++; 
    }
    return estimate; 
} */

int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
    cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0;
}