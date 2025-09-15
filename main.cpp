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

int main(){

}