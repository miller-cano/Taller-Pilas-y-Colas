/********************************************************************************************
* -Proyecto Pilas, Colas y Recursividad                                                                   *
* -Grupo de trabajo:                                                         *
* -Fecha de creación: 04/12/2020                                                           *
* -Última modificación:                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "MetodosColas.cpp"
#include "MetodosPilas.cpp"
#include "8_TIPO_3.cpp"
using namespace std;
short MENU(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t*****************************************************" << endl;
	cout << "\t|            MENU PILAS, COLAS Y RECURSIVIDAD        |" << endl;
	cout << "\t*****************************************************" << endl;
	cout << "\t|  (1)  |  EJERCICIO NUMERO 8  TIPO 1                |" << endl;
	cout << "\t|  (2)  |  EJERCICIO NUMERO 8  TIPO 2                |" << endl;
	cout << "\t|  (3)  |  EJERCICIO NUMERO 12 TIPO 2                |" << endl;
	cout << "\t|  (4)  |  EJERCICIO NUMERO 8  TIPO 3                |" << endl;
	cout << "\t|  (5)  |  TERMINAR                                  |" << endl;
	cout << "\t*****************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 5)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;
}

short menuPunto1(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                          MENU EJERCICIO 8 TIPO 1                         |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS EN LA PILA                                       |" << endl;
	cout << "\t|  (2)  |  RETORNAR COLA                                                   |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 3)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

short menuPunto2(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t***********************************************************" << endl;
	cout << "\t|                  MENU EJERCICIO 8 TIPO 2                |" << endl;
	cout << "\t***********************************************************" << endl;
	cout << "\t|  (1)  |                                				 |" << endl;
	cout << "\t|  (2)  |                                                 |" << endl;
	cout << "\t|  (3)  |                                                 |" << endl;
	cout << "\t|  (4)  |                                                 |" << endl;
	cout << "\t|  (5)  |                                                 |" << endl;
	cout << "\t***********************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 5)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}
short menuPunto3(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                         MENU EJERCICIO 12 TIPO 2                         |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS DE LAS COLAS                                     |" << endl;
	cout << "\t|  (2)  |  COLA RESULTANTE                                                 |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 3)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

short menuPunto4(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                         MENU EJERCICIO 8 TIPO 3                          |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  ENCONTRAR EL MCD                                                |" << endl;
	cout << "\t|  (2)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 2)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

int main(int argc, char** argv) {
	short opcion,opcionPunto1, opcionPunto2,opcionPunto3,opcionPunto4;
	int i,TamP,y,x,n,m,r;
	

	do{
		opcion = MENU();
		
			switch(opcion){
				case 1:
					do{
						opcionPunto1 = menuPunto1();
						switch(opcionPunto1){
							case 1:
								cout<<"\nTAMAÑO DE LA PILA: ";cin>>TamP;				
								Pila A(TamP);
								Cola R(Tamp);
								for(i=1;i<=TamP;i++){
									cout<<"\nDato A Apilar:";cin>>x;
									A.Apilar(x);
								}
								A.Mostrar();
							    system("pause");
								break;
							case 2: 
								A.Mostrar();
								R.Recibir_Pila(A);
								R.Mostrar();
								system("pause");
								break;
				
						}
					} while(opcionPunto1 != 3);
					system("pause");
					break;
				case 2: 

					do{
						opcionPunto2 = menuPunto2();
						switch(opcionPunto2){
							case 1:
							
								system("pause"); 
								break;
							case 2: 
								
								system("pause"); 
								break;
							case 3: 
								
								system("pause"); 
								break;
							case 4: 
								
								system("pause"); 
								break;
							case 5:
								
								break;
							}
					} while(opcionPunto2 != 5);
					system("pause");
					break;
					
					
					
				case 3: 
				
					do{
						opcionPunto3 = menuPunto3();
						
						switch (opcionPunto3){
						
							case 1: 
								int TamC1, TamC2;
								cout<<"\nTAMAÑO DE LA COLA 1 : ";cin>>TamC1;				
								Cola C1(TamC1);
								cout<<"\nTAMAÑO DE LA COLA 2 : ";cin>>TamC2;
								Cola C2(TamC2);
								Cola R(C1.GetLimite()+C2.GetLimite()+2);
					
								cout<<"\nINGRESE LOS DATOS DE LA COLA 1:";
						
								for(i=1;i<=TamC1;i++){
									cout<<"\nDato A Apilar:";cin>>x;
									C1.Encolar(x);
								}
						
								cout<<"\nINGRESE LOS DATOS DE LA COLA 2:";
						
								for(i=1;i<=TamC2;i++){
									cout<<"\nDato A Apilar:";cin>>x;
									C2.Encolar(x);
								}
								cout<<"\nCOLA 1"<<endl;
								C1.Mostrar();
								cout<<"\nCOLA 2"<<endl;
								C2.Mostrar();
								
								system("pause");break;
							
							case 2: 
							
								cout<<"\nCOLA 1"<<endl;
								C1.Mostrar();
								cout<<"\nCOLA 2"<<endl;
								C2.Mostrar();		
					
								cout<<"\nINGRESA EL ULTIMO DATO DEL NUMERO QUE QUIERES ENCOLAR: ";cin>>x;
								
								R.UDigitoCola(C1,C2,x);
								
								cout<<"\nCOLA RESULTANTE "<<endl;
								R.Mostrar();
								
								cout<<"\nCOLA 1"<<endl;
								C1.Mostrar();
								cout<<"\nCOLA 2"<<endl;
								C2.Mostrar();	
								
								system("pause");break;
								
						}
			
					}while(opcionPunto3 != 3);
					system("pause");break;
					
					
				case 4: 
				
					mcd mcd1 = mcd();
					cout<<"\nDIGITE EL VALOR DE N: ";cin>>n;
					cout<<"\nDIGITE EL VALOR DE M: ";cin>>m;
					
					mcd1.setn(n);
					mcd1.setm(m);
					
					r = mcd1.operacion();
					
					cout<<endl<<r<<" es el mcd de "<<mcd1.getm()<<" y "<<mcd1.getn();
					system("pause");break;
				
				case 5: 
					cout<<"\n **************************************************";
					cout<<"\n |           	  PROCESO TERMINADO                |";
					cout<<"\n |               HASTA LA PROXIMA!!               |";
					cout<<"\n **************************************************"<<endl;
					break;
		}
	} while(opcion != 5);
	system("pause");break;
	return 0;
}
