/*
    --> ENUNCIADO <--
        2) Faça um programa em C++ para gerar progressões aritméticas a
        partir de 3 dados fornecidos pelo usuário:
            a) termo inicial;
            b) razão;
            c) quantidade de termos.
        Não é garantido que o usuário irá informar um número estritamente
        positivo para o item c.

    --> PSEUDO-CÓDIGO <--

    algoritmo
        declare termo, razao, quantidade, i numérico
        i = 0

        escreva "Escreva o termo inicial: "
        leia termo

        escreva "Escreva a razão: "
        leia razao

        escreva "Escreva a quantidade de termos: "
        leia quantidade

        se quantidade>0
        então
            escreva termo
            enquanto i<(quantidade-1)
            início
                termo = termo + razao
                escreva termo
                i = i + 1
            fim
        senão
            escreva "Quantidade de termos incorreta, informe um número maior do que 0."
    fim_algoritmo

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int termo, razao, quantidade, i;
    i = 0;

    cout << "Escreva o termo inicial: ";
    cin >> termo;

    cout << "\nEscreva a razão: ";
    cin >> razao;

    cout << "\nEscreva a quantidade de termos: ";
    cin >> quantidade;

    if(quantidade>0){
        cout << " | " << termo << " | ";
        while(i<(quantidade-1)){
                    termo = termo + razao;
                    cout << termo << " | ";
                    i++;
        }
    }
    else{
        cout << "\nQuantidade de termos incorreta, informe um número maior do que 0.";
    }

}
