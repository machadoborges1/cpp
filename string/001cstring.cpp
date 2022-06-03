#include<iostream>
#include<cstring> // Implementa funções para manipulação de string.

// using namespace std; 
struct{
    char nome[40];
}pessoa1, pessoa2;


int main(){

    char origem[40]="Estudos de fragmento";
    char destino[40]="";
    char meuNome[]="Humberto";

    strcpy(destino, origem);
    // Estudos de fragmento
    strncpy(destino, origem, 4);
    // Estu
    
    memcpy(destino, origem, sizeof(origem)+1);
    // Estudo de fragmento -  BLOCO DE MEMORIA
    memcpy(pessoa1.nome, meuNome, strlen(meuNome)+1);
    memcpy(pessoa2.nome, pessoa1.nome, sizeof(pessoa1.nome)+1);
    // Humberto
    
    strcat(meuNome, " Machado");
    // Humberto Machado
    strcat(meuNome, meuNome);
    // HumbertoHumberto
    
    strncat(meuNome,meuNome, 3);
    // HumbertoHum
    
    int inteiro;
    inteiro = strcmp(meuNome, meuNome) == 0;
    if (inteiro==0)
    // 0 - iguais  // <0 - segunda é maior  // >0 - primeira é maior
    strncmp(meuNome, meuNome, 5);
    // 0 - comparou até a quita posição
    
    memcmp(meuNome,meuNome, sizeof(meuNome));
    // 0 - BLOCO DE MEMORIA
    
    char *exemplo;
    char pesquisa = 'g';
    exemplo=(char*)memchr(origem, pesquisa, strlen(origem));
    // gmento
    // cout << exemplo - origem+1 << endl;  //  15 - posição 15 na string
    
    strchr(origem, pesquisa);
    // gmento
    // cout << exemplo - origem+1 << endl;  //  15 - posição 15 na string
    
    char chave[] = "tm";
    strcspn(origem, chave);
    // 16 - primeiro caracter que achou foi o m na posição 16

    //strrchr(origem, chave);
    // 19 - ultimo elemento da pesquisa

    strtok(meuNome, "r"); // divisor é r
    // Humbe
    // to    

    return 0;
}