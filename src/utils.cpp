#include "utils.h"
#include <iostream>
using namespace std;

void Swap(int &num1, int &num2){
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

void Swap2(int &num1, int &num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

void Swap3(int &num1, int &num2){
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

void PrintArr(int n, int arr[]){
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

bool isBigger(int num1, int num2){
    return num1 > num2 ? true : false;
}