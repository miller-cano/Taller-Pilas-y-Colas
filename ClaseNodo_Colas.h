#include <iostream>
#include <stdlib.h>

using namespace std;

class nodo{
	private:
		int comensales;
		string personaReserva;
		nodo *liga;
	public:	
		nodo();
		nodo * GetLiga(void);
		void SetLiga(nodo *);
		int GetComensales(void);
		void SetComensales(int);
		string GetPersonaReserva(void);
		void SetPersonaReserva(string);
		~nodo(void);
};

nodo::nodo()
{
	liga = NULL;
	comensales = 0;
	personaReserva = "";
}

int nodo::GetComensales()
{
	return comensales;
}

string nodo::GetPersonaReserva()
{
	return personaReserva;
}

nodo * nodo::GetLiga()
{
	return liga;
}

void nodo::SetComensales(int n)
{
	comensales = n;
}

void nodo::SetPersonaReserva(string nombre)
{
	personaReserva = nombre;
}

void nodo::SetLiga(nodo *l)
{
	liga = l;
}

nodo::~nodo() { }
