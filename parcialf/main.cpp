#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n=0;//numero dado
	int a=0;//contador final restador
	int b=0;//acont
	int c=0;//bccont
	int d=0;//ccont
	cout <<" Digite un numero ";
	cin>>n;
	a=n;
	while (c<=n){
		b=0;
		c=0;
		while(b<a){
			cout <<" ";
			b=b+1;
		}
		while(c<=d){
			cout <<"*"<<" ";
			c=c+1;
		}
		cout<< "\n";
		d=d+1;
		a=a-1;
	}
	return 0;
}
