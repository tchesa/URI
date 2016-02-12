#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int x;
	float y;
	cin >> x >> y;

	printf("%0.3lf km/l\n", x/y);

	return 0;
}
