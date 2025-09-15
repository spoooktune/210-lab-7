#include <iostream>
#include <string>

using namespace std;

string* reverseArray(string inputArr[]){
    string temp = "";
    string *arrPtr = nullptr;
    int size = sizeof(inputArr);
    for (int i = 0; i < size/2; i++){
        temp = inputArr[i];
        inputArr[i] = inputArr[size - i];
        inputArr[size - i] = temp;
    }
    arrPtr = inputArr;
    return arrPtr;
}

void displayArray(string outputArr[]){
    int size = sizeof(outputArr);
    for (int i = 0; i < size; i++){
        cout << outputArr[i] << " ";
    }
    cout << endl;
}

int main(){
    string names[] = {"Jason", "Alice", "Mark", "Penelope", "Matthew"};
    string *namesPtr = nullptr;
    cout << "Original Array: ";
    displayArray(names);
    namesPtr = reverseArray(names);
    cout << "Reversed Array: ";
    displayArray(namesPtr);
}