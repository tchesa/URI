#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(b>c && d>a && c+d>a+b && c>0 && d>0) cout << "Valores aceitos" << endl;
	else cout << "Valores nao aceitos" << endl;

	return 0;
}
