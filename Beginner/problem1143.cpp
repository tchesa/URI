#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        printf("%i %g %g\n", i, pow(i,2), pow(i,3));
    }
 
    return 0;
}
