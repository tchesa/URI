#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double salary;
	cin >> salary;

	double taxes = 0;
	salary -= 2000;
	if(salary > 0)
	{
		taxes += ((salary > 1000) ? 1000 : salary) * 0.08;
		salary -= 1000;
		if(salary > 0)
		{
			taxes += ((salary > 1500) ? 1500 : salary) * 0.18;
			salary -= 1500;
			if(salary > 0)
			{
				taxes += salary * 0.28;
			}
		}
	}

	if(taxes == 0) cout << "Isento" << endl;
	else printf("R$ %0.2lf\n", taxes);

	return 0;
}
