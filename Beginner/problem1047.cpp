#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int h1, m1, h2, m2, difference;
	cin >> h1 >> m1 >> h2 >> m2;

	m1 += h1 * 60;
	m2 += h2 * 60;

	if(m1 == m2) difference = 1440;
	else if (m1 > m2) difference = (1440 - m1) + m2;
	else difference = m2 - m1;

	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", difference/60, difference%60);

	return 0;
}
