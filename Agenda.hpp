#ifndef Agenda_HPP
#define Agenda_HPP

#include "Pessoa.hpp"
#include "Amigo.hpp"
#include "Conhecido.hpp"
#include <vector>

class Agenda
{
private:
    int quantidadeAmigos;
    int quantidadeConhecidos;
    vector<Pessoa *> pessoas = *new vector<Pessoa *>();

public:
    // construtores

    Agenda();
    Agenda(int);

    //getters

    int getAmigos();
    int getConhecidos();
    vector<Pessoa *> getPessoas();
    void setPessoa(Pessoa, int);
    void addInformacoes();
    void imprimeAniversarios();
    void imprimeEmail();
    void listaPessoas();
};

#endif