#include<cstdlib>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
const int MAX=5;

void juego()
{
 int cont=0;
 bool numCorrecto=false;
 int num=1+rand()%(25-1);
 int x;
	
 cout<<"API1 Programado por Mateo Baldoni"<<endl;
 cout<<"Adivina el numero correcto"<<endl;
 cout<<"Tenes cinco oportunidades"<<endl;

	
 while(cont<MAX && numCorrecto==false){
 cont++;
 cout<<"Oportunidad #:"<<cont<<endl;
 cout<<"Escribi un numero entre 25 y 1: "<<endl;
 cin>>x;
 if(x>num)
  {
  cout<<"Tenes que ingresar un numero menor"<<endl;
 }
 else if(x<num)
 {
 cout<<"Tenes que ingresar un numero mayor"<<endl;
 }
  else
  numCorrecto=true;
  }
  
  if(numCorrecto==true){
  cout<<endl;
  cout<<"Ganaste";
  cout<<endl;
  }
  else
  {
  cout<<endl;
  cout<<"Perdiste";
  cout<<endl;
  }
  
  
}

int main(int argc, char** argv){
 srand(time(NULL));
 juego();

	
 return 0;
	

}
