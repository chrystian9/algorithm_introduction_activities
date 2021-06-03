#include <iostream>
using namespace std;

int main (){
	int dia=0, hora=0, min=0, tempo=0;
	
	cin >> dia;
	cin >> hora;
	cin >> min;
	cin >> tempo;
	
	if (((tempo / 60) + hora >= 24) or ((tempo + min + (hora*60)) >= 1440)){
		dia = dia + ((tempo + min + (hora*60)) / 1440);
		tempo = (tempo + min + (hora*60)) % 1440;
		hora = 0;
	}
	if (tempo >= 60){
		hora = tempo / 60;
		tempo = tempo % 60;
	}
	cout << dia  << " " << hora << " " << tempo << endl;
	return 0;
}
