#include <iostream>
#include <string>
using namespace std;

void swap(int *&a,int *&b);
void showAddress(int &x);
void changeAddress(int *&x);

int main(){
    int *ptr_a;
    int *ptr_b;
    int a = 111;
    int b = 222;

    ptr_a = &a;
    ptr_b = &b;
    cout <<"*ptr_a is "<<*ptr_a << endl;
    //cout <<"ptr_b is "<<ptr_b << endl;
    //showAddress(a);
    changeAddress(ptr_a);
    cout <<"*ptr_a is "<<*ptr_a << endl;

    //swap(ptr_a,ptr_b);
    //cout <<"ptr_a is "<<ptr_a << endl;
    //cout <<"ptr_b is "<<ptr_b << endl;
}

void swap(int *&a,int *&b){
    int x = 10;
    a = &x;
}

void showAddress(int &x){
    cout << &x << endl;
}

void changeAddress(int *&x){
    int a = 1;
    x = &a;
}
