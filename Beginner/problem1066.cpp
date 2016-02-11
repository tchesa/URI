#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int aux;
	int even = 0, odd = 0, positive = 0, negative = 0;

	for(int i = 0; i < 5; i++){
		cin >> aux;
		if(aux%2 == 0) even++;
		else odd++;

		if(aux>0) positive++;
		else if(aux<0) negative++;
	}

	printf("%i valor(es) par(es)\n", even);
	printf("%i valor(es) impar(es)\n", odd);
	printf("%i valor(es) positivo(s)\n", positive);
	printf("%i valor(es) negativo(s)\n", negative	);

	return 0;
}
