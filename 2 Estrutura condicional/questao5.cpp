#include <iostream>
using namespace std;

int main (){
    int dia, mes, ano, dia1, mes1, ano1, dia2, mes2, ano2;
    
    cin >> dia1;
    cin >> mes1;
    cin >> ano1;
    cin >> dia2;
    cin >> mes2;
    cin >> ano2;
    
    if (ano1 > ano2){
        ano = ano1;
        dia = dia1;
        mes = mes1;
    }else if(ano1 < ano2){
        ano = ano2;
        mes = mes2;
        dia = dia2;
    }else if(ano1 == ano2){
        ano = ano1;
        if (mes1 > mes2){
            mes = mes1;
            dia = dia1;
        }else if(mes1 < mes2){
            mes = mes2;
            dia = dia2;
        }else if(mes1 == mes2){
            mes = mes1;
            if (dia1 > dia2){
                dia = dia1;
            }else if(dia1 < dia2){
                dia = dia2;
            }else if(dia1 == dia2){
                dia = dia1;
            }
        }
    }
    cout << dia << " " << mes << " " << ano << endl;
    return 0;
}
