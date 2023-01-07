#ifndef cifragem_h_included
#define cifragem_h_included
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void cifrar() {

  int chave;
  char c;
  fstream mensagem;
  fstream cifra;
  string linha;

  cout << "DIGITE A CHAVE DA CRIPTOGRAFIA" << endl;
  cin >> chave;
  mensagem.open("mensagem.txt", ios::out | ios::app);
  cout << "DIGITE A MENSAGEM QUE DESEJA CRIPTOGRAFAR OU 'exit' PARA TERMINAR"
       << endl;
  getchar();

  while (linha != "exit") {

    getline(cin, linha);
    mensagem << linha << "\n";
  }
  mensagem.close();

  system("clear");
  cout << "CRIPTOGRAFANDO..." << endl;
  mensagem.open("mensagem.txt", ios::in);
  cifra.open("cifra.txt", ios::out);

  while (mensagem.get(c)) {

    c = c + chave;
    cifra << c;
  }

  system("clear");
  mensagem.close();
  cifra.close();
  cout << "A CRIPTOGRAFIA ESTA PRONTA \n NO ARQUIVO 'cifra.txt'" << endl;
};

void decifrar() {

  int chave;
  char c;
  fstream decifrado;
  fstream cifra;
  string linha;

  cout << "DIGITE A CHAVE DA CRIPTOGRAFIA" << endl;
  cin >> chave;
  cifra.open("cifra.txt", ios::in);
  decifrado.open("decifrado.txt", ios::out);

  while (cifra.get(c)) {
    if (c != ' ') {
      c = c - chave;
    }
    decifrado << c;
  }
  system("clear");
  decifrado.close();
  cifra.close();
  cout << "A MENSAGEM DECIFRADA ESTÁ NO ARQUIVO 'decifrado.txt'" << endl;
};

#endif
