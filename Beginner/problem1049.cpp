#include <iostream>
#include <stdio.h>
using namespace std;

int main (int argc, char *argv[]){
	string word;
	cin >> word;

	if(word == "vertebrado")
	{
		cin >> word;
		if(word == "ave")
		{
			cin >> word;
			if(word == "carnivoro") cout << "aguia" << endl;
			else if(word == "onivoro") cout << "pomba" << endl;
		}
		else if(word == "mamifero")
		{
			cin >> word;
			if(word == "onivoro") cout << "homem" << endl;
			else if(word == "herbivoro") cout << "vaca" << endl;
		}
	}
	if(word == "invertebrado")
	{
		cin >> word;
		if(word == "inseto")
		{
			cin >> word;
			if(word == "hematofago") cout << "pulga" << endl;
			else if(word == "herbivoro") cout << "lagarta" << endl;
		}
		else if(word == "anelideo")
		{
			cin >> word;
			if(word == "hematofago") cout << "sanguessuga" << endl;
			else if(word == "onivoro") cout << "minhoca" << endl;
		}
	}

	return 0;
}
