#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num;
    const float pi=3.14159265359;
    char funcao, tipo;
    
    cin >> funcao >> tipo >> num;
    
    if (funcao == 'c'){
        if (tipo == 'g'){
			if (num == 90 or num == 270){
				cout << 0 << endl;
            }else{
				num = num * (pi/180);
				cout << cos (num) << endl;
			}
        }else if (tipo == 'r'){
            cout << cos (num) << endl;
        }
    }else if (funcao == 's'){
        if (tipo == 'g'){
			if (num == 90){
				cout << 1 << endl;
			}else if (num == 270){
				cout << "-1" << endl;
			}else{
				num = num * (pi/180);
				cout << sin (num) << endl;
			}
        }else if (tipo == 'r'){
            cout << cos (num) << endl;
        }
	}
    return 0;
}
