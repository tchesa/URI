#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double n;
	cin >> n;

	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

	n100 = n/100;
	n -= 100*n100;

	n50 = n/50;
	n -= 50*n50;

	n20 = n/20;
	n -= 20*n20;

	n10 = n/10;
	n -= 10*n10;

	n5 = n/5;
	n -= 5*n5;

	n2 = n/2;
	n -= 2*n2;

	n1 = n;

	cout << "NOTAS:" << endl;
	cout << n100 << " nota(s) de R$ 100.00" << endl;
	cout << n50 << " nota(s) de R$ 50.00" << endl;
	cout << n20 << " nota(s) de R$ 20.00" << endl;
	cout << n10 << " nota(s) de R$ 10.00" << endl;
	cout << n5 << " nota(s) de R$ 5.00" << endl;
	cout << n2 << " nota(s) de R$ 2.00" << endl;

	int c = (n - n1) * 100;
	int c50, c25, c10, c5, c1;

	cout << "MOEDAS:" << c << endl;

	c50 = c/50;
	c -= 50*c50;

	c25 = c/25;
	c -= 25*c25;

	c10 = c/10;
	c -= 10*c10;

	c5 = c/5;
	c -= 5*c5;

	cout << n1 << " moeda(s) de R$ 1.00" << endl;
	cout << c50 << " moeda(s) de R$ 0.50" << endl;
	cout << c25 << " moeda(s) de R$ 0.25" << endl;
	cout << c10 << " moeda(s) de R$ 0.10" << endl;
	cout << c5 << " moeda(s) de R$ 0.05" << endl;
	cout << c << " moeda(s) de R$ 0.01" << endl;

	return 0;
}
