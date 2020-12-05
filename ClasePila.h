#include <iostream>

using namespace std;

class Pila{
	private:
		int limite;
		int tope;
		int *vector;
		
	public:
		Pila(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int i);
		void Apilar(int d);
		int Desapilar();
		bool PilaLlena();
		bool PilaVacia();
		void LlenarPila(Pila A);
		void Mostrar();
		~Pila();
};
