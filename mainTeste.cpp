#include "Pessoa.cpp"
#include <iostream>
int main(){
    Pessoa newPessoa = *new Pessoa("Fernando",21);
    newPessoa.print();
}