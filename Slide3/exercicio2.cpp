#include<iostream>
#include<stdio.h>
using namespace std;

void parOuImpar();
int par();
int impar();


int main()
{
    unsigned int num;
cout<<"Digite o valor que será consultado: "<<endl;
cin>>num;
    parOuImpar(num);
}

void parOuImpar(int num)
{
if (num!= NULL)
{   int resultado;
    resultado= par(num);
    if (resultado ==1)
    {
        cout<<"O número digitado é par!"<<endl;
    }
    
   
    
    
}

}

int par(int a)
{
    if (a %2 ==0)
    {
        
    }
}

int impar(int a)
{

}