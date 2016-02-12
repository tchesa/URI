#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main (int argc, char *argv[]){
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double d = sqrt(pow(x2 - x1, 2.) + pow(y2 - y1, 2.));
	printf("%0.4lf\n", d);

	return 0;
}
