#include<iostream>
using namespace std;

char tabla[9][9];
char segundo[5];
void bdi(){
	int rand1;
	for(char f=0; f<9; f++){
		for (char c=0; c<9;c++){
			rand1=(rand()%26)+65;
			tabla[f][c]=rand1;
		}
	}
}
	void muestra_bdi(){
		for(char f=0; f<9; f++){
			for (char c=0; c<9;c++){
				cout <<tabla[f][c];
				cout <<"\t";
			}
			cout <<endl;
		}
	}
void vocales(){
	for(int i=0; i<5;i++){
		for(char f=0; f<9; f++){
			for (char c=0; c<9;c++){
			}
		}
	}
}
int main (int argc, char *argv[]) {
	bdi();
	muestra_bdi();
	return 0;
}

