#include<iostream>
#include<string> // Manipulação de string

using namespace std;

int main(){

    string txt("resolucao exercicio");
    // txt = "Humberto";
    string::iterator it;

    it = txt.begin();
    // r
    it = txt.end()-1;
    // o
    txt.size();
    txt.length();
    // 19
    txt.max_size();
    // 46838554
    txt.resize(10);
    // 10 - string mudou o tamanho para 20
    txt.capacity();
    // 20 - tamanho alocado para string
    txt.clear();
    // string vazia
    if(txt.empty()){cout << "string limpa" << endl;}
    // string limpa - retorna true caso string esteja vazia
    txt.shrink_to_fit();
    // 19 - reduz a capacidade para o tamanho que oculpa
    
    



    return 0;
}