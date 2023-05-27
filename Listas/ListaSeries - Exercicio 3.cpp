/*
    --> ENUNCIADO <--
        3) Refaça a questão 2 com a seguinte modificação no item c: valor limite.
        (Não é garantido que o usuário irá informar um valor limite coerente.)

    --> PSEUDO-CÓDIGO <--

    algoritmo
        declare termo, razao, limite, i numérico
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
    int termo, razao, limite;
    termo = 0;
    razao = 0;
    limite = 0;

    cout << "Escreva o termo inicial: ";
    cin >> termo;

    cout << "\nEscreva a razão: ";
    cin >> razao;

    cout << "\nEscreva o limite: ";
    cin >> limite;

    cout << " | " << termo << " | ";
    if(limite>0){
        while(limite>termo){
            termo = termo + razao;
            cout << termo << " | ";
        }
    }
    else{
        cout << "O limite informado não é coerente";
    }



}

