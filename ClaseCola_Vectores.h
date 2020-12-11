/********************************************************************************************
* -Clase Cola con vectores                                                                  *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include "ClasePila.h"

using namespace std;

class Cola_Vec{
	private:
		int limite;
		int tope;
		int *vector;
		
	public:
		Cola_Vec(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int i);
		void Encolar(int d);
		int Desencolar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola_Vec A);
		void Mostrar_V();
		void UDigitoCola(Cola_Vec A, Cola_Vec B, int d);
		void Convertir_Pila(Pila A);
		~Cola_Vec();
};


Cola_Vec::Cola_Vec(int n)
{
	limite = n-1;
	tope = -1;
	vector = new int(n);
}

int Cola_Vec::GetLimite()
{
	return limite;
}

void Cola_Vec::SetLimite(int l)
{
	limite = l;
}

int Cola_Vec::GetTope()
{
	return tope;
}

void Cola_Vec::SetTope(int t)
{
	tope = t;
}

int Cola_Vec::GetVector()
{
	return vector[0];
}

void Cola_Vec::SetVector(int i)
{
	vector[0] = i;
}	
		
bool Cola_Vec::ColaLlena()
{
	bool band = false;
	if(tope == limite){
		band = true;
	}
	return band;
}

bool Cola_Vec::ColaVacia()
{
	bool band = false;
	if(tope == -1){
		band = true;
	}
	return band;
}

void Cola_Vec::Encolar(int d)
{
	if(ColaLlena() == false){
		tope++;
		vector[tope] = d;
 	}
		else if(ColaLlena() == true){
		//	cout<<"\nLA COLA ESTA LLENA"<<endl;
		}
}

int Cola_Vec::Desencolar()
{
	int d, i = 1;
	
	if(ColaVacia() == false){
		d = vector[0];
		while(i <= tope){
			vector[i-1] = vector[i];
			i++;
		}
		tope--;
	}
		else if(ColaVacia() == true){
		//	cout<<"\nLA COLA ESTA VACIA"<<endl;
		}
	return d;
}

void Cola_Vec::LlenarCola(Cola_Vec A)
{
	while(A.ColaVacia() == false){
		Encolar(A.Desencolar());
	}
}

void Cola_Vec::Mostrar_V()
{
	int t;
	Cola_Vec aux(limite+1);
	while(ColaVacia() == false){
		t = Desencolar();
		cout<<"| "<<t<<" |";
		aux.Encolar(t);
	}
	LlenarCola(aux);
	cout<<"\n\n";
}

void Cola_Vec::UDigitoCola(Cola_Vec A, Cola_Vec B, int d)
{
	Cola_Vec AuxA(A.GetLimite()+1);
	Cola_Vec AuxB(B.GetLimite()+1);
	int r = 0, b = 0;
	
	if(A.ColaVacia() == false || B.ColaVacia() == false){
		while(A.ColaVacia() == false){
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

void Cola_Vec::Convertir_Pila(Pila A)
{
	if(A.PilaVacia() == false){	
		while(A.PilaVacia() == false){
			Encolar(A.Desapilar());
		}
	}
	else{
		cout<<"LA PILA ESTA VACIA";
	}
}

Cola_Vec::~Cola_Vec() { }
