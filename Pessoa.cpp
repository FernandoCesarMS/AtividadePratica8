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
void Pessoa::leitura(){
    cout << "Nome: ";
    string Nome;
    cin >> Nome;
    this->setNome(Nome);
    int Idade;
    cout << "Idade: ";
    cin >> Idade;
    this->setIdade(Idade);
}
string Pessoa::aniversarioEmail(){
    return "";
}
int Pessoa::AmigoConhecido(){
    return 0;
}