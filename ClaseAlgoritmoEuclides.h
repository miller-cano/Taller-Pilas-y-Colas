/********************************************************************************************
* -Algoritmo de Euclides                                                                    *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>

using namespace std;

class Mcd{
	
	private:
		int n;
		int m;
			
	public:
		Mcd(int , int);
		int	GetN();
		int	GetM();
		void SetM(int);
		void SetN(int);
		int Operacion(int,int);
		~Mcd();
};

Mcd::Mcd(int x, int y)
{
	n = x;
	m = y;
}

void Mcd::SetM(int d){
	m = d;
}
	
void Mcd::SetN(int d)
{
	n = d;
}
	
int Mcd::GetN()
{
	return n;
}
	
int Mcd::GetM()
{
	return m;
}
	
int Mcd::Operacion(int a, int b)
{	
	if(b == 0){
		return a;
	}
	else{
		Operacion(b,a%b);
	}
}

Mcd::~Mcd() { }
