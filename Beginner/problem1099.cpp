#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int n, a, b, sum;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        sum = 0;
        
        if(a>b){
            int aux = a;
            a = b;
            b = aux;
        }
        
        for(int j = a+1; j < b; j++){
            if(j % 2 != 0) sum += j;
        }
        
        cout << sum << endl;
    }
}
