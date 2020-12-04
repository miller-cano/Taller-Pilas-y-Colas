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
		getn();
		getm();
		setm(int);
		setn(int);
		operacion();
};
	mcd::mcd(){
		int n;
		int m;
	}
int mcd::setm(int d){
		m = d;
	}
	
mcd::setn(int d){
		n = d;
	}
	
mcd::getn(){
	return n;
	}
	
mcd::getm(){
	return m;
	}
	
mcd::operacion(){
	
	if(m == 0){
		return n;
	}
	else if(n == 0){
		return m;
	}
	else{
		if(m<n){
			int aux = m;
			m = n;
			n = aux;
		}
		
		 // para que el mayor divida al menor siempre
		 
		int residuo[30];
		int cociente[30];
		int i = 0;
		int maux = m,naux = n;
		 
		 
		while(residuo[i] != 0){
			
		cociente[i] = (maux / naux);
		residuo[i] = maux % naux;
		maux = naux;
		naux = residuo[i];
		i++;
		}
		return naux;
	}
	
}
	
	
int main(){
	
	mcd mcd1 = mcd();
	
	int n,m;
	
	cout<<"\nDigite el valor n: ";
	cin>>n;
	cout<<"\nDigite el valor m: ";
	cin>>m;
	
	mcd1.setn(n);
	mcd1.setm(m);
	int r = mcd1.operacion();
	cout<<endl<<r<<" es el mcd de "<<mcd1.getm()<<" y "<<mcd1.getn();
	
	
	return 0;
}
