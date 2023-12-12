#include<iostream>
using namespace std;

void displayArray(const string arr[], int size) {
    cout << "Array elements and their lengths : " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << " : " << arr[i] << " (length : " << arr[i].length() << ")" << endl;
    }
}

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {   
        if (tolower(ch)== 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch)== 'o' || tolower(ch) == 'u') {
            ++count;
        }
    }
    return count;
}

void displayReverse(const string arr[],int size){
    cout<<"displaying strings in reverse order : "<<endl;
    for(int i=size-1;i>=0;--i){
        cout<<arr[i]<<endl;
    }

}


int main() {
    const int size = 3;
    string myArray[size] = {"sumadeep", "charan", "deepak"};
    displayArray(myArray, size);


    cout << "Count of vowels in each string" << endl;
    for (int i = 0; i < size; ++i) {
        cout << " no of Vowels in element " << i + 1 << " are : " << countVowels(myArray[i]) << endl;
    }
    
    displayReverse(myArray,size);

    return 0;
}
