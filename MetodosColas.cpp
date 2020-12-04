#include <iostream>
#include <stdlib.h>
#include "ClaseCola.h"

using namespace std;

Cola::Cola(int n)
{
	limite = n-1;
	tope = -1;
	vector = new int(n);
}

int Cola::GetLimite()
{
	return limite;
}

void Cola::SetLimite(int l)
{
	limite = l;
}

int Cola::GetTope()
{
	return tope;
}

void Cola::SetTope(int t)
{
	tope = t;
}

int Cola::GetVector()
{
	return vector[0];
}

int Cola::GetVectorTope()
{
	return vector[tope];
}

void Cola::SetVector(int i)
{
	vector[0] = i;
}

void Cola::SetVectorTope(int i)
{
	vector[tope] = i;
}
		
		
bool Cola::ColaLlena()
{
	bool band = false;
	if(tope == limite){
		band = true;
	}
	return band;
}

bool Cola::ColaVacia()
{
	bool band = false;
	if(tope == -1){
		band = true;
	}
	return band;
}

void Cola::Encolar(int d)
{
	bool llena;
	llena = ColaLlena();
	if(llena == false){
		tope++;
		vector[tope] = d;
 	}
		else if(llena == true){
		//	cout<<"\nLA COLA ESTA LLENA"<<endl;
		}
}

int Cola::Desencolar()
{
	int d, i = 1;
	bool vacia;
	vacia = ColaVacia();
	if(vacia == false){
		d = vector[0];
		while(i <= tope){
			vector[i-1] = vector[i];
			i++;
		}
		tope--;
	}
		else if(vacia == true){
		//	cout<<"\nLA COLA ESTA VACIA"<<endl;
		}
	return d;
}





void Cola::LlenarCola(Cola A)
{
	while(A.ColaVacia() == false){
		Encolar(A.Desencolar());
	}
}

void Cola::Mostrar()
{
	int t;
	Cola aux(limite+1);
	while(ColaVacia() == false){
		t = Desencolar();
		cout<<"| "<<t<<" |"<<endl;
		cout<<"------"<<endl;
		aux.Encolar(t);
	}
	LlenarCola(aux);
	cout<<"\n";
}





void Cola::UDigitoCola(Cola A, Cola B, int d){
	
	Cola AuxA(A.GetLimite()+1);
	Cola AuxB(B.GetLimite()+1);
	int r = 0,b = 0;
	
	if(A.ColaVacia() == false || B.ColaVacia() == false){
	
	while (A.ColaVacia() == false){
		
		r = A.Desencolar();
		AuxA.Encolar(r);
		if (r % 10 == d){
			
			Encolar(r);
		}
		
	}
	
	while(B.ColaVacia() == false ){
		
		b = B.Desencolar();
		AuxB.Encolar(b);
		if(b % 10 == d){
			
			Encolar(b);
		}	
	}
	

	A.LlenarCola(AuxA);
	B.LlenarCola(AuxB);
}
	
}

void Cola :: Recibir_Pila(Pila A){
	if (A.pilaVacia() == false){
		
	while (A.pilaVacia()== false){
		
		Encolar(A.desapilar());
	}
	}
	else {
	cout<<"pila vacia.";}
}

Cola::~Cola() { }
