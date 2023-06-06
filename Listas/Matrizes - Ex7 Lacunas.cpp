#include <iostream>
using namespace std;

int main() {

  int quantidade;
  cout << "Digite a quantidade de elementos do array: \n";
  cin >> quantidade;

  int inicial[quantidade];
  int novo[quantidade * 2];
  for (int i = 0; i < quantidade; i++) {
    cout << "Digite o elemento " << i + 1 << " do array: \n";
    cin >> inicial[i];
  }

  for (int i = 0; i < quantidade * 2; i++) {
    novo[i] = 777;
  }

  int tamanho = 0, aumento = 0, posicao = 0;
  for (tamanho = 0; tamanho < quantidade; tamanho++) {

    // Positivo e negativo
    if (inicial[tamanho] > 0 && inicial[posicao + 1] < 0) {
      novo[tamanho] = inicial[posicao];
      novo[tamanho + 1] = 0;
      novo[tamanho + 2] = inicial[posicao + 1];
      tamanho = tamanho + 2;
      posicao = posicao + 2;
      quantidade++;
      aumento++;

    } else if (inicial[posicao] < 0 && inicial[posicao + 1] > 0) {
      novo[tamanho] = inicial[posicao];
      novo[tamanho + 1] = 0;
      novo[tamanho + 2] = inicial[posicao + 1];
      tamanho = tamanho + 2;
      posicao = posicao + 2;
      quantidade++;
      aumento++;

    }
    // +2
    else if (inicial[posicao] + 2 == inicial[posicao + 1]) {
      novo[tamanho] = inicial[posicao];
      novo[tamanho + 1] = inicial[posicao] + 1;
      novo[tamanho + 2] = inicial[posicao] + 2;
      tamanho = tamanho + 2;
      posicao = posicao + 2;
      quantidade++;
      aumento++;

    }
    // -2
    else if (inicial[posicao] - 2 == inicial[posicao + 1]) {
      novo[tamanho] = inicial[posicao];
      novo[tamanho + 1] = inicial[posicao] - 1;
      novo[tamanho + 2] = inicial[posicao] - 2;
      tamanho = tamanho + 2;
      posicao = posicao + 2;
      quantidade++;
      aumento++;
    }
    // default
    else {
      novo[tamanho] = inicial[posicao];
      posicao++;
    }
  }

  cout << "------------\n";
  cout << "Array antigo: \n";
  for (int i = 0; i < quantidade - aumento; i++) {
    cout << inicial[i] << "| ";
  }

  cout << "\n";
  cout << "Array novo: \n";
  for (int i = 0; i < quantidade; i++) {
    cout << novo[i] << "| ";
  }
}
