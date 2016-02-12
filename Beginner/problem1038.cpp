#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int code, amount;
	cin >> code >> amount;

	float value;
	switch(code)
	{
		case 1 : value = 4.; break;
		case 2 : value = 4.5; break;
		case 3 : value = 5.; break;
		case 4 : value = 2.; break;
		case 5 : value = 1.5; break;
		default : value = 0.; break;
	}

	printf("Total: R$ %0.2lf\n", value * amount);

	return 0;
}
