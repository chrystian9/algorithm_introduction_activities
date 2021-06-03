#include <iostream>
using namespace std;

struct children{
	string name, gift;
	int good, bad; // boas e más atitudes
	bool notGood=false;
};

int main (){
	int nKids;
	cin >> nKids;
	children kids[nKids];
	
	for (int c=0; c < nKids; c++){
		cin >> kids[c].name >> kids[c].gift >> kids[c].good >> kids[c].bad;
		if (kids[c].good <= kids[c].bad){kids[c].notGood = true;}
	}
	int cont=0;
	for (int c=0; c < nKids; c++){
		if (kids[c].notGood == true){
			cout << kids[c].name << " ";
			cont++;
		}
	}
	if (cont == 0){cout << "Ninguem" << endl;}
	return 0;
}
