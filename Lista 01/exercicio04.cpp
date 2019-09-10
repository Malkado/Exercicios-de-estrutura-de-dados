#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct Aluno
{
    string nome;
    string curso;
    string matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
};


int main()
{
    float maior_nota;
    float segunda_maior;
    int tam = 2;
    Aluno alunos[tam];
    float maior = 0;
    string nome = "";


    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite o nome: "<<endl;
        cin>>alunos[i].nome;
        cout<<"Digite a matricula: "<<endl;
        cin>>alunos[i].matricula;
        cout<<"Digite o curso: "<<endl;
        cin>>alunos[i].curso;
        cout<<"Digite a primeira nota: "<<endl;
        cin>>alunos[i].nota1;
        cout<<"Digite a segunda nota: "<<endl;
        cin>>alunos[i].nota2;
        cout<<"Digite a terceira nota: "<<endl;
        cin>>alunos[i].nota3;
    }
    for (int i = 0; i < tam; i++)
    {
        if (alunos[i].nota1<4)
        {
            alunos[i].nota1 = 0;
        }
        
    }
    for (int i = 0; i < tam; i++)
    {
        if (alunos[i].nota2<4)
        {
            alunos[i].nota2 = 0;
        }
        
    }
    for (int i = 0; i < tam; i++)
    {
        if (alunos[i].nota3<4)
        {
            alunos[i].nota3 = 0;
        }
        
    }
    


    for (int i = 0; i < tam; i++)
    {
        if (alunos[i].nota1>maior)
        {
            maior = alunos[i].nota1;
            nome = "";
            nome = alunos[i].nome;
        }
        
    }

    for (int i = 0; i < tam; i++)
    {
        if (alunos[i].nota1>alunos[i].nota2)
        {
            
        }
        
    }
    
    
    cout<<"maior nota é do aluno "<< nome <<" com a nota: "<<maior<<endl;
    
    

}