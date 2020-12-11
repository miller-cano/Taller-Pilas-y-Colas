/********************************************************************************************
* -Clase Cola con listas                                                                    *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <stdlib.h>
#include "ClaseNodo_Colas.h"

using namespace std;

class Cola{
	private:
		int limite;
		int tope;
		Nodo_C *punta;
	public:
		Cola(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		Nodo_C * GetPunta(void);
		void SetPunta(Nodo_C *p);
		void Encolar(int n, string nombre);
		void Desencolar(int *n, string *nombre);
		void PasarMesa(Lista *mesas, int nro, short *opcionPunto2);
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void Mostrar();
		~Cola();
};

Cola::Cola(int n)
{
	limite = n * 2;
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

Nodo_C * Cola::GetPunta()
{
	return punta;
}

void Cola::SetPunta(Nodo_C *l)
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
	if(ColaLlena() == false){
		Nodo_C *x = new Nodo_C(), *p;
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
		else if(ColaLlena() == true){
		//	cout<<"\nLA COLA ESTA LLENA"<<endl;
		}	
}

void Cola::Desencolar(int *n, string *nombre)
{ 
	if(ColaVacia() == false){
		*nombre = punta->GetPersonaReserva();
		*n = punta->GetComensales();
		Nodo_C *p = punta;
		punta = punta->GetLiga();
		delete p;
		tope--;
	}
		else if(ColaVacia() == true){
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
	if(ColaVacia() == false){
		cout<<"\n----------------------------------------------------------------"<<endl;
		cout<<"|                       COLA DE RESERVAS                       |"<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
	}
	while(ColaVacia() == false){
		Desencolar(&n, &nombre);
		cout<<"| Nombre de la persona ["<<nombre<<"] \tNro de comensales: ["<<n<<"] |"<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
		aux.Encolar(n, nombre);
	}
	LlenarCola(aux);
	cout<<"\n";
}

void Cola::PasarMesa(Lista *mesas, int nro, short *opcionPunto2){
	Nodo_L *p;
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
			cout<<"\nLA PERSONA ["<<nombre<<"] CON ["<<n<<"] COMENSALES PASANDO A LA MESA #"<<nro<<endl;
			system("pause");
		}
			else if(p->GetEstadoMesa() == "OCUPADA"){
				cout<<"\nLA MESA ESTA OCUPADA"<<endl;
				system("pause");
			}
	}
		else if(p->GetLiga() == NULL){
			cout<<"\nEL NUMERO DE MESA NO EXISTE"<<endl;
			system("pause");
		}
	if(ColaVacia() == true){
		*opcionPunto2 = 4; //Para terminar el proceso cuando la cola de personas este vacia
	}
}

Cola::~Cola() { }
