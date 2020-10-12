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
    cout << this->getNome() << " ";
    cout << this->getIdade() << " ";
    cout << this->email << endl;
}
void Conhecido::leitura(){
    Pessoa::leitura();
    cout << "Email: ";
    string Email;
    cin >> Email;
    this->setEmail(Email);
}