// coleção de dados - CONTAINER

#include<iostream>
#include<list>

using namespace std;

bool par(const int& value){
        return ((value%2)==0);
    }

int main(){

    list<int>list1;
    list<int>list2(10, 0);
    list<int>list3(list2);
    list<int>list4={1, 2, 3, 4};
    list<int>::iterator it;

    list1.size();
    list1.max_size();
    list1.front();
    list1.back();
    list1.empty(); // true

    // MODIFICADORA

    list3.assign(20, 0);
    list3.assign(list1.begin(), list1.end());

    list1.push_back(4);
    list1.push_front(8);
    list1.pop_back();
    list1.pop_front();

    it=list2.begin();
    list2.insert(it, 8); // 8 0 0 0 0 0 0 0
    list1.erase(it); // 0 0 0 0 0 0 0

    list2.swap(list3);
    list4.resize(3); // 1 2 3

    list1.clear();

    // EMPLACE - adiciona em um elemento especifico c++11

    list1.emplace(list1.begin(), 9);
    list1.emplace_back(9);
    list1.emplace_front(10);

    // OPERAÇÕES

    list<int>list5 = {1, 0, 2, 0, 3, 0, 4};

    list5.remove(0); // 1 2 3 4

    //função "par" que retona um booleano
    list5.remove_if(par); // 1 3

    list5.sort(); // 0 0 0 1 2 3 4
    list5.unique(); // 0 1 2 3 4

    list5.merge(list4); // mescla as duas

    list5.reverse(); // 4 0 3 0 2 0 1 0

    return 0;
}
