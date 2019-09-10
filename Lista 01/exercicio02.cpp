#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;



struct dados
{
    string nome;
    int idade;
    string endereco;
};


int main()
{
    dados d;
    dados *ptrDados = &d;

    
 d.nome = "luiz";
 d.idade = 20;
 d.endereco = "rua";

cout<<"nome: "<<(*ptrDados).nome<<endl;
cout<<"idade: "<<(*ptrDados).idade<<endl;
cout<<"endereço: "<<(*ptrDados).endereco<<endl;


    return 0;
}

