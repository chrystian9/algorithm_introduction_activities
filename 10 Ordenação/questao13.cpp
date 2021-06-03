#include <iostream>
using namespace std;

void quickSort(int v[], int esq, int dir, int n){
	int i, j, pivo;
	i = esq;
	j = dir;
	pivo = v[(esq+dir)/2];
	while (i <= j) {
		while (v[i] < pivo) {
			i++;
		}
		while (v[j] > pivo) {
			j--;
		}
		if (i <= j) {
			swap(v[i], v[j]);
			i++;
			j--;
		}
	}
	
	for(int c=0; c<n; c++){
		cout << v[c] << " ";
	}
	cout << endl;
	
	if (esq < j) {
		quickSort(v, esq, j, n);
	}
	if (i < dir) {
		quickSort(v, i, dir, n);
	}
}

int main (){
	int n;
	cin >> n;
	
	int vet[n];
	for(int c=0; c<n; c++)
		cin >> vet[c];

	quickSort(vet, 0, n-1, n);
	
	for(int c=0; c<n; c++)
		cout << vet[c] << " ";

	
	return 0;
}
