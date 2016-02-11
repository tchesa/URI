#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int n[6];

	for(int i = 0; i < 6; i++) cin >> n[i];;
	for(int i = 0, j = 0; i < 6; i++){
		if(n[i] >= 0) j++;
		if(i == 5) printf("%i valores positivos\n", j);
	}

	return 0;
}
