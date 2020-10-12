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
    cout << this->getNome() << " ";
    cout << this->getIdade() << " ";
    cout << this->getDataAniversario() << endl;
}
void Amigo::leitura(){
    Pessoa::leitura();
    cout << "Data Aniversario: ";
    string dtAniversario;
    cin >> dtAniversario;
    this->setDataAniversario(dtAniversario);
}
string Amigo::aniversarioEmail(){
    return this->dataAniversario;
}
int Amigo::AmigoConhecido(){
    return 1;
}