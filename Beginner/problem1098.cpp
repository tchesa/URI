#include <iostream>
 
using namespace std;
 
int main() {
 
    double i = 0., j = 0.;
	do{
		printf("I=%g J=%g\n", i, 1.+i+j);
		j++;

		if(j>2.){
			j = 0.;
			i += 0.2;
		}
	}while(i<2. && j<3.);
 
    return 0;
}
