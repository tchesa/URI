#include <iostream>
 
using namespace std;
 
int main() {
 
    for(int i = 0, j = 0; i < 7 || j < 2; j++){
		printf("I=%i J=%i\n", 1+i, 7-j+i);

		if(j==2){
			i += 2;
			j = -1;
		}
	}

	printf("I=%i J=%i\n", 9, 13);
 
    return 0;
}
