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
    string *arrPtr = nullptr;
    cout << "Original Array: ";
    for (int i = 0; i < size; i++){
        cout << outputArr[i] << " ";
    }
    arrPtr = reverseArray(outputArr);
    cout << "/n/nReversed Array: ";
    for (int i = 0; i < size; i++){
        cout << *(outputArr + i) << " ";
    }
    cout << endl;
}
int main(){

}