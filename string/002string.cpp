#include<iostream>
#include<string> // Implementa a classe - manipulação de string

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
    // 10 - string mudou o tamanho para 10
    
    txt.capacity();
    // 20 - tamanho alocado para string
    
    txt.clear();
    // string vazia
    if(txt.empty()){cout << "string limpa" << endl;}
    // string limpa - retorna true caso string esteja vazia
    
    txt.shrink_to_fit();
    // 19 - reduz a capacidade para o tamanho que oculpa
    
    /* ACESSO AOS ELEMENTOS */
    
    for(int i =0; 0 < txt.size(); i++)
    txt.at(txt.size());
    // resolucao exercicio
    
    txt.back();
    // o - ultimo elemento da string
    txt.back() = 'B';
    // B - mudou o elemento final para B
    txt.front() = 'A'; 
    // A - primeiro elemento é A

    /* FUNÇÕES MODIFICADORAS */

    txt.append(" humberto");
    // resolucao exercicio humberto
   
    txt.push_back('H');
    // resolucao exercicioH - apenas para caractere
   
    txt.pop_back();
    // resolucao exercici - remove o ultimo caractere
    
    txt.assign("Humberto");
    // Humberto - substitui o conteudo da string
    
    txt.insert(2, "EX");
    // reEXsolucao exercicio - adicionou string na posição indicada
   
    txt.erase(2, 6);
    // re exercicio - removido 6 caractere apartir da posição 2
   
    string nome("HUMBERTO");
    txt.replace(2, 6, nome);
    // reHUMBERTO exercicio - 2 é a posição inicial,  6 é a quantidade de elemento que desejo substituir, [nome] é a string
    
    txt.swap(nome);
    // txt[HUMBERTO] ,  nome[resolucao exercicio]

    /* OPERAÇÕES E CONVERSÃO */
   
    size_t encontrar = txt.find("cao");
    // 6 - encontrou na posição 6  // se não encontrar (424637234), valor maximo do size_t
    if(encontrar != string::npos){ std::cout<<"encontrado"; } // npos é uma constante do valor maximo de size_t
    
    string txt2;
    txt2=txt.substr(10, 6);
    // exerci
    
    txt.compare(txt2);
    // >0 - retorna 0 se for iguais
    
    //CONVERSAO
    string tx("18"), tx2;               // stol - long int
    int ano=2022, res;                  // stoll - long long int
    res = ano - stoi(tx);               // stoul - long int unsigned
    // 2004                             // stoull - long long unsigned
    tx2 = to_string(res);               // stod - double
    // "2004"                           // stuld - long double


    return 0;
}