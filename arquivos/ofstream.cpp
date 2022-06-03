#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream arquivo;

    // com ios::app ele adicioa e não substitui texto
    arquivo.open("arquivo.txt", ios::app);

    arquivo << "texto\n";
    arquivo << "humbertim";

    arquivo.close();

    return 0;
}