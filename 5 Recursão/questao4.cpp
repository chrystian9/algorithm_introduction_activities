#include <iostream>
using namespace std;

int ricci(int nTermos, int n1, int n2){
	if (nTermos == 0){
		return n1;
	}else if (nTermos == 1){
		return n2;
	}else{
		return ricci((nTermos - 1), n1, n2) + ricci((nTermos - 2), n1, n2);
	}
}

int main (){
	int n1, n2, numTermos, cont=0;
	
	cin >> n1 >> n2 >> numTermos;
	
	while (cont < numTermos){
		cout << ricci(cont, n1, n2) << " ";
		cont++;
	}
	return 0;
}
