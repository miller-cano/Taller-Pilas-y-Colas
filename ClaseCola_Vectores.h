#include <iostream>

using namespace std;

class Cola{
	private:
		int limite;
		int tope;
		int *vector;
		
	public:
		Cola(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		int GetVectorTope();
		void SetVector(int i);
		void SetVectorTope(int i);
		void Encolar(int d);
		int Desencolar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void Mostrar();
		void UDigitoCola(Cola A, Cola B, int d);
		void Recibir_Pila(Pila A);
		~Cola();
	
};
