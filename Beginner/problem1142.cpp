#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    for(int i = 0; i < n*4; i++)
    {
        if((i+1)%4 == 0) cout << "PUM" << endl;
        else cout << i+1 << " ";
    }
 
    return 0;
}
