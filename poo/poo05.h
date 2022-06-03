#ifndef POO05HERANCAMULTIPLA_H_INCLUDED
#define POO05HERANCAMULTIPLA_H_INCLUDED

class Base1{
    public:
        void impBase1();
};

void Base1::impBase1(){
    std::cout<< "immp classe base1" << std::endl;
}

class Base2{
    public:
        void impBase2();
};

void Base2::impBase2(){
    std::cout<< "immp classe base1" << std::endl;
}

class Cfb:public Base1, public Base2{

};

#endif // POO05HERANCAMULTIPLA_H_INCLUDED