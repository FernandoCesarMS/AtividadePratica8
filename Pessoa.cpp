#include "Pessoa.hpp"

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