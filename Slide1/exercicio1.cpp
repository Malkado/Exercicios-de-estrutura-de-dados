#include<stdio.h>
#include<iostream>
using namespace std;

main()
{
    float nota1,nota2;
    float nota[3];
    float maior=0;
    float antecessor=0;
    float menor=0;

cout<<"Digite as notas das provas:";

for (int i = 0; i < 3; i++)
{
    cin>>nota[i];
}

for (int i = 0; i < 3; i++)
{
    if (nota[i]<4)
    {
        nota[i]=0;
    }
    
}

for (int i = 0; i < 3; i++)
{
    if (nota[i]>maior)
    {
        maior=nota[i];
    }
    
}

for (int i = 0; i < 3; i++)
{
    
    
if (nota[i]>antecessor && nota[i]<maior)
    {
    antecessor=nota[i]; 
    }
        
}

/* cout<<"Contagem--------- teste"<<endl;
for (int i = 0; i < 3; i++)
{
    cout<<nota[i]<<endl;
}

cout<<"----------------------"<<endl;
*/


cout<<"maior nota: " <<maior<<endl;
cout<<"Segunda maior nota: " <<antecessor <<endl;
cout<<"Sua média final foi:" <<(maior+antecessor)/2<<endl;

return 0;
}