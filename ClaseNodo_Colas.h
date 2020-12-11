/********************************************************************************************
* -Clase Nodo para la clase cola                                                            *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <stdlib.h>
#include "ClaseLista.h"

using namespace std;

class Nodo_C{
	private:
		int comensales;
		string personaReserva;
		Nodo_C *liga;
	public:	
		Nodo_C();
		Nodo_C * GetLiga(void);
		void SetLiga(Nodo_C *);
		int GetComensales(void);
		void SetComensales(int);
		string GetPersonaReserva(void);
		void SetPersonaReserva(string);
		~Nodo_C(void);
};

Nodo_C::Nodo_C()
{
	liga = NULL;
	comensales = 0;
	personaReserva = "";
}

int Nodo_C::GetComensales()
{
	return comensales;
}

string Nodo_C::GetPersonaReserva()
{
	return personaReserva;
}

Nodo_C * Nodo_C::GetLiga()
{
	return liga;
}

void Nodo_C::SetComensales(int n)
{
	comensales = n;
}

void Nodo_C::SetPersonaReserva(string nombre)
{
	personaReserva = nombre;
}

void Nodo_C::SetLiga(Nodo_C *l)
{
	liga = l;
}

Nodo_C::~Nodo_C() { }
