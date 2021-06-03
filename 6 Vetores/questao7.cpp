#include <iostream>
using namespace std;

int main (){
	int n;
	bool resp;
	
	cin >> n;
	
	int vet[n];
	
	for (int i=0; i < n; i++){
		cin >> vet[i];
	}
	
	if ((n-1) % 2 == 0){
		int aux = n-1;
		for (int i=0; i < ((n-1)/2); i++){
			if ((vet[i] - vet[aux]) == 0){
				resp = true;
			}else{
				resp = false;
			}
			aux--;
		}
	}else{
		int aux = n-1;
		for (int i=0; i <= ((n-1)/2); i++){
			if ((vet[i] - vet[aux]) == 0){
				resp = true;
			}else{
				resp = false;
			}
			aux--;
		}
	}
	cout << resp << endl;
	
	return 0;
}
