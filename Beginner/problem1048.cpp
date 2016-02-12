#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double salary, percentage;
	cin >> salary;

	if (salary <= 400) percentage = 0.15;
	else if (salary <= 800) percentage = 0.12;
	else if (salary <= 1200) percentage = 0.1;
	else if (salary <= 2000) percentage = 0.07;
	else percentage = 0.04;

	printf("Novo salario: %0.2lf\n", salary * (1 + percentage));
	printf("Reajuste ganho: %0.2lf\n", salary * percentage);
	printf("Em percentual: %0.0lf %%\n", percentage * 100);

	return 0;
}
