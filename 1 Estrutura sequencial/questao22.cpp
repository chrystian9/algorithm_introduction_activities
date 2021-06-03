#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int serieProduto = 0;
	float serieCaixa = 0;
	
	cin >> serieProduto;
	serieCaixa = float(serieProduto) / 6;
	cout << ceil(serieCaixa);
	return 0;
}
