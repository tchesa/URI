#include <iostream>
 
using namespace std;
 
int main() {
 
    int alcohol = 0, gasoline = 0, diesel = 0;
    int aux;
    
    do{
        cin >> aux;
        
        if(aux == 1) alcohol++;
        else if(aux == 2) gasoline++;
        else if(aux == 3) diesel++;
    }while(aux != 4);
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;
 
    return 0;
}
