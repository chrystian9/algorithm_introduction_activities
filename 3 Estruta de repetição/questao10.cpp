#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int numN, cont=1;
	float razao, aN;
	
	cin >> razao;
	cin >> numN;
	
	while (cont <= numN){
		aN = 1 * pow(razao, (cont - 1));
		cout << aN << endl;
		cont++;
	}
	return 0;
}
