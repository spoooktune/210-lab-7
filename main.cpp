#include <iostream>
#include <string>

using namespace std;

string *reverseArray(string inputArr[], const int SIZE){
    string temp = "";
    string *arrPtr = nullptr;
    for (int i = 0; i < SIZE/2; i++){
        temp = inputArr[i];
        inputArr[i] = inputArr[SIZE-1-i];
        inputArr[SIZE-1-i] = temp;
        
    }
    arrPtr = inputArr;
    return arrPtr;
}

void displayArray(string outputArr[], const int SIZE){
    for (int i = 0; i < SIZE; i++){
        cout << outputArr[i] << " ";
    }
    cout << endl;
}

int main(){
    const int SIZE = 5;
    string names[] = {"Jason", "Alice", "Mark", "Penelope", "Matthew"};
    string reversed[SIZE];
    string *namesPtr = nullptr;
    cout << "Original Array: ";
    displayArray(names, SIZE);
    namesPtr = reverseArray(names, SIZE);
    for (int i = 0; i < SIZE; i++){
        reversed[i] = *(namesPtr + i);
    }
    cout << "\nReversed Array: ";
    displayArray(reversed, SIZE);
}