#include <iostream>
#include <string>
using namespace std;

string mes(int num){
	string mes;
	if (num > 12 or num < 1){
		mes = "erro";
		return mes;
	}else if (num == 1){
		mes = "janeiro";
		return mes;
	}else if (num == 2){
		mes = "fevereiro";
		return mes;
	}else if (num == 3){
		mes = "marco";
		return mes;
	}else if (num == 4){
		mes = "abril";
		return mes;
	}else if (num == 5){
		mes = "maio";
		return mes;
	}else if (num == 6){
		mes = "junho";
		return mes;
	}else if (num == 7){
		mes = "julho";
		return mes;
	}else if (num == 8){
		mes = "agosto";
		return mes;
	}else if (num == 9){
		mes = "setembro";
		return mes;
	}else if (num == 10){
		mes = "outubro";
		return mes;
	}else if (num == 11){
		mes = "novembro";
		return mes;
	}else if (num == 12){
		mes = "dezembro";
		return mes;
	}
	return "a";
}

int main (){
	int num;
	
	cin >> num;
	
	cout << mes(num);
	
	return 0;
}
