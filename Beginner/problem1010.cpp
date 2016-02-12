#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int cod1, n1, cod2, n2;
	double value1, value2;

	cin >> cod1 >> n1 >> value1;
	cin >> cod2 >> n2 >> value2;

	printf("VALOR A PAGAR: R$ %0.2lf\n", n1 * value1 + n2 * value2);

	return 0;
}
