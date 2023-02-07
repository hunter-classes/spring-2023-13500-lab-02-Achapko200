/*
spring 2023 -  Lab 2A
Anna 
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter an integer: ";
    while(true) {
        cin >> num;
        if(num > 0 && num < 100) {
            break;
        }
        cout << "Please re-enter: ";
    }
    cout << "\nNumber squared is " << num*num << endl;
}
