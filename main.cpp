#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include "pilha.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Pilha<int> p(50);
    int opc, dec, resto, qt=-1;

    do{
        cout<< "\n   0101  -  De Decimal Para Binário  -  1010" <<endl;
        cout<< "\n               1  -  Converter" <<endl;
        cout<< "               2  -  Sair" <<endl;
        cout<< "\n\n   Selecione: ";
        cin>> opc;

        system("cls");
        switch(opc){
            //Coverter de Decimal para Binário
            case 1:
                cout<< "\n   0101  -  De Decimal Para Binário  -  1010" <<endl;
                cout<< "\n\n   Decimal: ";
                cin>> dec;

                while(dec >= 1){
                    resto = dec % 2;
                    p.empilha(resto);
                    dec = dec / 2;
                    qt++;
                }

                cout<< "\n   Binário:";
                for(int x=qt; x>=0; x--){
                    cout<< "  " << p.getValor(x);
                    p.desempilha();
                }
                qt = -1;
                cout<<"\n\n\n   ";
                break;

            //Sair
            case 2:
                return 0;
                break;

            default:
                continue;
                break;
        }
        system("pause");
        system("cls");

    } while(opc != 2);
}
