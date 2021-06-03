#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int n;
	cin >> n;
	float vet[n], max, media=0;

	for(int c=0; c<n; c++){
		cin >> vet[c];
		media = media + vet[c];
	}
	cin >> max;
	media = media / n;
	cout << media << endl;
	for(int c=0; c<n; c++){
		cout << abs(vet[c] - media) << " ";
	}
	cout << endl;
	for(int c=0; c<n; c++){
		if(vet[c] > (media - max) and vet[c] < (media + max)){
			cout << vet[c] << " ";
		}
	}
	return 0;
}
