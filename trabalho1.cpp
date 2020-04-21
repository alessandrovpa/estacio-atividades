#include <iostream>

using namespace std;

int main(){
  float nota1, nota2, nota3, media;
  cout << "Digite a primeira nota: ";
  cin >> nota1;
  cout << endl << "Digite a segunda nota: ";
  cin >> nota2;
  cout << endl << "Digite a terceira nota: ";
  cin >> nota3;
  media = ((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);
  cout << endl << "A média do aluno é " << media;
}