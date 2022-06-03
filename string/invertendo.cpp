#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int invertendo(){

    string str("humberto");
    int i;

    for(i = str.size()-1; i >= 0; i--){

        cout << i;
        // 76543210

    }

    return 0;
}

int invertendo2(){

    char str[20] = "humberto";
    char str2[20];
    int j;
    
    for(int i = strlen(str)-1; i>=0; i--){

        str2[j] = str[i];

        j++;

    }
    str2[j] = '\0';
    cout << str2;
    return 0;
}

int main(){
    invertendo2();
}
