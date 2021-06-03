#include <iostream>
#include <string>
using namespace std;

int main (){
	string p;
	int cont=0, tam;
	cin >> p;
	tam = p.size();
	for (int c=0; c<tam; c++){
		if (p[c] == 'a' or p[c] == 'e' or p[c] == 'i' or p[c] == 'o' or p[c] == 'u'){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}
