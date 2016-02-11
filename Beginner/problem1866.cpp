#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	int c;
	cin >> c;
	int aux;

	for(int i=0; i<c; i++)
	{
		cin >> aux;
		if(aux%2==0) cout << 0 << endl;
		else cout << 1 << endl;
	}

	return 0;
}
