/********************************************************************************************
* -Clase Nodo para la clase lista                                                           *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class Nodo_L{
	private:
		int nroMesa; 
		string estadoMesa;
		Nodo_L *liga;
		
	public:	
		Nodo_L(int);
		Nodo_L * GetLiga(void);
		void SetLiga(Nodo_L *);
		int GetNroMesa(void);
		void SetNroMesa(int);
		string GetEstadoMesa(void);
		void SetEstadoMesa(string);
		~Nodo_L(void);
		friend class Lista;
};

Nodo_L::Nodo_L(int n) 
{
	nroMesa = n;
	estadoMesa = "VACIA";
	liga = NULL;
}

Nodo_L * Nodo_L::GetLiga()
{
	return liga;
}

void Nodo_L::SetLiga(Nodo_L * l)
{
	liga = l;
}
		
int Nodo_L::GetNroMesa() 
{
	return nroMesa;
}

void Nodo_L::SetNroMesa(int nro)
{
	nroMesa = nro;
}

string Nodo_L::GetEstadoMesa() 
{
	return estadoMesa;
}

void Nodo_L::SetEstadoMesa(string e)
{
	estadoMesa = e;
}

Nodo_L::~Nodo_L() { }
