#include <iostream>
#include <stdlib.h>
#include "ClasePila.h"

using namespace std;

Pila::Pila(int n)
{
	limite = n-1;
	tope = -1;
	vector = new int(n);
}

int Pila::Pila::GetLimite()
{
	return limite;
}

void Pila::SetLimite(int l)
{
	limite = l;
}

int Pila::GetTope()
{
	return tope;
}

void Pila::SetTope(int t)
{
	tope = t;
}

int Pila::GetVector()
{
	return vector[limite];
}

void Pila::SetVector(int i)
{
	vector[limite] = i;
}
		
		
bool Pila::PilaLlena()
{
	bool band = false;
	if(tope == limite){
		band = true;
	}
	return band;
}

bool Pila::PilaVacia()
{
	bool band = false;
	if(tope == -1){
		band = true;
	}
	return band;
}

void Pila::Apilar(int d)
{
	bool llena;
	llena = PilaLlena();
	if(llena == false){
		tope++;
		vector[tope] = d;
		//cout<<"\nDATO INSERTADO A LA PILA"<<endl;
	}
		else if(llena == true){
			//cout<<"\nLA PILA ESTA LLENA"<<endl;
		}
}

int Pila::Desapilar()
{
	int d;
	bool vacia;
	vacia = PilaVacia();
	if(vacia == false){
		d = vector[tope];
		tope--;
	}
		else if(vacia == true){
			cout<<"\nLA PILA ESTA VACIA"<<endl;
		}
	return d;
}


void Pila::LlenarPila(Pila A)
{
	while(A.PilaVacia() == false){
		Apilar(A.Desapilar());
	}
}

void Pila::Mostrar()
{
	int v;
	Pila aux(limite+1);
	while(PilaVacia() == false){
		v = Desapilar();
		cout<<"| "<<v<<" |"<<endl;
		cout<<"------"<<endl;
		aux.Apilar(v);
	}
	LlenarPila(aux);
	cout<<"\n";
}

Pila::~Pila() { }
