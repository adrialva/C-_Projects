#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int a=0;
	int b=0;
	int c=0;
	int x=0;
	int disc=0;
	int x1=0;
	int x2=0;
	cout<<"Ingrese el coeficiente a";
	cin >>a;
	if (a==0){
		return 0;
	}
	cout <<"Ingrese el coeficiente b";
	cin>>b;
	cout <<"Ingrese el coeficiente c ";
	cin >>c;
	disc=b*2 -4*a*c;
	if (disc <0){
		cout <<"La ecuacion no tiene soluciones reales";
		return 0;
	}
	if(disc==0){
		x=-b/2*a;
		cout <<"la solucion unica es "<<x;
		return 0;
	}
	if (disc>0){
		cout <<x1=(-b-(disc)^1/2)/2*a;
		cout<<x2=(-b+(disc)^1/2)/2*a;
		cout<< "las dos soluciones reales son";
		cout <<"x1"<<"x2";
		return 0;
	}
	return 0;
}

