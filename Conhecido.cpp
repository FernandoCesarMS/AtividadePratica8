#include "Conhecido.hpp"

Conhecido::Conhecido() : Pessoa(){
    this->email = "indefinido";
}
string Conhecido::getEmail(){
    return this->email;
}
void Conhecido::setEmail(string Email){
    this->email = Email;
}
void Conhecido::print(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Idade: " << this->getIdade() << endl;
    cout << "Email: " << this->email << endl << endl;
}