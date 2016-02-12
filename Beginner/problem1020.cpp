#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int days;
	cin >> days;

	int years = days / 365;
	int months = (days - years * 365) / 30;
	days = (days - years * 365) % 30;

	cout << years << " ano(s)" << endl;
	cout << months << " mes(es)" << endl;
	cout << days << " dia(s)" << endl;

	return 0;
}
