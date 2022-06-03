#ifndef POO04_H_INCLUDED
#define POO04_H_INCLUDED

class Veiculo {
    public:
        int vel;
        int blind;
        int rodas;

        void setTipo(int tp);
        void setVelMax(int vm);
        void setArma(bool ar);
        void imp();

    private: // manipulada dentro da própria classe
        int tipo; // 1 - moto / 2 - carro / 3 - caminhão / 4 - tanque
        int velMax;
        bool arma;
};

void Veiculo::imp(){
    std::cout << "tipo veiculo: " << tipo << std::endl;
    std::cout << velMax << std::endl;
    std::cout << rodas << std::endl;
    std::cout << blind << std::endl;
    std::cout << arma << std::endl;
}

void Veiculo::setTipo(int tp){
    tipo = tp;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

void Veiculo::setArma(bool ar){
    arma = ar;
}

class Moto:public Veiculo{
    // terá tudo da classe veiculo
public:
    Moto(); // Construtor
};

Moto::Moto(){ // metodo construtor
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(120);
    setArma(false);
}


#endif // POO04_H_INCLUDED