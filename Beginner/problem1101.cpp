#include <iostream>
 
using namespace std;
 
int main() {
 
    int m, n, sum;
    cin >> m >> n;
    
    while(m > 0 && n > 0)
    {
        if(m > n){
            int aux = m;
            m = n;
            n = aux;
        }
        
        sum = 0;
        for(int i = m; i <= n; i++){
            sum += i;
            cout << i << " ";
        }
        
        cout << "Sum=" << sum << endl;
        cin >> m >> n;
    }
 
    return 0;
}
