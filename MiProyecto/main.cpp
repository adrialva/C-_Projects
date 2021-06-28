#include<iostream>
#include <time.h>
using namespace std;
int b=0;
int tabla[7][5];
char arreglo2[6][6];
char arreglo4[7][7];
char A;
int cl=0;
void menu(){
	cout <<"\n"<<" 			***MENU***\n";
	cout<< "	1. primer arreglo 7x5 entre 13-40 \n";
	cout <<" 	2. ver la media aritmetica del arreglo 7x5 \n ";
	cout <<"	3. ver la suma de todo el arreglo 7x5 \n";
	cout <<" 	4. arreglo con la letra A \n";
	cout << "	5. caracter dado por el usuario \n";
	cout <<"	6. modificar el arreglo 7x7 \n";
	cout <<"	7. mayusculas y minusculas \n";
	cout <<"	8. cambio de mayusculas a minusculas\n ";
	cout <<" 	Digite la opcion que desea ver \n";
	cin>>b;
	
}
	void relleno(){
	int rand1;
	for (int f=0;f<7; f++){
		for(int c=0; c<5;c++){
			rand1=(rand()%27)+13;
			tabla[f][c]=rand1;
		}
	}
}
	void muestra(){
		for (int f=0;f<7; f++){
			for(int c=0; c<5;c++){
				cout<<tabla[f][c];
				cout <<"\t";
			}
			cout<<endl;
		}
	}
	void suma(){
			int  suma=0;
			int rand1=0;
			for (int f=0;f<7; f++){
				for(int c=0; c<5;c++){
					rand1=(rand()%27)+13;
					tabla[f][c]=rand1;
				suma=suma+ tabla [f][c];
				}
			}
			cout <<endl;
			cout << "suma "<<suma;
		}
			
		void porcentaje(){
			double suma=0;
			double rand1=0;
		    double  m=0;
			double sumat=0;
			for (int f=0;f<7; f++){
				for(int c=0; c<5;c++){
					rand1=(rand()%27)+13;
					tabla[f][c]=rand1;
					sumat=sumat+ tabla [f][c];
					
				}
			}
			cout <<endl;
			m=sumat/35;
			cout <<" la media es "<<m;
				}
		void lleno (){
			for (int f=0;f<6; f++){
				for(int c=0; c<6;c++){
					arreglo2 [f][c]='A';
				}
			}
		}
			void segundo (){
				for( int f=0; f<6; f++){
					for (int c=0; c<6; c++){
						cout <<arreglo2[f][c]<<" ";
					}
					cout <<"\n";
			}
			}
			void cambio(){
				char w;
				for (int f=0;f<6; f++){
					for(int c=0; c<6;c++){
						arreglo2 [f][c]=w;
					}
				}
			}
					void cambio2(){
						char w;
						cout <<" Digite el simbolo por el que desea cambiar el arreglo ";
						cin >>w;
						for( int f=0; f<6; f++){
							for (int c=0; c<6; c++){
								cout <<arreglo2[6][6]<<w<<"\t";
					}
							cout<< endl;
						}
					}
						char w;
			void arreglar(){
				for (int f=0;f<7; f++){
					for(int c=0; c<7;c++){
						cout <<"digite el simbolo ";
						cin>>w;
						arreglo2 [f][c]=w;
					}
				}
			}
				void arreglar2(){
					for( int f=0; f<7; f++){
						for (int c=0; c<7; c++){
							cout <<arreglo2[f][c]<<"\t";
						}
						cout<< endl;
					}
				}
					void scaracter(){
					int s=0;
					cout <<"digite el caracter";	
					cin>>s;
					if(s<='a'){
						if(s<='z'){
							
						}
					}
					else{
						if (s>='A'){
							if(s<='Z'){
								cout <<s<<" es mayuscula";
							}
						}
					}
					if(s>=0){
						if(s<=9){
							cout << s<<" lo digitado es un numero";
						}
					}cout <<" es un simbolo";
					
					}
					void cambios(){
						char t;
						char min;
						char mys;
						cout <<"introduzca la letra ";
						cin >>t;
						if(t>='a'){
							if(t<='z'){
								t=t-32;
								cout <<t;
							}
						}
						else{
							if (t>='A'){
								if(t<='Z'){
									t=t+32;
									cout <<t;
								}
							}
						}
						if(t>=0){
							if(t<=9){
								cout << t<<" lo digitado es un numero";
							}
						}cout <<" es un simbolo";
					}
		void opciones(){
			if (b==1){
				relleno();
				muestra();
			}
			if (b==2){
				porcentaje();
			}
			if (b==3){
				suma();
			}
			if (b==4){
				lleno();
				segundo();
			}
			if (b==5){
				cambio();
				cambio2();
			}
			if (b==6){
				arreglar();
				arreglar2();
			}
			if (b==7){
				scaracter();
			}
			if (b==8){
				cambios();
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
						menu ();
						opciones();
				}
				
				}
			}
		int main (int argc, char *argv[]) {
			menu();
			opciones();
			repetir();
		}
		

