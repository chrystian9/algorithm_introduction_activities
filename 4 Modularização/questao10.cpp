#include <iostream>
#include <cmath>
using namespace std;

float juros(float capital, float taxa, int tempo){
	float M;
	M = (capital) * pow((1 + (taxa/100)), tempo);
	return M;
}

int main (){
	int tempo;
	float taxa, capital;
	
	cin >> capital >> taxa >> tempo;
	
	cout << juros(capital, taxa, tempo) << endl;
	
	return 0;
}
