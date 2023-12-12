#include <iostream>
using namespace std;

void squareByValue(int num) {
    num = num * num;
    cout << "Inside squareByValue function: " << num << endl;
}


void squareByReference(int &num) {
    num = num * num;
    cout << "Inside squareByReference function: " << num << endl;
}

int main() {
    int number = 5;

    cout << "Original value: " << number << endl;

    
    squareByValue(number);
    cout << "After call by value: " << number << endl;    

    
    squareByReference(number);
    cout << "After call by reference: " << number << endl;

    return 0;
}


