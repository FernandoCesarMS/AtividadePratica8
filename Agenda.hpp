#include "Pessoa.hpp"
#include "Amigo.hpp"
#include "Conhecido.hpp"
#include <vector>

class Agenda
{
private:
    vector<Pessoa> pessoas;
    int quantidadeAmigos;
    int quantidadeConhecidos;

public:
    // construtores

    Agenda();
    Agenda(int);

    //getters

    int getAmigos();
    int getConhecidos();
    vector<Pessoa> getPessoas();
    Pessoa getPessoa(int);
    void setPessoa(Pessoa,int);
    void addInformacoes();
    void imprimeAniversarios();
    void imprimeEmail();
};