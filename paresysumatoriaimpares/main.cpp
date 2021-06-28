#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int c=0;
	int a=0;
	int d=0;
	int y=0;
	int pares=0;
	cout <<"Digite el primer numero";
	cin >>c;
	cout <<"Digite el segundo numero";
	cin >>a;
	if (c>=a){
		cout <<"Error";
		return 0;
	}
	else{
		(c<a);
		while(c<=a){
			d=c%2;
			if(d!=0){
				y=y+c;
				c=c+1;
			}
			else{
				pares=pares+1;
				c=c+1;
			}
			
		}
		cout << "la suma de los impares es" <<y;
	}
	return 0;
}

