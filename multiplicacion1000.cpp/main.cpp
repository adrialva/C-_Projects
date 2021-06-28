#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
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

