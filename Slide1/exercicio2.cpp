#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

main()
{

int numeros[6];

cout<<"Digite 6 numeros inteiros: ";
for ( int i = 0; i < 6; i++)
{
    
    cin>> numeros[i];
}
for (int i = 0; i < 6; i++)
{
    cout<<"Números lidos : "<< numeros[i]<<endl;
}


}