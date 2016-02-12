#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int a, b, c;
	cin >> a >> b >> c;
	int d, e, f;
	d = a;
	e = b;
	f = c;

	if(b < a)
	{
		int aux = a;
		a = b;
		b = aux;
	}

	if(c < a)
	{
		int aux = a;
		a = c;
		c = aux;
	}

	if(c < b)
	{
		int aux = c;
		c = b;
		b = aux;
	}

	printf("%i\n%i\n%i\n\n", a, b, c);
	printf("%i\n%i\n%i\n", d, e, f);

	return 0;
}
