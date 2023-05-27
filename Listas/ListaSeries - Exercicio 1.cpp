/*
    --> ENUNCIADO <--
        1) Faça um programa em C++ para gerar 10 números ímpares
        consecutivos após um número inteiro positivo fornecido pelo usuário.

    --> OBSERVAÇÕES <--
        - Nos casos de teste, o professor usa o número 7 e consta que é válido.
        Porém, no enunciado está dizendo que o número inserido há de ser um número
        par, portanto há um if o qual garante que a conta só seja realizado com tais
        números. Se quiser que o programa permita números ímpares é só remover
        o if/else e o tratamento de primeiro número.

    --> PSEUDO-CÓDIGO <--

    algoritmo
        declare numero, i numérico
            numero = 0
            i = 1
        escreva "Escreva um número par e positivo: "
        leia numero

        se numero%2 = 0
        então
            numero = numero + 1
            escreva numero
            enquanto i < 10
            início
                numero = numero + 2
                escreva numero
                i = i + 1
            fim
        senão
            escreva "O número informado não é par!"
    fim_algoritmo

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, i;

    numero = 0;
    i = 1;

    cout << "Escreva um número par e positivo: ";
    cin >> numero;

    if(numero%2 == 0){
            numero++;
            cout << "\n | " << numero << " | ";
            while(i<10){
                numero = numero + 2;
                cout << numero << " | ";
                i++;
            }
    }
    else{
        cout << "O número digitado não é par! \n";
    }

}
