#include <iostream>
#include <string>
using namespace std;

struct doador{
	string name, tipoS;
	int codigo;
};

int main (){
	int n;
	cin >> n;
	string tipo;
	doador doadores[n];
	
	for (int c=0; c<n; c++){
		cin >> doadores[c].name >> doadores[c].tipoS;
		cin.ignore();
		if (doadores[c].tipoS == "A"){doadores[c].codigo = 1;}
		if (doadores[c].tipoS == "B"){doadores[c].codigo = 2;}
		if (doadores[c].tipoS == "AB"){doadores[c].codigo = 3;}
		if (doadores[c].tipoS == "O"){doadores[c].codigo = 4;}
	}
	cin >> tipo;
	if (tipo == "A"){
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 1){
				cout << doadores[c].name << endl;
			}
		}
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 4){
				cout << doadores[c].name << endl;
			}
		}
	}
	if (tipo == "B"){
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 2){
				cout << doadores[c].name << endl;
			}
		}
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 4){
				cout << doadores[c].name << endl;
			}
		}
	}
	if (tipo == "AB"){
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 3){
				cout << doadores[c].name << endl;
			}
		}
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 1){
				cout << doadores[c].name << endl;
			}
		}
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 2){
				cout << doadores[c].name << endl;
			}
		}
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 4){
				cout << doadores[c].name << endl;
			}
		}
	}
	if (tipo == "O"){
		for (int c=0; c<n; c++){
			if (doadores[c].codigo == 4){
				cout << doadores[c].name << endl;
			}
		}
	}
	return 0;
}
