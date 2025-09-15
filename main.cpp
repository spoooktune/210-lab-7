// COMSC 210 | Lab 7 | Amrutha Sriprasana
// Made w/ VSCode

#include <iostream>
#include <string>

using namespace std;

// reverses given array and returns pointer to reversed array
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

// outputs all elements of array
void displayArray(string outputArr[], const int SIZE){
    for (int i = 0; i < SIZE; i++){
        cout << outputArr[i] << " ";
    }
    cout << endl;
}


// outputs all elements of array, places reversed elements into new array, prints reversed array
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