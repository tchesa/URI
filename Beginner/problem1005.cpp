#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double a, b;
	cin >> a >> b;
	double MEDIA = (a * 3.5 + b * 7.5) / 11.;
	printf("MEDIA = %0.5lf\n", MEDIA);

	return 0;
}
