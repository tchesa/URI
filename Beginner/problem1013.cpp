﻿#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int a, b, c;
	cin >> a >> b >> c;
	int maiorAB = (a+b+abs(a-b))/2;
	int maiorABC = (maiorAB+c+abs(maiorAB-c))/2;

	cout << maiorABC << " eh o maior" << endl;

	return 0;
}
