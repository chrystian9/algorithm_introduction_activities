#include <iostream>
#include <string>
using namespace std;

int main(){
	string p;
	int cont=0, tam=0;
	cin >> p;
	tam = p.size();
	for(int c=0; c<tam; c++){
		for(int i=0; i<tam; i++){
			if(p[i] == p[c]) cont++;
		}
		if (cont == 1){
			cout << p[c] << endl;
			c=tam;
		}
		cont=0;
	}
	return 0;
}
