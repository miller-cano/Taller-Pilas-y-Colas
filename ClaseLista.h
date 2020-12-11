/********************************************************************************************
* -Clase Lista                                                                              *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include "ClaseNodo_Lista.h"
#include <string.h>

using namespace std;

class Lista
{
	private:
		Nodo_L * Punta;
	public:
		Lista();
		Nodo_L * GetPunta(void);
		void insertarFinal(int nro);
		void insertarMesas(int n);
		void mostrarLista();
		void desocuparMesa(int n);
		~Lista();
	friend class Cola;
};
 
Lista::Lista()
{
	Punta = NULL;
}

Nodo_L * Lista::GetPunta(){
	return Punta;
}

void Lista::insertarFinal(int nro)
{
	Nodo_L *x = new Nodo_L(nro), *p;
	if(Punta == NULL)
	{
		Punta = x;
	}
	else
	{
		p = Punta;
		while(p->GetLiga() != NULL){
			p = p->GetLiga();
		}
		p->SetLiga(x);
	}
}

void Lista::desocuparMesa(int n)
{
	Nodo_L *p;
	if(Punta == NULL)
	{
		cout<<"\nNO HAY MESAS INSERTADAS"<<endl;
	}
	else
	{
		p = Punta;
		while(p->GetLiga() != NULL && p->GetNroMesa() != n){
			p = p->GetLiga();
		}
		if(p->GetNroMesa() == n){
			p->SetEstadoMesa("VACIA");
		}
		else{
			cout<<"\nLA MESA A DESOCUPAR NO FUE ENCONTRADA"<<endl;
		}	
	}
}

void Lista::insertarMesas(int n){
	for(int i = 1; i <= n; i++){
		insertarFinal(i);
	}
}
	
void Lista::mostrarLista(){
	Nodo_L *p = Punta;
	int i = 0;
	cout<<"\n\t*********************************";
	cout<<"\n\t|             MESAS             |";
	cout<<"\n\t*********************************";
	while(p != NULL) {
		cout<<"\n\t|   mesa #"<<p->GetNroMesa()<<"\t"<<p->GetEstadoMesa();
		p = p->GetLiga();
		i++;
	}
	cout<<"\n\t*********************************"<<endl;
	
}

Lista::~Lista() { }
