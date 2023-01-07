#include "cifragem.h"

int main() {

  int c = 0;

  while (c != 3) {

    cout << "DIGITE UMA OPCAO" << endl;
    cout << "1 PARA CRIPTOGRAFAR UMA MENSAGEM" << endl;
    cout << "2 PARA DESCRIPTOGRAFAR UMA MENSAGEM" << endl;
    cout << "3 SAIR" << endl;
    cin >> c;
    cout << "c=" << c << endl;

    switch (c) {

    case 1:
      system("clear");
      cifrar();
      break;

    case 2:
      system("clear");
      decifrar();
      break;

    case 3:
      system("clear");
      cout << "SAINDO.." << endl;
      system("sleep 1");
      system("clear");
      break;
    defaut:
      cout << "POR FAVOR, DIGITE UMA OPCAO VALIDA" << endl;
      break;
    }
  }

  return 0;
}
