#include "Pessoa.cpp"
#include "Amigo.cpp"
#include <iostream>
#include <vector>

int main(){
    Amigo amigo;
    Pessoa *pessoa = &amigo;
    pessoa->print();
}