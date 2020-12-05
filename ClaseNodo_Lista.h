#include <iostream>
#include <string.h>

using namespace std;

class Nodo{
	private:
		int nroMesa; 
		string estadoMesa;
		Nodo *liga;
		
	public:	
		Nodo(int);
		Nodo * GetLiga(void);
		void SetLiga(Nodo *);
		int GetNroMesa(void);
		void SetNroMesa(int);
		string GetEstadoMesa(void);
		void SetEstadoMesa(string);
		~Nodo(void);
		friend class Lista;
};

Nodo::Nodo(int n) 
{
	nroMesa = n;
	estadoMesa = "VACIA";
	liga = NULL;
}

Nodo * Nodo::GetLiga()
{
	return liga;
}

void Nodo::SetLiga(Nodo * l)
{
	liga = l;
}
		
int Nodo::GetNroMesa() 
{
	return nroMesa;
}

void Nodo::SetNroMesa(int nro)
{
	nroMesa = nro;
}

string Nodo::GetEstadoMesa() 
{
	return estadoMesa;
}

void Nodo::SetEstadoMesa(string e)
{
	estadoMesa = e;
}

Nodo::~Nodo() { }
