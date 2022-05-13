#include<iostream>
#include<string>

int main(){

    std::string eu("humberto");
    std::string ei("Humberto");

    if(eu.compare(ei)==0){
        std::cout<< "ok" <<std::endl;
    } else {
        std::cout << "não" << std::endl;
    }

    return 0;
}