// coleção de dados - CONTAINER

#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int>list1;
    list<int>list2(10, 0);
    list<int>list3(list2);
    list<int>list4={1, 2, 3, 4};

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

    
    return 0;
}