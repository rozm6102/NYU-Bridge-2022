# include <iostream>
using namespace std;

// part a 
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    int SumDivs, CountDivs; 
    SumDivs = 1; 
    CountDivs = 1;
    for (int i = 2; i * i < num; i ++){ // for simplicity, we start at 2. 1 has been taken into account in value of SumDivs and CountDivs
        if (num % i == 0){
            SumDivs += (i + num/i); // if i is a divisor, then so is num/i
            CountDivs += 2; 
        }
    }
    // runtime is reduced by iterating only until sqrt num instead of num
    outCountDivs = CountDivs;
    outSumDivs = SumDivs;
}

// part b
bool isPerfect(int num){
    int CountDivs, SumDivs; 
    analyzeDividors(num, CountDivs, SumDivs); 
    return (num == SumDivs); 
}

// part c
int main(){
    int num; 
    cout << "Please enter a positive integer M (≥ 2): ";
    cin >> num; 

    // all the perfect numbers between 2 and M
    cout << "Perfect Numbers:" << endl; 
    for (int x = 2; x < num; x++){
        if (isPerfect(x)){
            cout << x << " "; 
        }
    }
    cout << endl; 

    // all the amicable numbers between 2 and M
    cout << "Amicable Number Pairs: " << endl; 
    int CountDivs1, SumDivs1, CountDivs2, SumDivs2; 
    for (int y = 2; y <= num; y++){ 
        analyzeDividors(y, CountDivs1, SumDivs1); // e.g. for y = 220, SumDivs1 = 284
        analyzeDividors(SumDivs1, CountDivs2, SumDivs2); // e.g. for SumDivs1 = 220, SumDivs2 = 284. There will be a match! 
        if ((y == SumDivs2)&&(y < SumDivs1)){ // this condition avoids duplication of the pairs 
            cout << "(" << y << " , " << SumDivs1 << ") "; 
        }
    }
    // only one loop is used to minimize runtime 
    return 0;
}

