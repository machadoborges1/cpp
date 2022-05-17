#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>vct={9, 2, 7, 4, 5, 6, 3, 8, 0, 1};

    for(auto it=vct.begin();it!=vct.end();it++){
        cout << *it << endl;
    }
    for(auto it=vct.rbegin();it!=vct.rend();it++){
        cout << *it << endl;
        //reverse
    }

    // capacidade
    vct.size();
    vct.max_size();
    // 2345434535

    vct.resize(5);
    // 5 9 2 7 4 5 - array redimencionado para 5 elementos

    vct.capacity();
    // 10 - capacidade inicial do nosso array
    // embora redizido a capacidade ainda é a mesma

    vct.shrink_to_fit();
    // muda a capacidade do vetor

    vct.empty(); // true caso vazio

    //Acesso Aos elementos

    vct[1];
    vct.at(3);
    vct.front();
    vct.back();

    vector<int>vct2;
    vct2.assign(10, 9); // 9 9 9 9 9 9 9 9 9 9
    vct2.assign(vct.begin(), vct.end()); // 9 2 7 4 5 6 3 8 0 1

    vct.push_back(0); // adicionado 0 no final
    vct.pop_back(); // remove o ultimo elemento

    vector<int>::iterator vct3; 
    vct3 = vct2.begin();
    vct2.insert(vct3, 2, 5); // 5 5 9 9 9 9 9 9 9 9 9

    vct3 = vct2.begin() + 3; // 9 9 9 5 9 9 9 9 9

    vct.erase(vct.begin()) // vai remover do inicio
    // posso passar o ponto de inicio e o ponto final de remoção

    vct.swap(vct2) // troca os elementos

    vct.clear(); // remove os elementos

    vct.emplace(vct.begin()+2, 9); // colocou o 9 na segunda posição

    vct.emplace_back(9) // 9 no final
    
    return 0;
}