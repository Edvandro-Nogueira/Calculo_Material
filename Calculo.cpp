#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> barraItem;
vector<int> lista_de_pecas;
vector<int> lista_de_pecas_temp;
int medida_barra = 6000;

vector<int> barras_totais;
int qtd = qtd;
int medida = medida;
int n;


void add_lista(int qtd, int medida){
  if (qtd > 1){
    lista_de_pecas.push_back(medida);
    n += 1;
    add_lista(qtd-1, medida);
  }
  else{
    lista_de_pecas.push_back(medida);
    n += 1;
  }
}




//Função para otimização e aproveitamento
void otimiza (vector<int> lista_de_pecas_temp){
vector<int> barra;
vector<int> barras;
vector<int> lista_temp;
lista_de_pecas = lista_de_pecas_temp;
lista_temp = lista_de_pecas_temp;

  for(int i = 0; i < lista_de_pecas_temp.size(); i++) {
    if (lista_de_pecas_temp[i] <= medida_barra){
      barra.push_back(lista_de_pecas_temp[i]);
      lista_de_pecas_temp.erase(lista_de_pecas_temp.begin()+i);
      medida_barra = medida_barra - lista_de_pecas[i];
    }
  }
  lista_temp = lista_de_pecas_temp;
  barras = barra;
  barras_totais = barras;
  if (lista_de_pecas_temp.size() > 0){
    otimiza(lista_temp);
  }
  barra.clear();
}

void organiza1 (vector<int> lista_de_pecas){
  for(int i = 0; i < lista_de_pecas.size(); i++) {
    if (lista_de_pecas[i] <= medida_barra){
      barraItem.push_back(lista_de_pecas[i]);
      lista_de_pecas.erase(lista_de_pecas.begin());
      medida_barra = medida_barra - lista_de_pecas[i];
    }
    //cout << lista_de_pecas[i] << '\n';
  }
}


int main() {
  add_lista(3,600);
  add_lista(2,50);
  add_lista(4,333);
  add_lista(6,200);

  sort(lista_de_pecas.begin(), lista_de_pecas.end(), greater<int>());
  lista_de_pecas_temp = lista_de_pecas;

  //otimiza(lista_de_pecas_temp);
  organiza1(lista_de_pecas);

  //for(int i = 0; i < lista_de_pecas.size(); i++) {
  //  cout << lista_de_pecas[i] << '\n';
  //}
  //cout << medida_barra << '\n';

  for(int i = 0; i < barraItem.size(); i++) {
    cout << barraItem[i] << '\n';
  }

  //cout << "lista_temp" << lista_temp[0] << '\n';
  //cout << "lista_de_pecas" << lista_de_pecas[0] << '\n';
  //cout << "lista_de_pecas_temp" << lista_de_pecas_temp[0] << '\n';
  //otimiza(lista_de_pecas_temp);
  return 0;
}
