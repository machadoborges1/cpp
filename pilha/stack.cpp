#include <iostream>
#include <stack> // pilha
using namespace std;

int main(){

    stack<int> pilha1, pilha2;

    pilha1.push(10);
    pilha1.pop(); // apaga elemento
    pilha1.top(); // elemento de cima
    pilha1.empty(); // verifica se esta vazia
    pilha1.swap(pilha2); // C++11 elemento de pilha 1 em pilha dois
    pilha1.emplace(60); //colocou no topo o 60

    return 0;
}