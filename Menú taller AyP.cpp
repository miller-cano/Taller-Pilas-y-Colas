/********************************************************************************************
* -Taller Pilas, Colas y Recursividad                                                       *
* -Grupo de trabajo: MSCA, SAH, SMJ y AMP                                                   *  
* -Fecha de creación: 04/12/2020                                                            *
* -Última modificación: 11/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ClaseCola_Vectores.h"
#include "ClaseCola.h"
#include "ClaseAlgoritmoEuclides.h"

using namespace std;

short MENU(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t**************************************************" << endl;
	cout << "\t|        MENU PILAS, COLAS Y RECURSIVIDAD        |" << endl;
	cout << "\t**************************************************" << endl;
	cout << "\t|  (1)  |  EJERCICIO NUMERO 8  TIPO 1            |" << endl;
	cout << "\t|  (2)  |  EJERCICIO NUMERO 8  TIPO 2            |" << endl;
	cout << "\t|  (3)  |  EJERCICIO NUMERO 12 TIPO 2            |" << endl;
	cout << "\t|  (4)  |  EJERCICIO NUMERO 8  TIPO 3            |" << endl;
	cout << "\t|  (5)  |  TERMINAR                              |" << endl;
	cout << "\t**************************************************" << endl;
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
	cout << "\n\t*********************************************" << endl;
	cout << "\t|          MENU EJERCICIO 8 TIPO 1          |" << endl;
	cout << "\t*********************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATO EN LA PILA         |" << endl;
	cout << "\t|  (2)  |  CONVERTIR PILA A COLA            |" << endl;
	cout << "\t|  (3)  |  TERMINAR                         |" << endl;
	cout << "\t*********************************************" << endl;
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
	cout << "\n\t*********************************************" << endl;
	cout << "\t|         MENU EJERCICIO 8 TIPO 2           |" << endl;
	cout << "\t*********************************************" << endl;
	cout << "\t|  (1)  |  INGRESAR RESERVA A LA COLA       |" << endl;
	cout << "\t|  (2)  |  PASAR RESERVA A LA MESA          |" << endl;
	cout << "\t|  (3)  |  DESOCUPAR MESA                   |" << endl;
	cout << "\t|  (4)  |  TERMINAR                         |" << endl;
	cout << "\t*********************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 4)
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
	cout << "\n\t**********************************************" << endl;
	cout << "\t|          MENU EJERCICIO 12 TIPO 2          |" << endl;
	cout << "\t**********************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS DE LAS COLAS       |" << endl;
	cout << "\t|  (2)  |  COLA RESULTANTE                   |" << endl;
	cout << "\t|  (3)  |  TERMINAR                          |" << endl;
	cout << "\t**********************************************" << endl;
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
	cout << "\n\t*****************************************" << endl;
	cout << "\t|        MENU EJERCICIO 8 TIPO 3        |" << endl;
	cout << "\t*****************************************" << endl;
	cout << "\t|  (1)  |  INGRESAR N Y M               |" << endl;
	cout << "\t|  (2)  |  ENCONTRAR EL MCD             |" << endl;
	cout << "\t|  (3)  |  TERMINAR                     |" << endl;
	cout << "\t*****************************************" << endl;
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

int main(int argc, char** argv) {
	short opcion, opcionPunto1, opcionPunto2, opcionPunto3, opcionPunto4, opc;
	int TamP, TamC1, TamC2, x, n, m, r;
	string nombre;
	do{
		opcion = MENU();
		
			switch(opcion){
				case 1:
				{
					cout<<"\nTAMANIO DE LA PILA: ";cin>>TamP;				
					Pila A(TamP);
					Cola_Vec R(TamP);
					do{
						opcionPunto1 = menuPunto1();
						
						switch(opcionPunto1){
							case 1:
								cout<<"\n";
								A.Mostrar();
								cout<<"Dato que desea Apilar:";cin>>x;
								cout<<"\n";
								A.Apilar(x);
								A.Mostrar();
							    system("pause");
								break;
							case 2: 
								A.Mostrar();
								R.Convertir_Pila(A);
								R.Mostrar_V();
								system("pause");
								break;
							case 3: 
								cout<<"\n *************************************";
								cout<<"\n |         PROCESO TERMINADO         |";
								cout<<"\n |         HASTA LA PROXIMA!!        |";
								cout<<"\n *************************************"<<endl; 
								break;
						}
					} while(opcionPunto1 != 3);
					system("pause");
				}
					break;
				
				case 2:
				{ 
					Lista * mesas = new Lista();
					cout<<"\nINGRESE EL NUMERO DE MESAS DEL RESTAURANTE: "; cin>>n;
					mesas->insertarMesas(n);
					mesas->mostrarLista();
					Cola reservas(n);
					system("pause");
					do{
						opcionPunto2 = menuPunto2();
						switch(opcionPunto2){
							case 1:
								reservas.Mostrar();
								cout<<"\nIngrese el nombre de la persona que va hacer la reserva: ";
								cin>>nombre;
								cout<<"\nIngrese el numero de comensales: ";
								cin>>x;
								r = 0;
								while(x > 5 && r == 0)
								{
									cout<<"\n\t ******************************************************";
									cout<<"\n\t |    EL NUMERO DE COMENSALES ES MAXIMO 5 PERSONAS    |";
									cout<<"\n\t ******************************************************"<<endl; 
									cout<<"\n[0] Ingresar menos comensales \n[1] NO hacer reserva";
									cout<<"\n\n\tIngrese la opcion: ";
									cin>>r;
									if(r == 0){
										cout<<"\nIngrese el numero de comensales: ";
										cin>>x;	
									}
								}
								if(r == 0){
									reservas.Encolar(x, nombre);
								}
								reservas.Mostrar();
								system("pause"); 
								break;
							case 2: 
								mesas->mostrarLista();
								reservas.Mostrar();
								cout<<"\nMESA A LA QUE DESEA PASAR: "; cin>>x;
								reservas.PasarMesa(&*mesas, x, &opcionPunto2);
								mesas->mostrarLista();
								reservas.Mostrar();
								if(opcionPunto2 == 4){
									cout<<"\n *************************************************";
									cout<<"\n |         PROCESO DE RESERVAS TERMINADO         |";
									cout<<"\n |              HASTA LA PROXIMA!!               |";
									cout<<"\n *************************************************"<<endl;
								}
								system("pause"); 
								break;
							case 3: 
								mesas->mostrarLista();
								cout<<"\nINGRESE LA MESA QUE DESEA DESOCUPAR: "; cin>>x;
								mesas->desocuparMesa(x);
								mesas->mostrarLista();
								system("pause"); 
								break;
							case 4: 
								cout<<"\n *************************************************";
								cout<<"\n |         PROCESO DE RESERVAS TERMINADO         |";
								cout<<"\n |              HASTA LA PROXIMA!!               |";
								cout<<"\n *************************************************"<<endl; 
								break;
								system("pause");
							}
					} while(opcionPunto2 != 4);
				}
					break;
						
				case 3: 
				{
					cout<<"\nTAMANIO DE LA COLA 1: ";cin>>TamC1;				
					Cola_Vec C1(TamC1);
					cout<<"\nTAMANIO DE LA COLA 2: ";cin>>TamC2;
					Cola_Vec C2(TamC2);
					Cola_Vec R(C1.GetLimite() + C2.GetLimite() + 2);
					do{
						opcionPunto3 = menuPunto3();
						
						switch (opcionPunto3){
							case 1: 
									cout<<"\n1. Encolar en Cola 1 \n2. Encolar en Cola 2 \n\nIngrese su opcion: "; cin>>opc;
									while(opc < 1 || opc > 2)
									{
										cout<<"\n\tValor no valido, ingrese otra vez la opcion: ";
										cin>>opc;
									}
									if(opc == 1){
										cout<<"\n";
										C1.Mostrar_V();
										cout<<"Dato a insertar a la cola: "; cin>>x;
										C1.Encolar(x);
										cout<<"\n";
										C1.Mostrar_V();
									}
									else{
										cout<<"\n";
										C2.Mostrar_V();
										cout<<"Dato a insertar a la cola: "; cin>>x;
										C2.Encolar(x);
										cout<<"\n";
										C2.Mostrar_V();
									}
									system("pause");
									break;
							
							case 2: 
							
								cout<<"\nCOLA 1"<<endl;
								C1.Mostrar_V();
								cout<<"\nCOLA 2"<<endl;
								C2.Mostrar_V();		
					
								cout<<"\nINGRESA EL ULTIMO DIGITO DE LOS DATOS QUE QUIERE ENCOLAR: "; cin>>x;
								R.UDigitoCola(C1, C2, x);
								
								cout<<"\nCOLA RESULTANTE "<<endl;
								R.Mostrar_V();
								cout<<"\nCOLA 1"<<endl;
								C1.Mostrar_V();
								cout<<"\nCOLA 2"<<endl;
								C2.Mostrar_V();	
					
								system("pause");
								break;
							case 3: 
								cout<<"\n *************************************";
								cout<<"\n |         PROCESO TERMINADO         |";
								cout<<"\n |         HASTA LA PROXIMA!!        |";
								cout<<"\n *************************************"<<endl; 
								break;
						}
			
					} while(opcionPunto3 != 3);
					system("pause");
				}
					break;
					
				case 4: 
				{
					do{
						opcionPunto4 = menuPunto4();
						
						switch (opcionPunto4){
							case 1:
								cout<<"\nDIGITE EL VALOR DE N: ";cin>>n;
								cout<<"\nDIGITE EL VALOR DE M: ";cin>>m;
								system("pause");
								break;
							
							case 2:
							{
								Mcd mcd1(n, m); 
								r = mcd1.Operacion(n, m);
								cout<<"\n\t["<<r<<"] ES EL MCD DE "<<mcd1.GetM()<<" Y "<<mcd1.GetN()<<endl<<endl;
								system("pause");
							}
								break;
							case 3: 
								cout<<"\n *************************************";
								cout<<"\n |         PROCESO TERMINADO         |";
								cout<<"\n |         HASTA LA PROXIMA!!        |";
								cout<<"\n *************************************"<<endl; 
								break;
						}
					} while(opcionPunto4 != 3);
					system("pause");
				}
					break;
				
				case 5: 
					cout<<"\n **************************************************";
					cout<<"\n |           	 PROCESO TERMINADO                |";
					cout<<"\n |               HASTA LA PROXIMA!!               |";
					cout<<"\n **************************************************"<<endl;
					break;
		}
	} while(opcion != 5);
	system("pause");
	return 0;
}
