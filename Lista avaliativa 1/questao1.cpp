#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
	float raio, x, y, ang;
	int numCadeiras, cont=0;
	const float pi=3.14159265358;
	cin >> raio;
	cin >> numCadeiras;
	
	while (cont < numCadeiras){
		ang = ((360/numCadeiras) * cont ) * (pi/180);
		x = (cos(ang)) * raio;
		y = (sin(ang)) * raio;
		cout << fixed << setprecision (2);
		cout << x << " " << y << endl;
		cont++;
	}
	return 0;
}
			
