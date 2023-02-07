/*
spring 2023 - Lab2C
Chapko
Anna 
Achapko200

Description: create an array of 10 integers
*/
#include <iostream>

using namespace std;

int main()

{

//declaring an array of size 10

int a[]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

//declaring variables to input index and value

int i, v;

do

{

cout << "\n";

//printing the array

for(int k=0; k<10; k++)

cout << a[k] << " ";

cout << "\n\n";

cout << "Input index: "; //input prompt

cin >> i; //input

cout << "Input value: "; //input prompt

cin >> v; //input

if(i>=0 && i<10) //checking if index is good

a[i]=v;

}while(i>=0 && i<10); //checking if index is good

//exit message

cout << "\nIndex out of range. Exit.\n";

return 0;

}