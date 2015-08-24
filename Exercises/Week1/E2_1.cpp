// Exercise 2.1
using namespace std;
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main (int argc, char* argv[])
{
// declare variables
    int i;
    int terms[32];
    int number = atoi(argv[1]);

    for (i=0; i<32; i++){terms[i] = 0;}
    for (i=0; i<32; i++){
        terms[i] = number%2;
        number /= 2;
        //cout << number << "\n";
    }
    cout << "Number of bytes used = " << sizeof(number) << "\n";
    for (i=0; i<32; i++){
        cout << "Term nr: " << i << "Value = " << terms[i] << "\n";
    }
    return 0;
}
