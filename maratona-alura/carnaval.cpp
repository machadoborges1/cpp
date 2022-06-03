#include <iostream>
using namespace std;

double s[6];

void le_problema() {
    for(int i=1; i<=5; i++){
        cin >> s[i];
    }
}

void selection_sort(){

    for(int i = 1; i <=5; i++){
        cout << s[i] << " - ";
    }
    cout << endl;

    int menor = 1;
    for(int j = 1; j <= 5; j++){
        if(s[j] < s [menor])
            menor = j;
    }
    swap(s[menor], s[1]);

    menor = 2;
    for(int j=2; j<=5; j++){
        if(s[j] < s[menor])
            menor = j;
    }
    swap(s[menor], s[2]);
}

int main(){

    le_problema();
    selection_sort();

    return 0;
}