#include <iostream>
using namespace std;

struct medalhas{
	int ouro;
	int prata;
	int bronze; 
};

int main(){
	medalhas *valor = new medalhas;
	
	cin >> valor->ouro >> valor->prata >> valor->bronze;
	
	medalhas *quant = new medalhas;
	
	cin >> (*quant).ouro >> (*quant).prata >> (*quant).bronze;
	
	int resultado;
	
	resultado = ((*valor).ouro * (*quant).ouro) + ((*valor).prata * (*quant).prata) + ((*valor).bronze * (*quant).bronze);
	
	cout << resultado << endl;
	
	return 0;
}
