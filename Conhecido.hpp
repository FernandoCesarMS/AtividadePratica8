#include "Pessoa.hpp"

class Conhecido : public Pessoa
{
private:
    // Email da Pessoa
    string email;

public:
    // Construtores

    //Construtor Padrão
    Conhecido();

    // getters

    // retorna o email
    string getEmail();

    // setters

    // altera o email
    void setEmail(string);

    // another methods

    // Printa para o usuário as informações da
    // pessoa
    void print();
};