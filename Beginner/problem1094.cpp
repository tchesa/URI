#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, c = 0, r = 0, s = 0;
	cin >> n;

	int a;
	char b;

	for(int i = 0; i < n; i++){
		cin >> a >> b;
		switch(b){
			case 'C': c += a; break;
			case 'R': r += a; break;
			case 'S': s += a; break;
			default: break;
		}
	}

	printf("Total: %i cobaias\n", c+r+s);
	printf("Total de coelhos: %i\n", c);
	printf("Total de ratos: %i\n", r);
	printf("Total de sapos: %i\n", s);
	double sum = (double)(c+r+s);
	double percentage = (double)(c)/sum;
	printf("Percentual de coelhos: %0.2f %%\n", percentage*100.);
	percentage = (double)(r)/sum;
	printf("Percentual de ratos: %0.2f %%\n", percentage*100.);
	percentage = (double)(s)/sum;
	printf("Percentual de sapos: %0.2f %%\n", percentage*100.);
 
    return 0;
}
