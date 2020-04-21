#include <iostream>
#include <locale.h>

using namespace std;

int main(){
  setlocale(LC_ALL, "portugueses");
  int n1, n2;
  cout << "Digite o primeiro número: ";
  cin >> n1;
  cout << endl << "Digite o segundo número: ";
  cin >> n2;
  if(n1==n2)cout << endl << "Os números são iguais";
  else if(n1>n2) cout << endl << "O primeiro número é maior";
  else cout << endl << "O segundo número é maior";
}