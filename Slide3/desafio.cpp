#include<iostream>
#include<stdio.h>

using namespace std;

void convertTime();
Time addTime();

struct Time
{
    int hh;
    int mm;
    double seconds;
};


Time t;

int main()
{
    int op=0;
    double segs;
cout<<"1-Converter tempo de segundos para horas."<<endl;
cout<<"2-Somar tempo."<<endl;
cout<<"3-Sair"<<endl;
cin>>op;
switch (op)
{
case 1:
    cout<<"Digite o tempo em segundos:"<<endl;
    cin>>segs;
    convertTime(segs); 
    break;

case 2:
    break;

case 3:
exit(0);
}


return 0;
}
void convertTime(double secs)
{
    int maximo = 60;
    int maximo_secs=60000;
    int minutos;
    int secunds= secs;
    int horas,resto_horas= 0;
    int resto;
    if (secunds !=NULL)
    {
      resto= secunds % maximo_secs;
      minutos = secunds / maximo_secs;
      
      
      
      
       resto_horas = minutos % maximo;
       horas = minutos / maximo; 

      
    
    
    }
    t.hh=horas;
    t.mm=resto_horas;
    t.seconds=resto;
cout<<t.hh <<":"<<t.mm<<":"<<t.seconds<<endl;
}
Time addTime(Time a, Time b)
{

}
