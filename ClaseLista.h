#include <iostream>
#include "ClaseNodo_Lista.h"
#include <string.h>

using namespace std;

class Lista
{
	private:
		Nodo * Punta;
	public:
		Lista();
		Nodo * GetPunta(void);
		void insertarFinal(int nro);
		void insertarMesas(int n);
		void mostrarLista();
		~Lista();
	friend class Cola;
};
 
Lista::Lista()
{
	Punta = NULL;
}

Nodo * Lista::GetPunta(){
	return Punta;
}

void Lista::insertarFinal(int nro)
{
	Nodo *x = new Nodo(nro), *p;
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
/*	cout<<"\n *********************************************";
	cout<<"\n |          DATO INSERTADO AL FINAL          |";
	cout<<"\n *********************************************"<<endl;	*/
}

void Lista::insertarMesas(int n){
	for(int i = 1; i <= n; i++){
		insertarFinal(i);
	}
}
	
void Lista::mostrarLista(){
	Nodo *p = Punta;
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
