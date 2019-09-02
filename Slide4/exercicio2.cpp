#include<iostream>


using namespace std;

int soma(int* x, int* y);

int main()
{
    int tam=8;
    int vectorA[tam];
    int* ptx;
    int* pty;
    int resultado = 0;
    
    
    int x=0,y=0;

    cout<<"Digite os valores do vetor:"<<endl;
    for (int i = 0; i < tam; i++)
    {
        cin>>vectorA[i];
    }
    
    cout<<"Digite a primeira posição do vetor:"<<endl;
    cin>>x;
    cout<<"Digite a segunda prosição do vetor:"<<endl;
    cin>>y;

    ptx = &vectorA[x];
    pty = &vectorA[y];


    
    resultado = soma(ptx, pty);


    cout<<"Resultado: "<<resultado<<endl;



    
}
int soma( int* x, int* y)
{
    
    int a = *x;
    int b = *y;
    return a+b;
    
    
}