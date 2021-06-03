#include <iostream>
using namespace std;

float conversaoM_Cm(float num){
	num = num * 100;
	return num;
}

float conversaoCm_M(float num){
	num = num / 100;
	return num;
}


int main (){
	float num;
	string unidade;
	
	cin >> num;
	cin >> unidade;
	
	if (unidade == "metro" or unidade == "centimetro"){
		if (unidade == "metro"){
			num = conversaoCm_M(num);
			cout << num << " " << "m" <<endl;
		}else if (unidade == "centimetro"){
			num = conversaoM_Cm(num);
			cout << num << " " << "cm" << endl;
		}
	}else{
		cout << "ERRO" << endl;
	}	
	return 0;
}
