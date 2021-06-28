#include<iostream>
#include<stdio.h>
#include<stdbool.h>
using namespace std;
bool Palindroma(string frs);

bool Palindroma(string frs){
	int a=frs.length();
	string another="";
	for (int b=0; b<a;b++){ 
		if (frs[b]!= ' '){
			another + frs [b];
		}
		if(frs[b]!= ','){   //variables de escrituras
			another +frs[b];
		}
	}
	/*frs=another;
	for (int b=0; b<a/2;b++){
		if (frs[b]!= frs[a-b-1]){ return false;
	}else{
		return true;
	}
}*/
}


int main () {
	string frs;
	cout <<" Ingrese la frase ";
	getline (cin,frs);
	if (Palindroma(frs)){
		cout<<" Si es palindroma";
	}
	else{
		cout <<" No es palindroma ";	
		}
	Palindroma(frs);
}
	


