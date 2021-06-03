#include <iostream>
using namespace std;

int main(){
	int vet[7];
	
	for (int i=0; i < 7; i++){
		cin >> vet[i];
	}
	
	int j=0;
	for (int i=0; i < 7; i++){
		if (vet[i] % 2 == 0){
			cout << vet [i] << " ";
			j++;
		}
	}
	if (j == 0){
		cout << j;
	}
	j = 0;
	
	cout << endl;
	for (int i=0; i < 7; i++){
		if (vet[i] % 3 == 0){
			cout << vet [i] << " ";
			j++;
		}
	}
	if (j == 0){
		cout << j;
	}
	j = 0;
	
	cout << endl;
	for (int i=0; i < 7; i++){
		if (vet[i] % 2 == 0 and vet[i] % 3 ==0){
			cout << vet [i] << " ";
			j++;
		}
	}
	if (j == 0){
		cout << j;
	}
	j = 0;
	cout << endl;
	
	return 0;
}
