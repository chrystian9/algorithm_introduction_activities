#include <iostream>
#include <cmath>
using namespace std;

int numCarac (int num, int carac&){
	int num, aux;
	
	cin >> num;
	
	aux = num;
	
	while (aux != 0){
		aux = aux / pow(10, cont);
		carac++;
	}
	return carac;
}

bool teste (int num){
	int carac=1;
	
	numCarac (num, carac);
	
	if ((num / pow(10, carac)) == num % 10);
		while(carac > 0){
			(num / pow(10, (carac-1))) == num % pow(10, carac)
	
	
