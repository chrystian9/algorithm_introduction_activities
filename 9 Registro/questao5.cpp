#include <iostream>
#include <cmath>
using namespace std;

struct ponto{
	int x, y;
	void atribuir(int pX, int pY){x=pX; y=pY;}
	float distancia(const ponto &p){
		return sqrt(pow(x - p.x,2)+pow(y - p.y,2));
	}
};

int main (){
	int pX, pY;
	ponto p1, p2;
	float menor[3];
	cin >> pX >> pY;
	p1.atribuir(pX, pY);
	for (int i = 0; i < 4; i++){
		cin >> pX >> pY;
		p2.atribuir(pX, pY);
		if (i == 0){
			menor[0]= p1.distancia(p2);
			menor[1]=pX;
			menor[2]=pY;
		}
		if (p1.distancia(p2) < menor[0]){
			menor[0] = p1.distancia(p2);
			menor[1]=pX;
			menor[2]=pY;
		}
	}
	cout << menor[1] << " " << menor[2] << endl;
	return 0;
}
