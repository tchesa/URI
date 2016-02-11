#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int aux;
	int n = 0;

	for (int i = 0; i < 5; i++){
		cin >> aux;
		if(aux%2 == 0) n++;
	}

	printf("%i valores pares\n", n);

	return 0;
}
