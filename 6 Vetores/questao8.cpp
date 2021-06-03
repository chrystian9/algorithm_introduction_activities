#include <iostream>
using namespace std;

int main(){
	int vet[7];
	int num[6];
	
	for (int i=0; i < 7; i++){
		cin >> vet[i];
	}
	
	int j=0, i;
	while (j < 6){
		cin >> num[j];
		if (num[j] < 0 ){
			i = j;
			j = 6;
		}else{
			i = j;
			j++;
		}
	}
	
	int resp = 1;
	for (int k=0; k <= (i-1); k++){
		resp = resp * vet[(num[k])];
	}
	cout << resp << endl;
	
	return 0;
}
