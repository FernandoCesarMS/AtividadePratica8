#include "Pessoa.cpp"
#include "Amigo.cpp"
#include "Conhecido.cpp"
#include <iostream>
#include <vector>

int main()
{
    vector<Pessoa *> pessoas;
    for (int i = 0; i < pessoas.size(); i++)
    {
        pessoas[i]->print();
    }
}