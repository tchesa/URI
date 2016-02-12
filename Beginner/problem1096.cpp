#include <iostream>
 
using namespace std;
 
int main() {
 
    for(int i = 1, j = 7; i != 9 || j != 5; j--)
	{
		printf("I=%i J=%i\n", i, j);

		if(j==5){
			j = 8;
			i += 2;
		}
	}

	printf("I=%i J=%i\n", 9, 5);
 
    return 0;
}
