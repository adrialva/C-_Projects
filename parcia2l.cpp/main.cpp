#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int a=0;
	int o1=0;
	cout<<"vamos a escoger un ejercicio";
	cout<<"\n";
	cout <<"opcion 1: Triangulo mayor a menor alineado a la izquierda";
	cout<<"\n";
	cout << "opcion 2: Año bisiesto";
	cout<<"\n";
    cout << "opcion 3: operacion Rusa";
	cout<<"\n";
	cout <<"opcion 4: Pares entre los numeros y suma de impares";
	cout<<"\n";
	cout<<"opcion 5: multiplicacion hasta 1000";
	cout<<"\n";
	cout<<"  digite su ejercicio seleccionado ";
	cin >>a;
	cout<<"\n";
	if( a==1){
		cout<<" su ejercicio es : "<<"\n"<<"  triangulo mayor a menor alineado a la izquierda"<<"\n";
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
					cout <<"A";
					c=c+1;
				}
			}
			
			cout <<"\n";
			c=0;
			b=b-1;
			d=d+1;
		}
		cout <<"A";
	}
	if (a==2){
		cout <<" Su ejercicio es: "<<"\n"<<"   el año bisiesto"<<"\n";
		int a=0;
		cout<< "Digite un año ";
		cin >>a;
		if (a%4==0){
			cout<<"Es bisiesto";
		}
		else {
			(a%4!=0);
			if (a%400==0){
				cout<<"Es bisiesto";
			}
			else{
				a%400!=0;
				if (a%100!=0){
					cout <<"Es bisiesto";
				}
				else{
					a%100==0;
					cout<<"No es bisiesto";
				}
			}
		}
		return 0;
	}
	if (a==3){
		cout <<" Su ejercicio es: "<<"\n"<<"  la operacion rusa"<<"\n";
		int a=0;
		int b=0;
		int d=0;
		int f=0;
		
		cout<<" Digite un numero ";
		cin >>a;
		if (a<=0){
			cout << "El reultado de la operacion es 0 ";
		}
		else{
			(a>0);
			cout<< "Digite otro numero ";
			cin >>b;
			
			while (a!=0){
				f=a%2;
				if (f!=0){
					d=d+b;
					a=a/2;
					b=b*2;
				}else{
					a=a/2;
					b=b*2;
				}
			}
		}
		cout <<"el resultado es "<<d; 
	}
	if (a==4){
		cout <<" Su ejercicio es:"<<"\n"<<"  operacion es pares entre los numeros y la suma de impares"<<"\n";
		int c=0;
		int a=0;
		int pares=0;
		int y=0;
		int d=0;
		int sp=0;
		cout<<" Digite el primer numero";
		cin >> c;
		cout <<" Digite el segundo numero";
		cin >>a;
		if (c>=a){
			cout <<"Error";
			return 0;
		}
		else{
			(c<a);
			if(c<=a){
				while(c<=a){
					cout << c<< " ";
					(d=c%2);
					if(d==0){
						pares=pares+1;
						c=c+1;
						sp=a+a;
					}
					else {
						(d!=0);
						(y=y+c);
						(c=c+1);
					}
				}
				cout <<pares<<"\n";
				cout<<sp<<"\n";
			}
		}
		return 0;
	}
	if (a==5){
		cout<<" Su ejercicio es:"<<"\n"<<"  multiplicacion hasta 1000"<<"\n";
		int b=1000;
		int c=0;
		int a=0;
		int d=0;
		cout << "Escriba el numero que desea multiplicar";
		cin >>a;
		while (c!=b){
			d=a*c;
			cout <<a<<"x"<<c<<"="<<d;
			c=c+1;
		}
		return 0;
	}
	return 0;
}

