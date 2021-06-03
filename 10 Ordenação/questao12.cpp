#include <iostream>
using namespace std;

int Rearranja(int V[], int e, int d, int pivo, int U[])
{
	int j = e, k = d;

	swap(V[pivo], V[d]);
	pivo = d;

	for(int i = 0; i <= d; i++)
		if(V[i] <= V[pivo])
			U[i] = V[j++];
		else
			U[i] = V[k--];

	for(int i = 0; i <= d; i++)
		V[i] = U[i];

	return j-1;
}

void QuickSort(int V[], int e, int d, int U[])
{
	if(e >= d) return;

	int pivo = e;
	pivo = Rearranja(V, e, d, pivo, U);
	QuickSort(V, e, pivo, U);
	QuickSort(V, pivo+1, d, U);
}

int main (){
	int n;
	cin >> n;
	
	int vet[n], aux[n];
	
	for(int c=0; c<n; c++){
		cin >> vet[c];
	}
	
	QuickSort(vet, 0, n-1, aux);
	
	for(int c=0; c<n; c++){
		cout << vet[c] << " ";
	}
	return 0;
}
