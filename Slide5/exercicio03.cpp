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
    int tam = 2;
    Aluno a[tam];
    Aluno *ptrAlunos=&a;
    for (int i = 0; i < tam; i++)
    {
        cout<<"Digite o nome do aluno: "<<endl;
        cin>>a[i].nome;
        cout<<"Digite a matricula: "<<endl;
        cin>>a[i].matricula;
        cout<<"Digite o curso: "<<endl;
        cin>>a[i].curso;
    }

    /*for (int i = 0; i < tam; i++)
    {*/
        cout<<"-----------------------------------"<<endl;
        cout<<"Nome: "<<(*ptrAlunos++).nome<<endl;
        cout<<"Matricula: "<<(*ptrAlunos++).matricula<<endl;
        cout<<"Curso: "<<(*ptrAlunos++).curso<<endl;
        cout<<"-----------------------------------"<<endl;
    //}
    
    
    


    return 0;
}