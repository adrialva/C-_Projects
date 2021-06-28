#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int A=0;

void menu(){
	cout <<"\n   MENU             \n"; 
	cout<< " 1. Expresion algebraica \n";
	cout <<" 2. Promediar la altura \n";
	cout<<" 3. Dia de la semana \n";
	cout <<" 4. Año bisiesto \n";
	cout<<" 5. Funcion cuadratica \n";
	cout << " 6. Intercambio de variables \n";
	cout <<" 7. Porcentaje de votos \n";
	cout <<" 8. Notas \n";
	cout <<" 9. Area del helado \n";
	cout <<" 10. Diagrama punto 26 \n";
	cout <<" 11. Pago de lapices \n";
	cout <<" 12. La fragata \n";
	cout<<" 13. Sistema de ecuaciones \n";
	cout <<" 14. Numero real \n";
	cout << " 15. Unidades del numero \n";
	cout <<" 16. Area del triangulo \n";
	cout <<" 17. Valor mayor \n";
	cout << " 18. Compra \n";
	cout << " 19. Inversion en un banco \n";
	cout << " 20. El constructor y su revoque \n";
	cout << " 21. El semestre \n";
	cout<< "Digite el numero del ejercicio que desea realizar \n";
	cin>>A;
}
	void primero(){
		int a;
		int b;
		int c;
		int d;
		cout <<"(((a+b)/c^(1/2)-((c*d-2*a)^(1/2)/(c+(a/2*a+5*b+4))))+4*c*d";
	}
	void segundo (){
			int altura=0;
			cout <<"cual es tu altura? ";
			cin >>altura;
			if (altura <=150){
				cout <<"persona de altura baja";
			}if (altura <=169){
				cout<<"persona de altura media";
			}if (altura >=170){
				cout <<"persona alta";
			}
		}
	void tercero (){
				int dia=0;
				cout <<"Digite un numero ";
				cout << "\n";
				cin >> dia;
				if (dia<1){
				}
				else{
					(dia>=1);
				}
				if (dia>7){
					cout <<"Intentelo de nuevo";
					cout <<"\n";
				}else{
					(dia<=7);
				}
				if (dia==1) {
					cout <<"Lunes";
					cout <<"\n";
				}
				else{
					(dia!=1);
				}
				if(dia==2){
					cout<<"Martes";
					cout <<"\n";
				}
				else{
					(dia!=2);
				}
				if (dia==3){
					cout <<"Miercoles";
					cout <<"\n";
				}
				else{
					(dia !=3);
				}
				if (dia==4){
					cout <<"Jueves";
					cout <<"\n";
				}
				else{
					(dia!=4);
				}
				if (dia == 5){
					cout <<"Viernes";	
					cout <<"\n";
				}
				else{
					(dia!=5);
				}
				if (dia==6){
					cout<< "Sabado";
					cout <<"\n";
				}
				else{
					(dia!=6);
				}
				if (dia==7){
					cout <<"Domingo";
					cout <<"\n";
				}
			}
	void cuarto (){
					int a=0;
					int b=0;
					int c=0;
					int z=0;
					cout<< "Digite un año ";
					cin >>a;
					c=a %400;
					if (c==0){
						cout <<"\n"<<a<< " es un año bisiesto.";
					}else{ 
						b=a%4;
						if (b==0){
							z=a%100;
							if (z==0){
								cout<<"\n"<<a<<" este año no es bisiesto.";
							}
							else{
								z!=0;
								cout<<"\n"<<a<< " este año es bisiesto.";
							}
						}
						else{
							cout<< endl<< "el año "<<a<<" no es un año bisiesto.";
						}
					}
				}
	void quinto (){
						int a=0;
						int b=0;
						int c=0;
						int x=0;
						int disc=0;
						int x1=0;
						int x2=0;
						cout<<"Ingrese el coeficiente a";
						cin >>a;
						cout <<"Ingrese el coeficiente b";
						cin>>b;
						cout <<"Ingrese el coeficiente c ";
						cin >>c;
						if (a<=0){
							cout <<"error";
						}
						disc=b*2 -4*a*c;
						if (disc <=0){
							cout <<"La ecuacion no tiene soluciones reales";
							
						}
						else{ 
							x1=((-b, sqrt(disc))/2*a);
							x2=((b, sqrt(disc))/2*a);
							cout<< "las dos soluciones reales son";
							cout <<"x1"<<"x2";
						}
					}
	void sexto(){
							int a=0;
							int b=0;
							cout <<" digite un valor ";
							cin >>a;
							cout << " digite el numero por el que desea cambiarlo ";
							cin >>b;
							cout << "ahora "<<b<<" es= "<<a;
							cout <<"\n";
							cout<< "ahora "<<a<< " es= "<<b;
						}
	void septimo (){
								int a=0;
								int b=0;
								int c=0;
								int t=0;
								int x=0;
								int y=0;
								int z=0;
								int d=0;
								cout<< "digite el total de votos ";
								cin>>t;
								cout << "digite los votos del primer candidato ";
								cin>>a;
								
								cout <<" digite los votos del segundo candidato ";
								cin >>b;
								
								cout << " digite los votos del tercer candidato ";
								cin>>c;
								d=a+b+c;
								if (d>t){
									cout <<"***ERROR***";
								}
								else{
								x=(a*100)/t;
								cout <<"el porcentaje de los votos del primer candidato es "<<x<<"\n";
								y=(b*100)/t;
								cout <<"el porcentaje de los votos del segundo candidato es "<<y<<"\n";
								z=(c*100)/t;
								cout <<"el porcentaje de los votos del tercer candidato es "<<z<<"\n";
	}
								}
	void octavo (){
		int n=0;
		cout <<"Ingrese la nota";
		cin >>n;
		if (n>10.0){
			cout <<"ERROR";
		}
		if (n>=9.5){
			cout <<"Matricula de honor";
			
			if(8.5 <= n <9.5){
				cout <<"Sobresaliente";
			}
			else{
				(6.5<=n<8.5);
				cout <<"Notable";
			}
		}
		if (5<=n<6.5){
			cout <<"Aprobado";
		}
		if (n<5){
			cout<<"Reprobado";
		}
									}
	void noveno(){
										int H=0;
										int R=0;
										int pi=0;
										int T=0;
										pi=3.1416;
										cout << " Digite el radio ";
										cin >> R;
										cout <<" Digite la altura ";
										cin>>H;
										T= (pi*R*R*H)/3;
										cout << " el volumen del cono es "<<T;
									}
	void decimo(){
											int a=0;
											int b=0;
											int c=0;
											int m=0;
											cout <<"Digite a ";
											cin>>a;
											cout <<"digite b ";
											cin >>b;
											cout <<"digite c ";
											cin >>c;
											if (a>b){
												m=a;
												if (m>c){
													cout <<m;
												}
												else {
													m=c;
													cout <<m;
												}
											}
											else{
												m=b;
												if(m>c){
													cout <<m;
												}
												else {
													m=c;
													cout <<m;
												}
											}
										}
	void decimoprimero(){
												int lp=0;
												int t=0;
												cout <<"digite el numero de lapices que desea comprar ";
												cin >> lp;
												if (lp>=1000){
													t=lp*85;
												}
												else {
													(lp<1000);
													t=lp*90;
												}
												cout<<t<<"centavos";
											}									
	void doceavo(){
													float pp=0;
													int p=0;//personas
													float pp1=0;
													float pp2=0;
													float pp3=0;
													p=95.00;
													cout << "digite el numero de personas que iran a La Fragata ";
													cin >>p;
													if (p<200){
														pp1=p*95.00;
														cout <<pp1<<" Dolares";
													if (p<=300, p>200){
														pp2=p*85.00;
														cout <<pp2<< " Dolares";
													}
													}
													if(p>300){
														pp3=p*75.00;
														cout <<pp3<<"Dolares";
													}
												}
    void decimotercero(){
														float a=0;
														float b=0;
														float c=0;
														float d=0;
														float e=0;
														float f=0;
														float x=0;
														float y=0;
														cout <<" digite la primera ecuacion sin variables \n digite el primer numero";
														cin >>a;
														cout <<" digite el segundo numero ";
														cin >> b;
														cout <<" digite el ultimo/tercer numero de la ecuacion ";
														cin >>c;
														cout <<" digite la segundo ecuacion sin variables \n digite el primer numero";
														cin>>d;
														cout <<" digite el segundo numero ";
														cin>>e;
														cout<< "digite el ultimo/tercer numero de la ecuacion ";
														cin>>f;
														x=((c*e-b*f)/(a*e-b*d));
														y=((a*f-c*d)/(a*e-b*d));
														cout <<" x= "<<x;
														cout <<" \n";
														cout << " y= "<<y;
													}
	void decimocuarto(){
															int X=0;
															int r=0;
															cout <<" Digite x ";
															cin >>X;
															r=X*X*X;
															if (r<0){
																cout <<-r;
															}
															else {
																(r>=0);
																cout <<r;
															}
														}
	void decimoquinto(){
																int a=0;
																int b=0;
																int c=0;
																int d=0;
																cout <<"digite su numero de 3 digitos ";
																cin >>a;
																if (a<99){
																	cout <<"***ERROR***";	
																}else {
																	(a<999);
																	cout <<" digite el primer numero de izquierda a derecha ";
																	cin >>b;
																	cout <<" digite el segundo numero de izquierda a derecha ";
																	cin >>c;
																	cout <<" digite el tercer numero de izquierda a derecha ";
																	cin >>d;
																	cout <<" "<<b<<" es la centena de "<<a<< " es decir tiene "<<b<<"centenas \n";
																	cout <<" "<<c<<" es la decena de "<<a<<" es decir tiene "<<c<<"decenas \n";
																	cout <<" "<<d<<" es la unidad de "<<a<< " es decir tiene "<<d<< "unidades \n";
																}
															}
	void decimosexto(){
																	int a=0;
																	int b=0;
																	int c=0;
																	int i=0;
																	int p=0;
																	int o=0;
																	int h=0;
																	int j=0;
																	cout <<" Digite el lado a del triangulo ";
																	cin >>a;
																	cout <<" Digite el lado b del triangulo ";
																	cin >>b;
																	cout<<" Digite el lado c del triangulo ";
																	cin >>c;
																	p=(a+b+c)/2;
																	o=p-a;
																	j=p-b;
																	h=p-c;
																	i=sqrt(p*o*j*h);
																	cout << " el area del triangulo es "<<i;
																	
																}
	void decimoseptimo(){
																		int a=0;
																		int b=0;
																		int c=0;
																		int d=0;
																		cout <<" digite el primer numero ";
																		cin >>a;
																		cout <<" digite el segundo numero ";
																		cin >>b;
																		cout <<" digite el tercero numero ";
																		cin >>c;
																		cout <<" digite el cuarto numero ";
																		cin >>d;
																		if (a<b){
																			if(b<c){
																				if(c<d){
																					cout << " el numero mayor de los cuatro es "<<d;
																				}
																			}
																		}
																		else {
																			(b<=a);
																			if (c<=b){
																				if(d<=c){
																					cout <<" el numero mayo de los cuatro es "<<c;
																				}
																			}
																		}
																		if (a<b){
																			cout << " el numero mayor de los cuatro es "<<b;
																		}
																		else {
																			(b<=a);
																			cout<< " el numero mayo de los cuatro es "<<a;
																		}
																	}
	void decimooctavo(){
																			int c=0;
																			int d=0;
																			int p=0;
																			cout <<" recuerde que el numero de la compra debe ser mayor a 1000 \n";
																			cout <<" digite el numero de la compra ";
																			cin >>c;
																			if (c>1000){
																				d=c*0.10;
																				p=c-d;
																				cout<<" el pago es"<<p;
																			}
																		}
	void decimonoveno(){
																				int c=0;
																				int pd=0;
																				int m=12;
																				int p=0;
																				int t=0;
																				cout<<"digite la capital que desea invertir";
																				cin >>c;
																				p=(2*c)/100;
																				t=p*m;
																				cout << " el total de la ganancia en un año es de "<<t<<"pesos";
																			}
	void vigesimo(){
																					int ar=0;
																					int alto=0;
																					int l=0;
																					int Ta=0;
																					cout <<"digite el alto de la pared ";
																					cin >>alto;
																					cout<<" digite el largo de la pared";
																					cin >>l;
																					ar=l*alto;
																					Ta=ar*0.5;
																					cout <<" la cantidad de arena que el constructor necesita para revocar la pared con es "<<Ta <<"metros cubicos";
																				}
	void vigesimoprimero(){
																			            float e1=0;
																						float e2=0;
																						float e3=0;
																						float t=0;
																						float p1=0;
																						float p2=0;
																						float p3=0;
																						cout <<" digite la nota del primer examen ";
																						cin >> e1;
																						cout <<" digite la nota del segundo examen ";
																						cin >>e2;
																						cout  <<" digite la nota del tercer examen ";
																						cin >>e3;
																						p1=(35*e1)/100;
																						p2=(35*e2)/100;
																						p3=(30*e3)/100;
																						t=(p1+p2+p3)/3;
																						cout <<" su nota final es "<<t;
																						if (t>=3.0){
																							cout <<" Aprobado";
																						}
																						else{
																							(t<3.0);
																							cout <<"Reprobado";
																						}
																					}
																						

	void opciones (){
			if (A==1){
				primero ();
			}
			if (A==2){
				segundo();
			}
			if (A==3){
				tercero();
			}
			if (A==4){
				cuarto();
			}
			if (A==5){
				quinto();
			}
			if (A==6){
				sexto();
			}
			if (A==7){
				septimo();
			}
			if (A==8){
				octavo();
			}
			if (A==9){
				noveno();
			}
			if (A==10){
				decimo();
			}
			if (A==11){
				decimoprimero();
			}
			if (A==12){
				doceavo();
			}
			if (A==13){
				decimotercero();
			}
			if (A==14){
				decimocuarto();
			}
			if (A==15){
				decimoquinto();
			}
			if (A==16){
				decimosexto();
			}
			if (A==17){
				decimoseptimo();
			}
			if (A==18){
				decimooctavo();
			}
			if (A==19){
				decimonoveno();
			}
			if (A==20){
				vigesimo();
			}
			if (A==21){
				vigesimoprimero();
			}
	}
			void repetir (){
				int v=0;
				int n=0;
				int r=0;
				cout <<"\n ¿cuantas veces desea repetir el menu? "; 
				cin >>r;
				while (n<r){
					menu ();
					opciones();
				}
			}
int main (int argc, char *argv[]) {
	menu();
	opciones ();
	repetir ();
}

