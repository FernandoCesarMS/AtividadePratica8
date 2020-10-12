#ifndef Pessoa_HPP
#define Pessoa_HPP
#include <string>

using namespace std;

class Pessoa{
private:
    string nome;
    int idade;

public:
    // Construtores

    // Construtor Padrão
    Pessoa();
    // Construtor com 2 parâmetros
    Pessoa(string, int);

    // Getters

    // Retorna o nome
    string getNome();
    // Retorna a idade
    int getIdade();

    // Setters

    // Altera o nome
    void setNome(string);
    // Altera a idade
    void setIdade(int);

    // another methods

    // Printa para o usuário as informações da
    // pessoa
    virtual void print();
    virtual void leitura();
    virtual string aniversarioEmail();
    virtual int AmigoConhecido();
};

#endif