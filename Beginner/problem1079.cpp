#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
	cin >> n;
	double a, b, c;

	for(int i = 0; i < n; i++){
		cin >> a >> b >> c;
		printf("%0.1f\n", (a*2+b*3+c*5)/10);
	}
 
    return 0;
}
