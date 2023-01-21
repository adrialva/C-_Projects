#include <iostream>
using namespace std;

void Mapa(){
	
	char mapa[11][11];
	char letras=65;
	char num=49;
	
	for(int f=0;f < 11;f++){
		for(int c=0;c < 11;c++){
			if(f == 0){
				if(c == 0){
					mapa[f][c] = 32;
					cout << mapa[f][c] << "\t";
				}
				else{
					mapa[f][c] = letras;
					letras++;
					cout << mapa[f][c] << "\t";
				}
			}
			else{
				if(c == 0){
					if(num == 58){
						mapa[f][c] = 48;
						cout << mapa[f][c] << "\t";
					}
					else{
						mapa[f][c] = num;
						num++;
						cout << mapa[f][c] << "\t";
					}
				}
				else{
					mapa[f][c] = '*';
					cout << mapa[f][c] << "\t";
				}
			}
		}
		cout << "\n";
	}
}
int main(int argc, char *argv[]) {
	Mapa();
	return 0;
}

