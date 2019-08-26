#include<iostream>
#include<stdio.h>

using namespace std;

int maiorDeTres();
int maior();

int main()
{
    int valores[3];
    cout<<"Digite 3 valores: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>valores[i];
    }

    maiorDeTres(valores[0],valores[1],valores[2]);
    
}

int maiorDeTres (int a, int b, int c)
{
    int valores[3]={a,b,c};
    int num_maior =0;
    int ant= 0;
    if (a != NULL)
    {
        if (b != NULL)
        {
            if (c != NULL)
            {
              for (int i = 0; i < 3; i++)
              {
                  if (valores[i]>num_maior)
                  {
                      num_maior=valores[i];
                  }
                  
              }
              for (int a = 0; a < 3; a++)
              {
                  if (valores[a]>ant && valores[a]<num_maior)
                  {
                    ant=valores[a];
                  }
                  
              }
              
            }
            
        }
        
    }
    
    maior(num_maior, ant);
    
}

int maior(int a, int b )
{
cout<<"O maior valor digitado é: "<<a<<endl;
cout<<"O segundo maior valor digitado é"<<b<<endl;
}