#include <iostream>
 
using namespace std;
 
int main() {
 
    int t, pa, pb, years;
	double g1, g2;
	cin >> t;

	for(int i = 0; i < t; i++){
		cin >> pa >> pb;
		cin >> g1 >> g2;

		years = 0;
		while (years <= 100 && pa <= pb)
		{
			pa += pa * g1 / 100;
			pb += pb * g2 / 100;
			years++;

			//cout << years << "\t" << pa << " " << pb << endl;
		}

		if (years > 100) cout << "Mais de 1 seculo." << endl;
		else             cout << years << " anos." << endl;
	}
 
    return 0;
}
