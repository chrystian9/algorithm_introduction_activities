#include <iostream>
using namespace std;

void Merge(int V[], int p, int q, int r, int U[])
{
	int a = p;
	int b = q+1;
	int tam = r - p + 1;
	for(int i = 0; i < tam; i++)
		if( b > r || (a <= q && V[a] < V[b]) )
			U[i] = V[a++];
		else
			U[i] = V[b++];
	for(int i = 0; i < tam; i++)
		V[p+i] = U[i];
}

void MergeSort(int V[], int primeira, int ultima, int U[])
{
	if(primeira >= ultima) return;

	int p = primeira;
	int r = ultima;
	int q = (p+r)/2;
	
	MergeSort(V, p, q, U);
	MergeSort(V, q+1, r, U);
	Merge(V, p, q, r, U);
}

int main (){
	int n;
	cin >> n;

	int vet[n];
	for(int c=0; c<n; c++){
		cin >> vet[c]; 
	}	
	int aux[n];
	
	MergeSort(vet, 0, n-1, aux);
	
	for(int c=0; c<n; c++){
		cout << vet[c] << " "; 
	}
	
	return 0;
}
