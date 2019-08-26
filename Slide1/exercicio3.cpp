#include<stdio.h>
#include<iostream>

using namespace std;

main()
{
    float numeros[8];
    cout<<"Digite os 8 valores:";
  for (int i = 0; i < 8; i++)
  {
      cin>>numeros[i];

  }
  int posicao1;
  int posicao2;

  cout<<"Digite a primeira posição da soma: ";
  cin>> posicao1;
  cout<<"Digite a segunda posição da soma: ";
  cin>>posicao2;
  if (posicao1 >8)
  {
      cout<<"Digite uma posição válida!";
  }
  if (posicao2>8)
  {
      cout<<"Digite uma posição válida!";
  }
  
  

  float v[2];
    v[0]=numeros[posicao1];
    v[1]=numeros[posicao2];

    cout<<"A soma das posições "<<v[0]<<" e "<<v[1]<<"é igual a: "<< v[0]+v[1];

  
}
