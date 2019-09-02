#include<stdio.h>
#include<iostream>


using namespace std;


int sub(int *a[], int* b[], int tamanho);


int main()
{
    int tam = 2;

    int VectorA[tam];
    int VectorB[tam];
    int VectorC[tam]
    
    int *pta;
    int *ptb;

    
    

    cout<<"-----------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Digite o valores do primeiro vetor(a):"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cin>>VectorA[i];
    }
    cout<<endl;
    cout<<"Digite os valores do segundo vetor(b):"<<endl;
    for (int a = 0; a < tam; a++)
    {
        cin>>VectorB[a];
    }
    cout<<"-----------------------------------------------"<<endl;

    pta = &VectorA[tam];
    ptb = &VectorB[tam];
    
    int* pont;
    pont= sub(*pta, *ptb,tam);
       
    
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Os valores do vetor C, que recebe a diferença entre A e B, é: "<<endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout<<VectorC[i]<<endl;
    }
    
    

   return 0;
}

int sub(int *a[], int* b[], int tamanho)
{
    int va[tamanho]= *a[tamanho];
    int cb[tamanho]= *b[tamanho];
    int f[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        for (int v= 0; v < tamanho; v++)
        {
           for (int b = 0; b < tamanho; b++)
           {
               f[i]=va[v]-cb[b];
           }

        }
        
    }
    int pontf = &f[tamanho];
    return *f;
   
}