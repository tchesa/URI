#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
 
    int r = 1;
    double a, b;
    
    while(r == 1){
        cin >> a;
        while(a < 0.0 || a > 10.0){
            cout << "nota invalida" << endl;
            cin >> a;
        }
        
        cin >> b;
        while(b < 0.0 || b > 10.0){
            cout << "nota invalida" << endl;
            cin >> b;
        }
        
        printf("media = %.2f\n", (a+b)/2.0);
        
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> r;
        while(r != 1 && r != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> r;
        }
    }
 
    return 0;
}
