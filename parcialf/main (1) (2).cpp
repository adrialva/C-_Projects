#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int c=0;
	int b=0;
	int n=0;
	int d=0;
	int s=0;
	int p=0;
	cout<<"pedir numero ";
	cin >>n;
	b=n-1;
	s=0;
	while (d<n){

		while (c<b){
			cout <<" ";
			c=c+1;
		}
		c=0;
		d=d+1;
		b=b-1;
		while(p<=s){
			p=p+1;
			cout<<"*";
		}
		p=0;
		s=s+1;
		cout<<"\n";
	}
	return 0;
}

