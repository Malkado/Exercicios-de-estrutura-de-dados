#include<iostream>
#include<string.h>

using namespace std;


struct Aluno
{
    string nome;
    string matricula;
    string curso;
};



int main()
{
    int tam = 5;
    Aluno a[tam];
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite o nome do aluno: "<<endl;
        cin>>a[i].nome;
        cout<<"Digite a matricula: "<<endl;
        cin>>a[i].matricula;
        cout<<"Digite o curso: "<<endl;
        cin>>a[i].curso;
    }

    for (int i = 0; i < tam; i++)
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"Nome: "<<a[i].nome<<endl;
        cout<<"Matricula: "<<a[i].matricula<<endl;
        cout<<"Curso: "<<a[i].curso<<endl;
        cout<<"-----------------------------------"<<endl;
    }
    
    
    


    return 0;
}