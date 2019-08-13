#include<stdio.h>
#include<iostream>

using namespace std;

main()
{
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    cout<<"Digite os 10 valores iniciais: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>vetorA[i];
    }
    cout<<"Digite os 10 valores seguintes: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>vetorB[i];
    }


   /* for (int i = 0; i < 10; i++)
    {
        cout<<vetorA[i]<<endl;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<vetorB[i]<<endl;
    }
    */



    
    int aux=0;
    for (int i = 0; i < 10; i++)
    {
       vetorC[i]=vetorA[i]-vetorB[i]; 
        
    }
    

    cout<<"Resultado: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vetorC[i]<<endl;
    }
    





    /* cout<<"Lista A: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vetorA<<endl;
    }

    cout<<"Lista B: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vetorB<<endl;
    }*/

    /* cout<<"Lista C: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<vetorC<<endl;
    }*/
}
    
    
    
