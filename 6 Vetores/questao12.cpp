#include <iostream>
using namespace std;

int main(){
	int n;
	char marc1, marc2;
	
	cin >> n;
	
	char vet[n];
	for (int i=0; i < n; i++){
		cin >> vet[i];
	}
	
	cin >> marc1 >> marc2;
	
	int m1, m2;
	for (int i=0; i < n; i++){
		if (vet[i] == marc1){
			m1 = i;
		}else if (vet[i] == marc2){
			m2 = i;
		}
	}
	
	if (m1 < m2){
		for (int i = (m1+1); i < m2; i++){
			cout << vet[i] << " ";
		}
	}else{
		for (int i = (m2+1); i < m1; i++){
			cout << vet[i] << " ";
		}
	}
	
	return 0;
}
		
	
			
	
	
