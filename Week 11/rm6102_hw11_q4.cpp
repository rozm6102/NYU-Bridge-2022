# include <iostream> 
using namespace std; 

int lowestCost (int cols[], int numCols){ // cols = columns
    if (numCols <= 3){
        return cols[numCols - 1]; 
    } else {
        int routeA = lowestCost (cols, numCols - 1); 
        int routeB = lowestCost (cols, numCols - 2); 

        if (routeA < routeB){
            return routeA + cols[numCols - 1]; 
        } else {
            return routeB + cols[numCols - 1]; 
        }
    }
}

int main(){
    int cols[] = {0, 3, 80, 6, 57, 10}; 
    int result = lowestCost (cols, 6); 
    cout << result; 
    return 0;
}