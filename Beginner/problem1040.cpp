#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	double n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;

	double average = (n1*2 + n2*3 + n3*4 + n4)/10.;
	printf("Media: %0.1lf\n", average);
	if(average >= 7.) cout << "Aluno aprovado." << endl;
	else if(average < 5.) cout << "Aluno reprovado." << endl;
	else
	{
		cout << "Aluno em exame." << endl;
		double exam;
		cin >> exam;
		printf("Nota do exame: %0.1lf\n", exam);
		average = (average + exam)/2.;
		if(average >= 5.) cout << "Aluno aprovado." << endl;
		else cout << "Aluno reprovado." << endl;
		printf("Media final: %0.1lf\n", average);
	}

	return 0;
}
