#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int number, hours;
	float salary;
	cin >> number >> hours >> salary;
	cout << "NUMBER = " << number << endl;
	printf("SALARY = U$ %0.2lf\n", salary * hours);

	return 0;
}
