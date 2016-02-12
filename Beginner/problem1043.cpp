#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double a, b, c;
	cin >> a >> b >> c;

	if(a+b > c && a+c > b && b+c > a)
	{
		double perimeter = a+b+c;
		printf("Perimetro = %0.1lf\n", perimeter);
	}
	else
	{
		double area = ((a+b)*c)/2;
		printf("Area = %0.1lf\n", area);
	}

	return 0;
}
