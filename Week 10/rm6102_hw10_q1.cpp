# include <iostream>
# include <string> 
using namespace std;  

string* createWordsArray(string sentence, int& outWordsArrSize);
void printArray (string arr[], int arrSize);

int main(){

    string sentence; 
    int numWords, outWordsArrSize;
    cout << "Please enter a sentence: "; 
    getline (cin, sentence); 

    string* textArr = createWordsArray(sentence, outWordsArrSize);
    printArray (textArr, outWordsArrSize);
    delete [] textArr; 

    return 0; 
}

string* createWordsArray(string sentence, int& outWordsArrSize){ // this is based on the code provided in week 10's class

    string word; 
    string* textArr = new string[1];
    int textArrSize = 0, textArrPhysicalSize = 1;

    word = "";
    for (int i = 0; i < sentence.length(); i++){ // one for loop, runtime = theta(n)
        if (sentence[i] == ' '){
            if(textArrSize == textArrPhysicalSize){  // this could probably have been a separate function, but I was lazy :/ 
                string* newTextArr;
                newTextArr = new string[2*textArrPhysicalSize];
                for(int i = 0; i < textArrSize; i += 1)
                    newTextArr[i] = textArr[i];
                delete []textArr;
                textArr = newTextArr;
                textArrPhysicalSize *= 2;
            }
            textArr[textArrSize] = word;
            textArrSize += 1;
            word = ""; 
        } else {
            word += sentence[i]; 
        }
    }   
    if(textArrSize == textArrPhysicalSize){
        string* newTextArr;
        newTextArr = new string[2*textArrPhysicalSize];
        for(int i = 0; i < textArrSize; i += 1)
            newTextArr[i] = textArr[i];
        delete []textArr;
        textArr = newTextArr;
        textArrPhysicalSize *= 2;
        delete []newTextArr; 
    }
    textArr[textArrSize] = word;
    textArrSize += 1;

    outWordsArrSize = textArrSize;
    return textArr; 
}

void printArray (string arr[], int arrSize){
    cout << "Output array: ["; 
    for (int i = 0; i < arrSize - 1; i++){
        cout << "\""; 
        cout << arr[i];
        cout << "\", ";
    }
    cout << "\"";
    cout << arr[arrSize - 1];
    cout << "\"";
    cout << "]";
}
    