#include <iostream>
#include <stdlib.h>
#include "ClaseNodo_Colas.h"
#include "ClaseLista.h"

using namespace std;

class Cola{
	private:
		int limite;
		int tope;
		nodo *punta;
	public:
		Cola(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		nodo * GetPunta(void);
		void SetPunta(nodo *p);
		void Encolar(int n, string nombre);
		void Desencolar(int *n, string *nombre);
		void PasarMesa(Lista *mesas, int nro);
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void Mostrar();
		~Cola();
};
