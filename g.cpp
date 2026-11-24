#include <iostream>
using namespace std;

int main() {
    int number1 = 15;
    int* pointer1 = &number1;
    cout<<"The current set number is "<<number1<<endl;
    cout<<"And the pointer that leads to it is "<<pointer1<<endl;
    cout<<"But I do wonder, how much can I link?"<<endl;
    int** pointer2 = &pointer1;
    cout<<"The pointer for the first pointer is "<<pointer2<<endl;
    int*** pointer3 = &pointer2;
    int**** pointer4 = &pointer3;
    int***** pointer5 = &pointer4;
    int****** pointer6 = &pointer5;
    int******* pointer7 = &pointer6;
    int******** pointer8 = &pointer7;
    int********* pointer9 = &pointer8;
    int********** pointer10 = &pointer9;
    cout<<"Here we go, Huuuuu"<<pointer3<<" "<<pointer4<<" "<<pointer5<<" "<<pointer6<<" "<<pointer7<<" "<<pointer8<<" "<<pointer9<<" "<<pointer10<<" *Deep breath* that was a pain"<<endl;


    return 0;
}