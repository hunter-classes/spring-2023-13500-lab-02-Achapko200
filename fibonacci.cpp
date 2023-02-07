/*
spring 2023 - Lab2D
Chapko
Anna 
Achapko200

Description: print fibonacci numbers 
*/
#include <iostream>
using namespace std;
int main()
{

// make an array
int fib[60];
// first two terms are given
fib[0] = 0;
fib[1] = 1;

cout<<fib[0]<<endl;
cout<<fib[1]<<endl;

for(int i=2;i<60;i++)
{
fib[i] = fib[i-1] + fib[i-2];
cout<<fib[i]<<endl;
}
}