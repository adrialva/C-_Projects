#include<iostream>
using namespace std;
char e[27];
char ent[27];
void lim(){
	for (int c=0;  c<27 ;c++){
		e[c]=0;
		ent[c]=0;
	}
}
void minymays(){

	cout <<"introduzca el texto ";
	cin >>ent;
	for (int c=0;  c<27 ;c++){
		if(ent[c]>=65){
			if(ent[c]<=90){
				e[c]=ent[c]+32;
			}
		else{
			if(ent [c]>=97){
				if(ent[c]<=122){
					e[c]=ent[c]-32;
				}
			}
		}
		}
	}
}
	void salida(){
		for (int c=0;  c<27 ;c++){
			cout<<e[c]<<"\t";
		}
	}
int main (int argc, char *argv[]) {

	minymays();
	salida();
	lim();
	return 0;
}

