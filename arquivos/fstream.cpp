#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

    fstream arquivo;
    char opc='s';
    string nome, linha;

    arquivo.open("arquivo.txt", ios::out | ios::app);

    while ((opc == 's'))
    {
        cin >> nome;
        arquivo << nome <<"\n";
        system("CLS"); // comando de sair do windows
        cin >> opc;
    }
    
    arquivo.close();

    arquivo.open("arquivo.txt", ios::in);

    if(arquivo.is_open()){
        while(getline(arquivo, linha)){
            cout<<linha<<endl;
        }
    }

    return 0;
}
