# include <iostream>
using namespace std; 

// part a 
int printMonthCalender(int numOfDays, int startingDay) {
    // print out the dates in the first row
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun\t" << endl; 
     
    // print out the leading spaces
    int spaces;  
    for (spaces = 1; spaces < startingDay; spaces ++ ){
        cout << "  \t"; 
    }
    
    // print out the dates in the first row
    int firstRowDate;  
    for (firstRowDate = 1; firstRowDate <= (8 - startingDay); firstRowDate ++){
        cout << firstRowDate << "\t";
    }
    cout << endl; 

    // print out the dates in the other rows
    int counter; 
    counter = 1;
    int otherRowDate;
    for (otherRowDate = firstRowDate; otherRowDate <= numOfDays; otherRowDate++){
        cout << otherRowDate << "\t";
        if (counter % 7 == 0){ 
            cout << endl;
        }
        counter ++;
    }

    // return the number representing the last day
    int lastDay, remainder;
    remainder = (counter - 1) % 7; 
    if (remainder == 0){
        lastDay = 7; 
    } else {
        lastDay = remainder; 
    }
    cout << endl; 
    return lastDay; 
}  

// part b 
bool isLeapYear(int year) {
    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}

// part c 
void printYearCalender(int year, int startingDay){
    // print the calendar month by month, using the last day to update the startingDay for the next month
    cout << "January " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl; 

    int numOfDaysInFeb; // For February, the number of days varies depending on whether it is a leap year
    if (isLeapYear(year)){
        numOfDaysInFeb = 29;
    } else {
        numOfDaysInFeb = 28;
    }

    cout << "February " << year << endl; 
    startingDay = printMonthCalender(numOfDaysInFeb, startingDay) + 1;
    cout << endl; 

    cout << "March " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl;

    cout << "April " << year << endl; 
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout << endl;

    cout << "May " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl;

    cout << "June " << year << endl; 
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout << endl;

    cout << "July " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl;
 
    cout << "August " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl;

    cout << "September " << year << endl; 
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout << endl;

    cout << "October " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl;

    cout << "November " << year << endl; 
    startingDay = printMonthCalender(30, startingDay) + 1;
    cout << endl;

    cout << "December " << year << endl; 
    startingDay = printMonthCalender(31, startingDay) + 1;
    cout << endl;
}

//part d 
int main(){
    int year, startingDay;
    cout << "Please enter a year: ";
    cin >> year;
    cout << "Please enter the starting day of the year: ";
    cin >> startingDay;
    printYearCalender(year, startingDay);
    return 0; 
}
