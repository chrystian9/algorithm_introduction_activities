#include <iostream>
using namespace std;

struct coordenadas{
	float x;
	float y;
};

struct carro{
	coordenadas velocidade;
	coordenadas posicao;
};

int main (){
	carro entrada, saida;
	float tempo;
	
	cin >> entrada.posicao.x >> entrada.posicao.y;
	cin >> entrada.velocidade.x >> entrada.velocidade.y;
	cin >> tempo;
	
	saida.posicao.x = (entrada.posicao.x + (entrada.velocidade.x * tempo));
	saida.posicao.y = (entrada.posicao.y + (entrada.velocidade.y * tempo));
	
	cout << saida.posicao.x << " " << saida.posicao.y << endl;
	
	return 0;
}
