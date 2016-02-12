#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
 
    double a, b;
    
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
 
    return 0;
}
