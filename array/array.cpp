#include<iostream>
#include<array> //c++ 11

using namespace std;

int main(){

    array<int,10>vt={2,4,6,2,6,8,5,3,2};

    //INTERATOR
    for(auto it=vt.begin(); it!=vt.end(); it++){
        cout<<*it<<endl;
    }
    //2 3 5 8 6 2 6 4 2 -  REVERSE INTERATOR
    for(auto it=vt.rbegin(); it!=vt.rend(); it++){
        cout<<*it<<endl;
    }
    //CAPACIDADE
    cout << vt.size() << vt.max_size() << endl;
    // 10 - tamanho do array e a capacidade maxima do array
    
    if(vt.empty())
    // true - se o array estiver vazio

    //ACESSO A ELEMENTOS
    cout << vt[4]; //6
    cout << vt.at(1); //4
    vt.front(); // priemiro elemento
    vt.back(); // ultimo elemento

    array<int, 10>vt2;
    vt2.fill(1); // vt2 - 1 1 1 1 1 1 1 1 1 1 1
    
    vt.swap(vt2);
    // vt - 1 1 1 1 1 1 1 1 1 
    // vt2 - 2 4 6 6 8 5 3 2

    return 0;
}