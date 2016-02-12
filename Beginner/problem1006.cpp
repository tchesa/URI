#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double a, b, c;
	cin >> a >> b >> c;

	double MEDIA = (a * 2 + b * 3 + c * 5) / 10;
	printf("MEDIA = %0.1lf\n", MEDIA);

	return 0;
}
