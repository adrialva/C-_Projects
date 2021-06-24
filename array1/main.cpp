#include<iostream>
using namespace std;
char arreglo2[6][6];

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
int main (int argc, char *argv[]) {
	lleno();
	segundo();
	return 0;
}

