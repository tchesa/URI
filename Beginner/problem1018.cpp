#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
int n;
	cin >> n;

	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

	cout << n << endl;

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

	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;

	return 0;
}
