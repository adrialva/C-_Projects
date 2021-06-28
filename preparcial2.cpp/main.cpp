#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int A=0;
void menu (){
	cout <<"   ***MENU*** \n";
	cout << " 1. suma b mayor que a \n";
	cout << " 2. sucecion Fibonacci \n";
	cout <<" 3. Promedio de 30 alumnos \n";
	cout <<" 4. Ahorro en un año \n";
	cout <<" 5. Ahorros diferentes \n";
	cout << " 6. Caja registradora\n"; 
	cout <<" 7. Sucesion de Fibonacci (repetido) \n";
	cout << " 8. Piramide mayor a menor \n";
	cout << " 9. Bogota-Girardot\n";
	cout << " 10. Bandera\n";
	cout<< " 11. Club Pilos\n";
	cout <<" 12. Numero primo o no \n";
	cout <<" 13. hallar MCM dos numeros \n";
	cout <<" 14. Digitos por numero \n";
	cout <<" 15. Dato de 10-15\n";
	cout << " 16. piramide de mayor a menor(repetido) \n";
	cout << " 17. Piramide de menor a mayor \n";
	cout <<" 18. piramide de mayor a menor alineado a la izquierda\n";
	cout << " 19. Menu\n";
	cout << "Digite el programa que desea realizar \n";
	cin >> A;
}

	void primero (){
		int a=0;
		int b=0;
		int k=0;
		int m=0;
		cout <<"Digite a \n";
		cin >>a;
		cout << "Digite b \n";
		cin >>b;
		if (b<=a){
			cout <<"***ERROR***";
		}
		k=a;
		m= (((k*k*k)+(k^k))/k-5);
		cout <<m;
	}
	void segundo (){
		int a=0;
		int b=1;
		int c=0;
		int n=0;
		cout <<" La sucesionde Fibonacci: \n";
		cout <<a<<"\n";
		while(n<=4){
			c=a+b;
			a=c;
			cout <<b<<"\n";
			b=b+c;
			cout <<c<<"\n";
			n=n+1;
		}
	}
	void tercero(){
		float a=15;
		float e=0;
		float c=0;
		float d=0;
		int n=0;
		while(n<30){
			cout <<"Digite la edad del estudiante ";
			cin >>e;
			c=e+e;
			n=n+1;
			d=c/a;
		}
		cout<<"La edad promedio es "<<d;
		}
	void cuarto(){
		float a=0;
		float m=0;
		float b=0;
		float t=0;
		float n=0;
		
		while (n<12){
		cout <<" Digite la cantidad de dinero que ingreso este mes: ";
		cin >>m;
		a=m+m;
		b=a/12;
		n=n+1;
		
		}
		n=11;
		cout <<b;
	}
	void quinto(){
	int a=0;
	int b=3;
	int m=0;
	float c=0;
	cout <<"digite el mes que desea saber ";
	cin >>m;
	if (m==04){
	while(a<30){
		b=b*3;
		cout <<b<<"\n";
		c=b+b;
		
		a=a+1;
	}
	cout <<c<<"pesos";
	}
	if (m==06){
		while(a<30){
			b=b*3;
			a=a+1;
		}
		cout <<b<<" Pesos";
	}
	if(m==9){
		while(a<30){
			b=b*3;
			a=a+1;
		}
	}
	if (m==11){
		while(a<30){
			b=b*3;
			a=a+1;
		}
	}
	}
	void sexto (){
		float t=0;
		float st=0;
		float p=0;
		float I=0;
		float i=1;
		cout <<" Ingrese el precio del producto ";
		cin >>p;
		st=st+p;
		I=st*0.19;
		t=st+I;
		cout <<" sub total -- " << st <<"\n";
		cout << " IVA -- "<< I<< "\n";
		cout <<" total -- "<< t << "\n";
	}
	void septimo(){
		int a=0;
		int b=1;
		int c=0;
		int n=0;
		cout <<" La sucesionde Fibonacci: \n";
		cout <<a<<"\n";
		while(n<=4){
			c=a+b;
			a=c;
			cout <<b<<"\n";
			b=b+c;
			cout <<c<<"\n";
			n=n+1;
		}
	}
	void octavo(){
		int c=0;
		int b=0;
		int n=0;
		int d=0;
		int s=0;
		int p=0;
		cout<<"pedir numero ";
		cin >>n;
		b=n-1;
		s=0;
		while (d<=n){
			while(p<=s){
				p=p+1;
				cout<<" ";
			}
			p=0;
			s=s+1;
			while (c<b){
				cout <<"*";
				c=c+1;
				
			}
			c=0;
			d=d+1;
			b=b-1;
			
			cout<<"\n";
		}
	}
	void noveno(){
		
	}
	void decimo(){
		int i=0;
		int n=0;
		bool band;
		float serie=0;
		cin >>n;
		band =true;
		serie =0.0;
		if (band){
			serie=serie +(1/i);
			band=false;
		}
		else {
			serie=serie -(1/i);
			band= true;
		}
		cin>> serie;
		
	}
	void decimoprimero(){
		int a=0;
		int b=0;
		int c=0;
		int t=0;
		while (c==0){
			cout <<"digite la cantidad de candidatos ";
			cin >>t;
			cout <<"digite el numero del candidato ";
			cin >>b;
		cout <<"digite el puntaje ";
		cin >> a;
		
			if (a>=75){
				cout << " el puntaje del candidato "<<b<<"es: "<<a<<"\n";
				cout << "  el candidato ha aprobado el test";
			}
			else {
				
				cout << " el puntaje del candidato "<<b<<"es: "<<a<<"\n";
				cout << "  el candidato ha reprobado el test";
				c=c+1;
			}
		}		
	}
	void decimosegundo(){
		
	}
	void decimotercero(){
		int N1=0;
		int N2=0;
		int p=0;
		int mcd=0;
		int mcm=0;
		int m=0;
		int mn=0;
		cout <<"Digite el primer numero ";
		cin >>N1;
		cout <<"Digite el segundo numero ";
		cin >>N2;
		m=N1%N2;
		p=mcm%2;
		mn=(mcm/2)%N1;
		if (m==0){
			if(N1>N2){
				mcm =N1;
				cout<<mcm;
			}else{
				mcm=N2;
				cout <<mcm;
			}
		}
		else {
			mcm=N1*N2;
			if (p==0){
				if (mn==0) {
					mcm=mcm/2;
					cout <<mcm;
				}
				else{
					cout <<mcm;
				}
			}
			else {
				cout <<mcm;
			}
		} 
	}
	void decimocuarto(){
		
	}
	void decimoquinto(){
		int dat=0;
		int c=0;
		float media=0;
		float s=0;
		int a=0;
		cout <<"Para finalizar el programa escriba 0 \n";
		while (s<=0){
			cout <<" leer dato \n";
			cin>>dat;
			if (dat!=0){
				c=c+1;
				s=s+dat;
				cout <<" "<<s;
			}
		
		cout<<"calcular la media ";
		cin >>a;
		if (c>0){
			c=c+1;
			media=a/c;
			cout <<" la media es "<<media;
			
		}
		}
	}
	void decimosexto(){
		int c=0;
		int b=0;
		int n=0;
		int d=0;
		int s=0;
		int p=0;
		cout<<"pedir numero ";
		cin >>n;
		b=n-1;
		s=0;
		while (d<=n){
			while(p<=s){
				p=p+1;
				cout<<" ";
			}
			p=0;
			s=s+1;
			while (c<b){
				cout <<"*";
				c=c+1;
				
			}
			c=0;
			d=d+1;
			b=b-1;
			
			cout<<"\n";
		}
	}
	void decimoseptimo(){
		int c=0;
		int b=0;
		int n=0;
		int d=0;
		int s=0;
		int p=0;
		cout<<"pedir numero ";
		cin >>n;
		b=n-1;
		s=0;
		while (d<n){
			
			while (c<b){
				cout <<" ";
				c=c+1;
				
			}
			c=0;
			d=d+1;
			b=b-1;
			while(p<=s){
				p=p+1;
				cout<<"*";
			}
			p=0;
			s=s+1;
			cout<<"\n";
		}
	}
	void decimooctavo(){
		int d=0;
		int c=0;
		int n=0;
		int b=0;
		cout<< "pedir numero ";
		cin>>n;
		b=n;
		while (d!=n){
			while (c<=b){
				if (c>b){
					c=c+1;
				}
				else{
					(c!=b);
					cout <<"*";
					c=c+1;
				}
			}
			
			cout <<"\n";
			c=0;
			b=b-1;
			d=d+1;
		}
		cout <<"*";
	}
	void decimonoveno(){
		
	}
void opciones(){
	if (A==1){
		primero();
	}
	if (A==2){
		segundo();
	}
	if (A==3){
		tercero ();
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
		decimosegundo();
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
}
int main (int argc, char *argv[]) {
	menu ();

	opciones ();
	return 0;
}

