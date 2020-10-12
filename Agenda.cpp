#include "Agenda.hpp"
#include <stdlib.h>
#include <iostream>
Agenda::Agenda()
{
    quantidadeAmigos = 0;
    quantidadeConhecidos = 0;
}
Agenda::Agenda(int quantidadePessoas)
{
    this->quantidadeAmigos = 0;
    this->quantidadeConhecidos = 0;
    for (int i = 0; i < quantidadePessoas; i++)
    {
        int AmigoOuConhecido = (rand() % 2) + 1;
        if (AmigoOuConhecido == 1)
        {
            this->quantidadeAmigos++;
            this->pessoas.push_back(new Amigo());
        }
        else if (AmigoOuConhecido == 2)
        {
            this->quantidadeConhecidos++;
            this->pessoas.push_back(new Conhecido());
        }
    }
}
int Agenda::getAmigos()
{
    return this->quantidadeAmigos;
}
int Agenda::getConhecidos()
{
    return this->quantidadeConhecidos;
}
vector<Pessoa *> Agenda::getPessoas()
{
    return this->pessoas;
}
void Agenda::addInformacoes(){
    for (int i=0;i<pessoas.size();i++){
        pessoas[i]->leitura();
    }
}
void Agenda::listaPessoas(){
    cout << "Nome         |    Idade    | Outro" << endl;
    for (int i=0;i<pessoas.size();i++){
        pessoas[i]->print();
    }
    cout << endl;
}
void Agenda::imprimeAniversarios(){
    cout << "Aniversario: " << endl;
    for (int i=0;i<pessoas.size();i++){
        if (pessoas[i]->AmigoConhecido() == 1)
            cout << pessoas[i]->aniversarioEmail() << endl;
    }
    cout << endl;
}
void Agenda::imprimeEmail(){
    cout << "Emails: " << endl;
    for (int i=0;i<pessoas.size();i++){
        if (pessoas[i]->AmigoConhecido() == 2)
            cout << pessoas[i]->aniversarioEmail() << endl;
    }
    cout << endl;
}