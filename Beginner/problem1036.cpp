#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main (int argc, char *argv[]){
	double a, b, c;
	cin >> a >> b >> c;

	if(a == 0.) cout << "Impossivel calcular" << endl;
	else
	{
		double delta = pow(b,2.) - (4.*a*c);

		if(delta < 0) cout << "Impossivel calcular" << endl;
		else
		{
			double r1 = (-b +sqrt(delta))/(2*a);
			double r2 = (-b -sqrt(delta))/(2*a);

			printf("R1 = %0.5lf\n", r1);
			printf("R2 = %0.5lf\n", r2);
		}
	}

	return 0;
}
