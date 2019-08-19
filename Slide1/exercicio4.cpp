#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
int numero[10];
cout<<"Digite os 10 números do vetor: ";
for (int i = 0; i < 10; i++)
{
    cin>>numero[i];
}
for (int i = 0; i < 10; i++)
{
    if (numero[i]<0)
    {
        numero[i]=0;
    }
    
}
cout<<endl;
cout<<"Resultado"<<endl;

for (int i = 0; i < 10; i++)
{
    cout<<numero[i]<<endl;
}




}