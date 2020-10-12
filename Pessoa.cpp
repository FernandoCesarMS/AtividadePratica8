#include "Pessoa.hpp"
#include <iostream>
Pessoa::Pessoa(){
    this->nome = "indefinido";
    this->idade = 0;
}
Pessoa::Pessoa(string Nome,int Idade){
    this->nome = Nome;
    this->idade = Idade;
}
string Pessoa::getNome(){
    return this->nome;
}
int Pessoa::getIdade(){
    return this->idade;
}
void Pessoa::setNome(string Nome){
    this->nome = Nome;
}
void Pessoa::setIdade(int Idade){
    this->idade = Idade;
}
void Pessoa::print(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Idade: " << this->getIdade() << endl << endl;
}