#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, cont=0, cont2=0,tam=0;
	cin >> n;
	string p, yes[n], no[n];
	for(int c=0; c<n; c++){
		cin >> p;
		tam = p.size();
		if (tam%2 == 0){
			for (int i=0; i<tam/2; i++){
				for (int j=tam/2; j<tam; j++){
					if (p[j] == p[i]){cont++;}
				}
				if(cont == 1){cont2++;}
				cont = 0;
			}
			if(cont2 == tam/2){yes[c] = p;}
			else no[c] = p;
		}else{
			for (int i=0; i<tam/2; i++){
				for (int j=(tam/2)+1; j<tam; j++){
					if (p[j] == p[i]){cont++;}
				}
				if(cont == 1){cont2++;}
				cont = 0;
			}
			if(cont2 == tam/2){yes[c] = p;}
			else no[c] = p;
		}
	}
	for (int c=0; c<n ;c++){
		if(c==0){
			cont = yes[c];
			cont2 = yes[c];
		}
		else if(cont < yes[c]){cont = yes[c];}
		else if(cont2 < yes[c] and cont2 > cont){cont2 = yes[c];}
	}
	for(int c=0; c<
			
			
			
			
	}
	
		 
