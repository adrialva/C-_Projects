#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	void primero(){
		int a=0;
		int b=0;
		int c=0;
		int d=0;
		int z=0;
		int y=0;
		int x=0;
		int j=0;
		cout << "Digite a ";
		cin >>a;
		cout <<"digite b ";
		cin>>b;
		cout <<"digite c ";
		cin>>c;
		cout <<"digite d ";
		cin >> d;
		z=sqrt((a+b)/c^2);
		y=((c*d-2*a)^1/2);
		x=(c+(a/(2a+5b+4)));
		j=(z-(y/x)+4c*d);
		if (j==0){
			cout <<"vuelva a intentarlo ";
		}
		else {
			cout << " el resultado es "<<j;
		}
	}
	
	return 0;
}

