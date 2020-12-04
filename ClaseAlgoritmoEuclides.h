// Ejercicio 8 Tipo 3
// Santiago Mojica Jimenez
// Grupo 2


#include <iostream>

using namespace std;

class mcd{
	
	private:
		int n;
		int m;
			
	public:
		mcd();
	int	getn();
	int	getm();
	void setm(int);
	void setn(int);
	int operacion(int,int);
};
	mcd::mcd(){
		int n;
		int m;
	}
void mcd::setm(int d){
		m = d;
	}
	
void mcd::setn(int d){
		n = d;
	}
	
int mcd::getn(){
	return n;
	}
	
int mcd::getm(){
	return m;
	}
	
int mcd::operacion(int a, int b){	
	
		if(b == 0){
			return a;
		}else{
			operacion(b,a%b);
		}
	
}
