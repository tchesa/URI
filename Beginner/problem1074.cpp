#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, aux;
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> aux;

        if(aux == 0) cout << "NULL" << endl;
        else{
        if(aux%2 != 0) cout << "ODD "; else cout << "EVEN ";
        if(aux < 0) cout << "NEGATIVE" << endl; else cout << "POSITIVE" << endl;
    }
}
