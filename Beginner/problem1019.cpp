#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int n;
	cin >> n;

	int hours = n/60/60;
	int minutes = (n - hours*60*60)/60;
	int seconds = n - 60*60*hours - 60*minutes;

	cout << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}
