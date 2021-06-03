#include <iostream>
using namespace std;

struct ponto{
	int x, y;
};

struct vertice{
	ponto v1, v2;
};

int area(int &naArea, const ponto p, int v1_x, int v1_y, int v2_x, int v2_y){
	if (p.x <= v2_x and p.x >= v1_x and p.y <= v2_y and p.y >= v1_y){
		naArea++;
	}
	return 0;
}

int main (){
	ponto p1;
	int naArea=0;
	cin >> p1.x >> p1.y;
	int num;  // numero de retangulos
	cin >> num;
	vertice retangulos[num][4];
	for (int c=0; c<num; c++){
		cin >> retangulos[c][0].v1.x >> retangulos[c][1].v1.y >> retangulos[c][2].v2.x >> retangulos[c][3].v2.y;
		area(naArea, p1, retangulos[c][0].v1.x, retangulos[c][1].v1.y, retangulos[c][2].v2.x, retangulos[c][3].v2.y);
	}
	cout << naArea << endl;
	return 0;
}
