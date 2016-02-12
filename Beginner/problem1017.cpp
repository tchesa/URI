#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double time, average;
	cin >> time >> average;
	double distance = time * average;
	double amount = distance/12.;
	printf("%0.3lf\n", amount);

	return 0;
}
