#include <iostream>
using namespace std;

int main (){
	int n, p;
	
	cin >> n;
	
	int vet[n];
	
	for (int i=0; i < n; i++){
		cin >> vet[i];
	}
	
	cin >> p;
	p++;
	int vetFinal[n];
	int j=0;
	
	for (int i=0; i < n; i++){
		if (p < n){
			vetFinal[i] = vet[p++];
			cout << vetFinal[i] << " ";
		}else{
			vetFinal[i] = vet[j];
			cout << vetFinal[i] << " ";
			j++;
		}
	}
	cout << endl;
	
	return 0;
}
