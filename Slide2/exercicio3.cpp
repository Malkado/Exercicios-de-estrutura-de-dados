#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

struct banda 
{
        string nome;
        string tipo_musica;
        unsigned int integrantes;
        int rank=0;
    
}b;

int main()
{
    
    
    int tamanho =2;
    
    
    struct banda v[tamanho];
    
    string nome1, tipo;
    int integrantes1 = 0;
    
    

    for (int i = 0; i < tamanho; i++) 
    {
        cout<<"Nome da banda:"<<endl;
        cin>>v[i].nome;
        
        
        cout<<"Tipo da música:"<<endl;
        cin>>v[i].tipo_musica;
        
        
        cout<<"Quantidade de integrantes:"<<endl;
        cin>>v[i].integrantes;
        
        v[i].rank = v[i].rank + 1;
        
    }
    cout<<"--------------------------------------------------"<<endl;
    for(int i=0 ; i < tamanho ; i++)
    {
        
        cout<<"Nome da bande:" <<v[i].nome<<endl;
        cout<<"Tipo da música:"<<v[i].tipo_musica<<endl;
        cout<<"Quantidade de integrantes:"<<v[i].integrantes<<endl;
        cout<<"Ranking: "<<v[i].rank<<endl;
        cout<<"--------------------------------------------------"<<endl;
        
    }
}

