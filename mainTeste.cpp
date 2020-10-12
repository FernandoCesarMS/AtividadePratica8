#include "Pessoa.cpp"
#include "Amigo.cpp"
#include "Conhecido.cpp"
#include "Agenda.cpp"
#include <iostream>
#include <vector>
#include <stdlib.h>
int main()
{
    Agenda agenda(3);
    agenda.addInformacoes();
    agenda.listaPessoas();
}