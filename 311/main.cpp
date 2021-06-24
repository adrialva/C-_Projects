#include<iostream>
#include<time.h>
using namespace std;
int A=0;
int b=0;
int w=0;
int tabla1[7][6];
int arreglo[5];
int arreglo2[5];
char e[27];
char ent[27];

void bdi(){
	int rand1;
	for(int f=0; f<7; f++){
		for (int c=0; c<6;c++){
			rand1=(rand()%98)+5;
			tabla1[f][c]=rand1;
		}
	}
}
	void muestra_bdi(){
		for(int f=0; f<7; f++){
			for (int c=0; c<6;c++){
				cout <<tabla1[f][c];
				cout <<"\t";
			}
			cout <<endl;
		}
	}
void udi(){
	for (int c=0; c<5;c++){
		cout << "Digite el numero";
		cin >>w;
		arreglo[c]=w;
	}
}
	void udi2(){
		for (int c=0; c<5;c++){
			cout <<arreglo[c]<<"\t";
		}
		cout <<endl;
	}
void arreglos(){
	
}

	void segundo(){
		for(int c=0; c<5; c++){
			for (int f=0; f<7;f++){
				for (int co=0; co<6;co++){
					if (arreglo[co]==tabla1[c][f]){
						arreglo2 [c]++;
					}
				}
			}
		}
	}
		void mostrarsegundo(){
			for (int c=0; c<5;c++){
				cout<<" Hay "<<arreglo[c]<<" numeros "<<arreglo2[c] <<"\n";
			}
		}
		void cantidad(){
			int d=0;
			int e=0;
			int f=0;
			int g=0;
			int h=0;
			for (int f=0; f<7; f++){
				for (int c=0; c<6;c++){
					if (arreglo[0]==tabla1[f][c]){
						d++;
					}
					if(arreglo[1]==tabla1[f][c]){
						e++;
					}
					if(arreglo[2]==tabla1[f][c]){
						f++;
					}
					if(arreglo[3]==tabla1[f][c]){
						g++;
					}
					if(arreglo[4]==tabla1[f][c]){
						h++;
					}
				}
			}
			cout <<endl<<d<<" numeros "<< arreglo[0]<< " del unidimensional en el bidimensional"; 
			cout <<endl<<e<<" numeros "<< arreglo[1]<< " del unidimensional en el bidimensional"; 
			cout <<endl<<f<<" numeros "<< arreglo[2]<< " del unidimensional en el bidimensional"; 
			cout <<endl<<g<<" numeros "<< arreglo[3]<< " del unidimensional en el bidimensional"; 
			cout <<endl<<h<<" numeros "<< arreglo[4]<< " del unidimensional en el bidimensional\n"; 
		}
			void ultimo(){
				int d=0;
					for (int f=0; f<7; f++){
						for (int c=0; c<6;c++){
							for (int c=0; c<5;c++){
							if(arreglo[c]==tabla1[f][c]){
								d++;
								
							}
						}
						}
				}
			}

				void lim(){
					for (int c=0;  c<27 ;c++){
						e[c]=0;
						ent[c]=0;
					}
				}
					void minymays(){
						cout <<"introduzca el texto ";
						cin >>ent;
						for (int c=0;  c<27 ;c++){
							if(ent[c]>=65){
								if(ent[c]<=90){
									e[c]=ent[c]+32;
								}
								else{
									if(ent [c]>=97){
										if(ent[c]<=122){
											e[c]=ent[c]-32;
										}
									}
								}
							}
						}
					}
						void salida(){
							for (int c=0;  c<27 ;c++){
								cout<<e[c]<<"\t";
							}
						}
	void repetir (){
		int v=0;
		int n=0;
		int r=0;
		int k=0;
		cout <<"\n	¿desea repetir el menu?\n";
		cout<< "		1 = si \n";
		cout <<"		2 = no\n";
		cin >>k;
		if (k==1){
			cout <<"\n ¿cuantas veces desea repetir el menu? "; 
			cin >>r;
			while (n<r){
				n++;
				bdi();
				muestra_bdi();
				udi();
				udi2();
				cantidad();
			}
			
		}
	}
int main (int argc, char *argv[]) {
	bdi();
	muestra_bdi();
	udi();
	udi2();
	cantidad();
	segundo();
	mostrarsegundo();
	ultimo();
	lim();
	minymays();
	salida();
	repetir();
	return 0;
}

