#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int Matriz[5][5];

for (int i = 0; i < 5; i++)
{
    Matriz[0][i]=i;
}


for (int i = 0; i < 5; i++)
{
    cout<<Matriz[i]<<endl;
}





return 0; 
}