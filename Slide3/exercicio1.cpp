#include<iostream>
#include<stdio.h>
using namespace std;

void soma();
void sub();
void div();
void multi();


int main()
{
    unsigned int op;
do
{
cout<<"Bem vindo!"<<endl;
cout<<"Escolha a operação que deseja realizar no momento."<<endl;
cout<<endl;
cout<<"1-Soma"<<endl;
cout<<"2-Subtração"<<endl;
cout<<"3-Divisão"<<endl;
cout<<"4-Multiplicação"<<endl;
cout<<"5-Sair"<<endl;
cin>>op;
switch (op)
{
case 1:
    soma();
    break;

case 2:
    sub();
    break;

case 3:
    div();
    break;

case 4:
    multi();
    break;

case 5:
    exit(0);
    break;


}

   
    }while (op!=5);
}

void soma()
{
    float valor1, valor2;
    float resposta;
    cout<<"Digite o primeiro valor: "<<endl;
    cin>>valor1;
    cout<<"Digite o segundo valor: "<<endl;
    cin>>valor2;
    

    resposta= valor1 + valor2;

    cout<<"A resposta da soma dos valores "<< valor1 <<"e "<<valor2<<"é igual a: "<<resposta<<endl;
    cout<<endl;
    cout<<endl;

}

void sub()
{
    float valor1, valor2;
    float resposta;
    cout<<"Digite o primeiro valor: "<<endl;
    cin>>valor1;
    cout<<"Digite o segundo valor: "<<endl;
    cin>>valor2;
    

    resposta= valor1 - valor2;

    cout<<"A resposta da subtração dos valores "<< valor1 <<"e "<<valor2<<"é igual a: "<<resposta<<endl;
    cout<<endl;
    cout<<endl;
}

void div()
{
    float valor1, valor2;
    float resposta;
    cout<<"Digite o primeiro valor: "<<endl;
    cin>>valor1;
    cout<<"Digite o segundo valor: "<<endl;
    cin>>valor2;
    

    resposta= valor1 / valor2;

    cout<<"A resposta da divisão dos valores "<< valor1 <<"e "<<valor2<<"é igual a: "<<resposta<<endl;
    cout<<endl;
    cout<<endl;
}

void multi()
{
    float valor1, valor2;
    float resposta;
    cout<<"Digite o primeiro valor: "<<endl;
    cin>>valor1;
    cout<<"Digite o segundo valor: "<<endl;
    cin>>valor2;
    

    resposta= valor1 * valor2;

    cout<<"A resposta da multiplicação dos valores "<< valor1 <<"e "<<valor2<<"é igual a: "<<resposta<<endl;
    cout<<endl;
    cout<<endl;
}