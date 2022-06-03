#include <iostream>
#include <cmath> // evolução de math.h
using namespace std;

#define PI 3.14159265

double radToGra(int a){
    #define PI 3.14159265
    return a*PI/180;
}

int main() {

    // sin, cos, tan // retorno em radiano
    int ang = 45;
    cout << "cosseno" << ang << cos(ang*PI/180) << endl;
    cout << "seno" << ang << sin(radToGra(ang)) << endl;
    cout << "tangente" << ang << tan(radToGra(ang)) << endl;

    // retorna em radianos
    cout << "cosseno" << ang << cos(ang) << endl;

    cout << "Arco cosseno" << ang << acos(ang*PI/180) << endl;
    cout << "arco seno" << ang << asin(radToGra(ang)) << endl;
    cout << "arco tangente" << ang << atan(radToGra(ang)) << endl;

    // atan2 - calcula o arco tangente usando dois parametros de X e Y
    double x = 10.0, y=20.0;
    cout << atan2(x, y)*180/PI << endl;

    // exponencial
    cout << exp(x) << endl;

    // log - retorna o logaritimo natural de um número.
    cout << log(x) << endl;

    // pow - potência de um numero base elevado ao expoente
    pow(x,3);

    // sqrt - raiz quadrada
    sqrt(x);

    // cbrt - (C++11) calcula raiz cúbica
    cbrt(x);

    // hypot - (C++11) Retorna hipotenusa
    hypot(x, y);
    sqrt(pow(x,2) + pow(x,2));

    // ceil - arredonda para cima, num inteiro mais proximo
    ceil(x);

    // floor - arredonda para baixo
    floor(x);

    // round - Arredonda para baixo ou para cima
    round(x);

    // fmod - retorna o resto da divisão em (float)
    double a = 5.7, b = 2;
    fmod(a, b);

    // fdim - (C++11) retorna a diferença positiva entre dois numeros
    fdim(x , y); // 10

    fmax(x, y); // retorna o maior valor entre dois numeros
    fmin(x, y); // menor valor entre dois numeros

    // abs ou fabs - redonda o valor absoluto dos numeros

    return 0;
}

