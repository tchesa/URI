#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main (int argc, char *argv[]){
	string name;
	double salary, sales;
	cin >> name >> salary >> sales;

	printf("TOTAL = R$ %0.2lf\n", salary + sales * 0.15);

	return 0;
}
