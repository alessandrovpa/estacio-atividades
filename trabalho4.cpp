#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main(){
  setlocale(LC_ALL, "portugueses");
  float precos[6] = {5.2, 8.3, 15.5, 10.2, 11.3, 6};
  char descricoes[6][16] = {"Cachorro quente", "Bauru simples", "Bauru com ovo", "Hambúrguer", "Cheesburguer", "Refrigerante"};
  int opcao = 0, quantidade, codigo;
  
  while(opcao < 100 || opcao > 105){
    cout << "Digite o número do item: ";
    cin >> opcao;
  }
  cout << endl << "Digite a quantidade: ";
  cin >> quantidade;

  codigo = opcao%100;

  cout << endl << "Você pediu " << quantidade << " " << descricoes[codigo] << ", e o valor ficou R$" << precos[codigo]*quantidade << setprecision(2);
}