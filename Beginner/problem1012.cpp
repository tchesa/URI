#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double a, b, c;
	cin >> a >> b >> c;
	double pi = 3.14159;

	printf("TRIANGULO: %0.3lf\n", (a*c)/2.);
	printf("CIRCULO: %0.3lf\n", pi * c * c);
	printf("TRAPEZIO: %0.3lf\n", ((a+b)*c)/2.);
	printf("QUADRADO: %0.3lf\n", b * b);
	printf("RETANGULO: %0.3lf\n", a * b);

	return 0;
}
