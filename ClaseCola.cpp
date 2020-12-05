#include <iostream>
#include <stdlib.h>
#include "ClaseCola.h"

using namespace std;

Cola::Cola(int n)
{
	limite = n;
	tope = 0;
	punta = NULL;
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

nodo * Cola::GetPunta()
{
	return punta;
}

void Cola::SetPunta(nodo *l)
{
	punta = l;
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
	if(tope == 0){
		band = true;
	}
	return band;
}

void Cola::Encolar(int n, string nombre)
{
	bool llena;
	llena = ColaLlena();
	if(llena == false){
		nodo *x = new nodo(), *p;
		x->SetComensales(n);
		x->SetPersonaReserva(nombre);
		if(punta == NULL){
			punta = x;
		}
		else{
			p = punta;
			while(p->GetLiga() != NULL){
				p = p->GetLiga();
			}
			p->SetLiga(x);	
		}
		tope++;	
	//	cout<<"\nDATO INSERTADO A LA COLA"<<endl;
	}
		else if(llena == true){
		//	cout<<"\nLA COLA ESTA LLENA"<<endl;
		}	
}

void Cola::Desencolar(int *n, string *nombre)
{ 
	bool vacia;
	vacia = ColaVacia();
	if(vacia == false){
		*nombre = punta->GetPersonaReserva();
		*n = punta->GetComensales();
		nodo *p = punta;
		punta = punta->GetLiga();
		delete p;
		tope--;
	}
		else if(vacia == true){
		//	cout<<"\nLA COLA ESTA VACIA"<<endl;
		}
}

void Cola::LlenarCola(Cola A)
{
	int n;
	string nombre;
	while(A.ColaVacia() == false){
		A.Desencolar(&n, &nombre);
		Encolar(n, nombre);
	}
}

void Cola::Mostrar()
{
	int n;
	string nombre;
	Cola aux(limite);
	while(ColaVacia() == false){
		Desencolar(&n, &nombre);
		cout<<"| Nombre de la persona ["<<nombre<<"] \tNro de comensales: ["<<n<<"] |"<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
		aux.Encolar(n, nombre);
	}
	LlenarCola(aux);
	cout<<"\n";
}

void Cola::PasarMesa(Lista *mesas, int nro){
	Nodo *p;
	string nombre;
	int n;
	p = mesas->GetPunta();
	while(p->GetLiga() != NULL && p->GetNroMesa() != nro){
		p = p->GetLiga();
	}
	if(p->GetNroMesa() == nro){
		if(p->GetEstadoMesa() == "VACIA"){
			p->SetEstadoMesa("OCUPADA");
			Desencolar(&n, &nombre);
			cout<<"\nLA PERSONA ["<<nombre<<" CON ["<<n<<"] COMENSALES PASANDO A LA MESA #"<<nro<<endl;
		}
			else if(p->GetEstadoMesa() == "OCUPADA"){
				
			}
	}
}

Cola::~Cola() {}
