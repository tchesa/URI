#include <iostream>
 
using namespace std;
 
int main() {
 
    int inter = 0, gremio = 0, empates = 0;
    int r = 1, a, b;
    
    while(r == 1){
        cin >> a >> b;
        if(a > b) inter++;
        else if (a < b) gremio++;
        else empates++;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> r;
        while(r != 1 && r != 2){
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> r;
        }
    }
    
    cout << inter + gremio + empates << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    
    if(inter > gremio) cout << "Inter venceu mais" << endl;
    else if(gremio > inter) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve bencedor" << endl;
 
    return 0;
}
