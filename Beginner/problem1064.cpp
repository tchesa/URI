#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double aux;
	double average = 0.;
	int n = 0;

	for(int i = 0; i<6; i++){
		cin >> aux;
		if(aux > 0.){
			n++;
			average += aux;
		}
	}

	average /= n;
	printf("%i valores positivos\n", n);
	cout << average << endl;

	return 0;
}
