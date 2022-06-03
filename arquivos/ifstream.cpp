#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream arquivoEntrada;

    string linha;

    arquivoEntrada.open("arquivo.txt");

    if(arquivoEntrada.is_open()){
        while(getline(arquivoEntrada, linha)){
            cout << linha;
        }
    } else {
        cout << "deu ruim";
    }
    arquivoEntrada.close();

    return 0;
}