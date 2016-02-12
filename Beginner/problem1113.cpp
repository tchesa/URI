#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    cin >> a >> b;
    
    while(a != b){
        if(a > b) cout << "Decrescente" << endl;
        else cout << "Crescente" << endl;
        
        cin >> a >> b;
    }
 
    return 0;
}
