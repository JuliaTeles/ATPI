/*
  --> PSEUDO-CÓDIGO <--

    algoritmo
        declare ano numérico
        escreva "Informe o ano: "
        leia ano
        se ano%4 = 0
            se ano%100 = 0
                se ano%400 = 0
                então escreva "O ano é bissexto"
            então escreva "O ano não é bissexto"
        então escreva "O ano é bissexto"
        senão escreva "O ano não é bissexto"
    fim_algoritmo

    --> Observações <--
    - Há diversas formas de fazer tal exercício como a maioria dos
    problemas de programação, assim busquei fazer de uma forma mais clara,
    sem me preocupar muito com tempo de processamento e afins.
    - Vale ressaltar que o Switch também pode ser usado ao invés da corrente
    de if's.

*/

#include <iostream>
using namespace std;

int main(){

    int ano;
    cout << "Informe o ano: \n" ;
    cin >> ano;

    if (ano%4 == 0){
        if(ano%100 == 0){
            if(ano%400 == 0){
                cout << "O ano " << ano << " e bissexto.\n";
            }
            else{
                cout << "O ano " << ano << " nao e bissexto.\n";
            }
        }else{
            cout << "O ano " << ano << " e bissexto.\n";
        }

    }else{
        cout << "O ano " << ano << " nao e bissexto.\n";
    }


}
