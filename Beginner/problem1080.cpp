#include <iostream>
 
using namespace std;
 
int main() {
 
    int aux, higher, n = 1;
    
    cin >> aux;
    higher = aux;
    
    for(int i = 2; i <= 100; i++){
        cin >> aux;
        if(aux > higher){
            higher = aux;
            n = i;
        }
    }
    
    cout << higher << endl << n << endl;
    
    return 0;
}
