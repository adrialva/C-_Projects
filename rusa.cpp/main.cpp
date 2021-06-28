#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
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


