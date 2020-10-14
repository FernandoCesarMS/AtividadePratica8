// code sample to generate random numbers in C++

#include <iostream>
#include <ctime>
#include "Agenda.cpp"
#include "Amigo.cpp"
#include "Conhecido.cpp"
#include "Pessoa.cpp"

int main()
{
    int quantidadePessoas;
    std::cout<<"Insira o numero de pessoas que deseja colocar na agenda"<<endl;
    std::cin>>quantidadePessoas;
    Agenda Agenda1(quantidadePessoas);

    int x, y;
    x = Agenda1.getAmigos();
    y = Agenda1.getConhecidos();

    std::cout<<"Voce tem "<<x<<" amigos nessa lista e "<<y<<" conhecidos."<<endl;

    Agenda1.addInformacoes();
    Agenda1.imprimeAniversarios();
    Agenda1.imprimeEmail();

    return 0;
}