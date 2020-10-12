#include "Amigo.hpp"
#include <iostream>

Amigo::Amigo(){
    this->dataAniversario = "indefinido";
}
string Amigo::getDataAniversario(){
    return this->dataAniversario;
}
void Amigo::setDataAniversario(string dA){
    this->dataAniversario = dA;
}
void Amigo::print(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Idade: " << this->getIdade() << endl;
    cout << "Data Aniversario: " << this->getDataAniversario() << endl << endl;
}