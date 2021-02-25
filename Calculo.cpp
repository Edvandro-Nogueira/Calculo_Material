#include <iostream>
//#include <list>
//#include <vector>
using namespace std;

int lista_de_pecas[] = {};
//vector<int> lista_de_pecas;
//list<int> lista_de_pecas;
int qtd = qtd;
int medida = medida;

void add_lista(int qtd, int medida){

  if (qtd == 1){
    //lista_de_pecas.push_back(medida);
    //lista_de_pecas.append(medida);
    //lista_de_pecas.push_back(medida);
    lista_de_pecas + medida;
  }
  else{
    //lista_de_pecas.push_back(medida);
    //lista_de_pecas.push_back(medida);
    //lista_de_pecas.append(medida);
    lista_de_pecas + medida;
    add_lista(qtd-1, medida);
  }
}

int main() {
  add_lista(3,600);
  add_lista(2,50);
  int n = sizeof lista_de_pecas/sizeof (lista_de_pecas);
  for(int i = 0; i < n; i++) {
    cout << lista_de_pecas[i] << '\n';
  }
  return 0;
}
