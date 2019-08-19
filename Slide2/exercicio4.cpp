#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct faculdade
{
    string nome;
    string curso;
    int periodo;
    string cadeiras[3];
    float notas[3];
};

int main()
{
    int tamanho_cadeiras = 3;
    int tamanho = 3;
    int i ;
    struct faculdade f[3];
    int maior,ant = 0;
    
    for ( i = 0; i < tamanho; i++)
    {
        cout<<"Digite o nome do aluno : "<<endl;
        cin>>f[i].nome;
        cout<<"Digite o nome do curso : "<<endl;
        cin>>f[i].curso;
        cout<<"Digite o período do aluno:"<<endl;
        cin>>f[i].periodo;
        cout<<"Digite as cadeiras do aluno : "<<endl;
        for ( int a = 0; a < tamanho_cadeiras; a++)
        {
            cin>>f[i].cadeiras[a];
        }
        cout<<"Digite as notas da primeira cadeira : "<<endl;
        for (int b = 0; b < 3; b++)
        {
            cin>>f[i].notas[b];
        }
        
        
    }

    for ( i = 0; i < tamanho; i++)
    {
        for ( int a = 0; a < 3; a++)
        {
            if (f[i].notas[a]>maior)
            {
                maior = f[i].notas[a];
            }
        }
    }

    for ( i = 0; i < tamanho; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            if (f[i].notas[a]>ant && f[i].notas[a]<maior)
            {
                ant=f[i].notas[a];
            }
            
        }
        
    }
    
    


    for ( i = 0; i < tamanho; i++)
    {
        cout<<"Nome: "<<f[i].nome <<endl;
        cout<<"Curso: "<<f[i].curso<<endl;
        cout<<"Período: "<<f[i].periodo<<endl;
        cout<<"Cadeiras: "<<endl;
        for ( int a = 0; a < tamanho_cadeiras; a++)
        {
            cout<<f[i].cadeiras[a]<<endl;
        }
        
        cout<<"média da primeira cadeira: "<< (maior+ant)/2<<endl;
        
        cout<<"--------------------------------------------";
    }
    

    return 0;
    }



