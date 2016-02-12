#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double pi = 3.14159;

	double r;
	cin >> r;
	double res = pi * (r * r);
	printf("A=%0.4lf\n", res);

	return 0;
}
