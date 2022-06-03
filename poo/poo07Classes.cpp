#include <iostream>
#include <memory> // smart pointer 

class Carro {

public:
    int velMax;
    int potencia;
    const char* nome;

    Carro(const char* n, int p){
        this -> nome = n; // c++ ja entende desta maneira.
        // this -> nome = nome; // fica claro de entender que o nome é do objeto.
        // nome = n;
        potencia = p;
        if (p < 100) {
            this -> velMax = 120;
        } else if (p < 200){
            velMax = 200;
        } else {
            this -> velMax = 300;
        }
    }
};

class Carros {

public:
    int velMax;
    int potencia;
    const char* nome;

    //lista de inicialização.
    Carros(const char* n, int p):nome(n), potencia(p){
        if (p < 100) {
            this -> velMax = 120;
        } else if (p < 200){
            velMax = 200;
        } else {
            this -> velMax = 300;
        }
    }
};

using namespace std;

int main(){

    // lista de inicialização uniforme evita que declaremos o new.
    Carros c0{"vectra", 250};

    cout << c0.nome << "-" << c0.potencia << "-" << c0.velMax << endl;

    // usando smart pointer
    unique_ptr<Carros>c2(new Carros{"Astra", 150});
    cout << c2 -> nome << "-" << c2 -> potencia << "-" << c2 -> velMax << endl;


    Carro *c1 = new Carro("monza", 300); // c++ moderno não precisa usar mais o new, para nao ter que usar delete.
    
    cout << c1 -> nome << "-" << c1 -> potencia << "-" << c1 -> velMax << endl;

    delete c1;

    return 0;
}