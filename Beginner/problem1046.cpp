#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int a, b, hours;
	cin >> a >> b;

	if(a == b) hours = 24;
	else if (a > b) hours = (24 - a) + b;
	else hours = b - a;

	printf("O JOGO DUROU %i HORA(S)\n", hours);

	return 0;
}
