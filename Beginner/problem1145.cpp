#include <iostream>
 
using namespace std;
 
int main() {
    int m, n;
    cin >> m >> n;
    
    for(int i = 1; i <= n; i++){
        if(i%m == 0) cout << i << endl;
        else cout << i << " ";
    }

    return 0;
}
