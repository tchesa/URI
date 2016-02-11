#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int n;
	cin >> n;
	//  500  100  50   10   5    I=n
	int d=0, c=0, l=0, x=0, v=0;

	d = n/500;
	n -= d*500;

	c = n/100;
	n -= c*100;

	l = n/50;
	n -= l*50;

	x = n/10;
	n -= x*10;

	v = n/5;
	n -= v*5;

	for(int i=0; i<d; i++) cout << "D";
	if (c==4) cout << chfor(int i=0; i<c; i++) cout << "C";
	for(int i=0; i<l; i++) cout << "L";
	for(int i=0; i<x; i++) cout << "X";
	for(int i=0; i<v; i++) cout << "V";
	for(int i=0; i<n; i++) cout << "I";

	return 0;
}
