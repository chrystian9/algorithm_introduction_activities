#include <iostream>
using namespace std;

int resultado(int jogo[3][3]){
	if (jogo[0][0] == jogo[0][1] and jogo[0][0] == jogo[0][2]){
		return jogo[0][0];
	}else if(jogo[1][0] == jogo[1][1] and jogo[1][0] == jogo[1][2]){
		return jogo[1][0];
	}else if(jogo[2][0] == jogo[2][1] and jogo[2][0] == jogo[2][1]){
		return jogo[2][0];
	}else if(jogo[0][0] == jogo[1][0] and jogo[0][0] == jogo[2][0]){
		return jogo[0][0];
	}else if(jogo[0][1] == jogo[1][1] and jogo[0][1] == jogo[2][1]){
		return jogo[0][1];
	}else if(jogo[0][2] == jogo[1][2] and jogo[0][2] == jogo[2][2]){
		return jogo[0][2];
	}else if(jogo[0][0] == jogo[1][1] and jogo[0][0] == jogo[2][2]){
		return jogo[0][0];
	}else if(jogo[0][2] == jogo[1][1] and jogo[0][2] == jogo[2][0]){
		return jogo[0][2];
	}else{
		return 0;
	}
}

int main (){
	int jogo[3][3];
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cin >> jogo[i][j];
		}
	}
	cout << resultado(jogo) << endl;
	return 0;
}
