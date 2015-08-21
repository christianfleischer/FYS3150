// Exercise 2.2
using namespace std;
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main (int argc, char* argv[])
{
// declare variables
	int n;
	int N = atoi(argv[1]);
	double sum_up;
	double sum_down;
//sum up
	for (n=1; n<(N+1); n++){
    	sum_up += 1.0/n;
	}
//sum down
	for (n=N; n>0; n--){
		sum_down += 1.0/n;
	}
// write out results
	cout << "sum_up = " << sum_up << "\n";
	cout << "sum_down = " << sum_down << "\n";
	return 0;
}
