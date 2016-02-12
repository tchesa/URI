#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main (int argc, char *argv[]){
	double a, b, c;
	cin >> a >> b >> c;

	if(a < b)
	{
		double aux = a;
		a = b;
		b = aux;
	}

	if(a < c)
	{
		double aux = a;
		a = c;
		c = aux;
	}

	if(a >= b+c) cout << "NAO FORMA TRIANGULO\n";
	else
	{
		if (pow(a,2)==pow(b,2)+pow(c,2)) cout << "TRIANGULO RETANGULO\n";
		if (pow(a,2)>pow(b,2)+pow(c,2)) cout << "TRIANGULO OBTUSANGULO\n";
		if (pow(a,2)<pow(b,2)+pow(c,2)) cout << "TRIANGULO ACUTANGULO\n";
		if (a==b && a==c && b==c) cout << "TRIANGULO EQUILATERO\n";
		else if (a==b || a==c || b==c) cout << "TRIANGULO ISOSCELES\n";
	}

	return 0;
}
