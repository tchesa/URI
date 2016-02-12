#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int r;
	double pi = 3.14159;
	cin >> r;
	printf("VOLUME = %0.3lf\n", (4./3.) * pi * r * r * r);

	return 0;
}
