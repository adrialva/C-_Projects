#include <iostream>
#include <time.h>
using namespace std;

int p=0;
int x;
int y;
int by;
int bx;
char r;
int deci[2];
int barco2[4];
int barco3[6];
int barco4[8];
int barco5[10];
char mapa[13][13];
bool a;
bool bu = false;

void Mapa(){
	char letras=65;
	char num=49;
	int n2=48;
	
	for(int f=0;f < 13;f++){
		for(int c=0;c < 13;c++){
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
					if(num >= 58){
						mapa[f][c] = 49;
						cout << mapa[f][c];
						mapa[f][c] = n2;
						cout << mapa[f][c] << "\t";
						n2++;
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

void Paso_ln(){
	if(r == 97){
		bx = 1;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 98){
		bx = 2;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 99){
		bx = 3;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1]<< "\n";
	}
	if(r == 100){
		bx = 4;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 101){
		bx = 5;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 102){
		bx = 6;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 103){
		bx = 7;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 104){
		bx = 8;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 105){
		bx = 9;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 106){
		bx = 10;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 107){
		bx = 11;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
	if(r == 108){
		bx = 12;
		deci[0] = by;
		deci[1] = bx;
		cout << deci[0] << "\t" << deci[1] << "\n";
	}
}

void Opciones2(){
	int a1;
	int a2;
	int b1;
	int b2;
	int opcion;
	
	a1 = x;
	b1 = y;
	a2 = x;
	b2 = y;
	
	a1 = a1 + 1;
	b1 = b1 + 1;
	a2 = a2 - 1;
	b2 = b2 - 1;
	
	opcion = rand()%4+1;
	
	if(opcion == 1){
		barco2[p] = y;
		cout << barco2[p] << "\t";
		p++;
		barco2[p] = a1;
		cout << barco2[p] << "\t";
	}
	if(opcion == 2){
		barco2[p] = b1;
		cout << barco2[p] << "\t";
		p++;
		barco2[p] = x;
		cout << barco2[p] << "\t";
	}
	if(opcion == 3){
		barco2[p] = y;
		cout << barco2[p] << "\t";
		p++;
		barco2[p] = a2;
		cout << barco2[p] << "\t";
	}
	if(opcion == 4){
		barco2[p] = b2;
		cout << barco2[p] << "\t";
		p++;
		barco2[p] = x;
		cout << barco2[p] << "\t";
	}
}
	
void Opciones3(){
	int a1;
	int a2;
	int b1;
	int b2;
	int opcion;
	
	a1 = x;
	b1 = y;
	a2 = x;
	b2 = y;
	
	a1 = a1 + 1;
	b1 = b1 + 1;
	a2 = a2 - 1;
	b2 = b2 - 1;
	
	opcion = rand()%4+1;
	
	if(opcion == 1){
		barco3[p] = y;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = a1;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = y;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = a1 + 1;
		cout << barco3[p] << "\t";
	}
	if(opcion == 2){
		barco3[p] = b1;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = x;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = b1 + 1;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = x;
		cout << barco3[p] << "\t";
	}
	if(opcion == 3){
		barco3[p] = y;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = a2;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = y;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = a2 - 1;
		cout << barco3[p] << "\t";
	}
	if(opcion == 4){
		barco3[p] = b2;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = x;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = b2 - 1;
		cout << barco3[p] << "\t";
		p++;
		barco3[p] = x;
		cout << barco3[p] << "\t";
	}
}
	
void Opciones4(){
	int a1;
	int a2;
	int b1;
	int b2;
	int opcion;
	
	a1 = x;
	b1 = y;
	a2 = x;
	b2 = y;
	
	a1 = a1 + 1;
	b1 = b1 + 1;
	a2 = a2 - 1;
	b2 = b2 - 1;
	
	opcion = rand()%4+1;
	
	if(opcion == 1){
		barco4[p] = y;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = a1;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = y;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = a1 + 1;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = y;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = a1 + 2;
		cout << barco4[p] << "\t";
	}
	if(opcion == 2){
		barco4[p] = b1;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = x;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = b1 + 1;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = x;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = b1 + 2;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = x;
		cout << barco4[p] << "\t";
	}
	if(opcion == 3){
		barco4[p] = y;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = a2;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = y;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = a2 - 1;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = y;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = a2 - 2;
		cout << barco4[p] << "\t";
	}
	if(opcion == 4){
		barco4[p] = b2;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = x;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = b2 - 1;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = x;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = b2 - 2;
		cout << barco4[p] << "\t";
		p++;
		barco4[p] = x;
		cout << barco4[p] << "\t";
	}
}
	
void Opciones5(){
	int a1;
	int a2;
	int b1;
	int b2;
	int opcion;
	
	a1 = x;
	b1 = y;
	a2 = x;
	b2 = y;
	
	a1 = a1 + 1;
	b1 = b1 + 1;
	a2 = a2 - 1;
	b2 = b2 - 1;
	
	opcion = rand()%4+1;
	
	if(opcion == 1){
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a1;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a1 + 1;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a1 + 2;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a1 + 3;
		cout << barco5[p] << "\t";
	}
	if(opcion == 2){
		barco5[p] = b1;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = b1 + 1;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = b1 + 2;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = b1 + 3;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
	}
	if(opcion == 3){
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a2;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a2 - 1;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a2 - 2;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = y;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = a2 - 3;
		cout << barco5[p] << "\t";
	}
	if(opcion == 4){
		barco5[p] = b2;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = b2 - 1;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = b2 - 2;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = b2 - 3;
		cout << barco5[p] << "\t";
		p++;
		barco5[p] = x;
		cout << barco5[p] << "\t";
	}
}
	
void Repite3(){
	for(int s=0;s < 6;){
		for(int u=0;u < 4;){
			if(barco3[s] == barco2[u]){
				s++;
				u++;
				if(barco3[s] == barco2[u]){
					a = false;
					u = 5;
					s = 7;
				}
				else{
					s--;
					u++;
					if(barco3[s] == barco2[u]){
						s++;
						u++;
						if(barco3[s] == barco2[u]){
							a = false;
							u = 5;
							s = 7;
						}
					}
				}
			}
			else{
				s = s + 2;
				if(s == 6){
					a = true;
					u = 4;
				}
			}
		}
	}
}
	
void Repite4(){
	for(int s=0;s < 8;){
		for(int u=0;u < 6;){
			if(barco4[s] == barco3[u]){
				s++;
				u++;
				if(barco4[s] == barco3[u]){
					a = false;
					u = 7;
					s = 9;
				}
				else{
					s--;
					u++;
					if(barco4[s] == barco3[u]){
						s++;
						u++;
						if(barco4[s] == barco3[u]){
							a = false;
							u = 7;
							s = 9;
						}
						else{
							s--;
							u++;
							if(barco4[s] == barco3[u]){
								s++;
								u++;
								if(barco4[s] == barco3[u]){
									a = false;
									u = 7;
									s = 9;
								}
							}
						}
					}
				}
			}
			else{
				s = s + 2;
				if(s == 8){
					a = true;
					u = 6;
				}
			}
		}
	}
}
	
void Repite5(){
	for(int s=0;s < 10;){
		for(int u=0;u < 8;){
			if(barco5[s] == barco4[u]){
				s++;
				u++;
				if(barco5[s] == barco4[u]){
					a = false;
					u = 9;
					s = 11;
				}
				else{
					s--;
					u++;
					if(barco5[s] == barco4[u]){
						s++;
						u++;
						if(barco5[s] == barco4[u]){
							a = false;
							u = 9;
							s = 11;
						}
						else{
							s--;
							u++;
							if(barco5[s] == barco4[u]){
								s++;
								u++;
								if(barco5[s] == barco4[u]){
									a = false;
									u = 9;
									s = 11;
								}
								else{
									s--;
									u++;
									if(barco5[s] == barco4[u]){
										s++;
										u++;
										if(barco5[s] == barco4[u]){
											a = false;
											u = 9;
											s = 11;
										}
									}
								}
							}
						}
					}
				}
			}
			else{
				s = s + 2;
				if(s == 10){
					a = true;
					u = 8;
				}
			}
		}
	}
}

void Barcos_comp(){
	
	for(int b=2;b < 6;b++){		
		if(b == 2){
			x = rand()%10+2;
			y = rand()%10+2;
			cout << "Barco 2\n";
			barco2[p] = y;
			cout << barco2[p] << "\t";
			p++;
			barco2[p] = x;
			cout << barco2[p] << "\t";
			p++;		
			Opciones2();
		}
		if(b == 3){
			while(a == false){
				x = rand()%8+3;
				y = rand()%8+3;
				p=0;
				cout << "\nBarco 3\n";
				barco3[p] = y;
				cout << barco3[p] << "\t";
				p++;
				barco3[p] = x;
				cout << barco3[p] << "\t";
				p++;
				Opciones3();
				Repite3();
			}
		}
		if(b == 4){
			while(a == false){
				x = rand()%6+4;
				y = rand()%6+4;
				p=0;
				cout << "\nBarco 4\n";
				barco4[p] = y;
				cout << barco4[p] << "\t";
				p++;
				barco4[p] = x;
				cout << barco4[p] << "\t";
				p++;
				Opciones4();
				Repite4();
			}
		}
		if(b == 5){
			while(a == false){
				x = rand()%4+5;
				y = rand()%4+5;
				p=0;
				cout << "\nBarco 5\n";
				barco5[p] = y;
				cout << barco5[p] << "\t";
				p++;
				barco5[p] = x;
				cout << barco5[p] << "\t";
				p++;
				Opciones5();
				Repite5();
			}
		}
		a = false;
	}
}
	
void Desicion(){
	bool m = false;
	bool z = false;
	
	while(m == false){
		cout << "Digite donde va a lanzar\n";
		cout << "Digite número\n";
		cin >> by;
		
		if(by < 1){
			m = true;
		}
		else{
			if(by > 12){
				m = true;
			}
			else{
				while(z == false){
					
					cout << "\nDigite la letra en minuscula\n";
					cin >> r;
					
					if(r < 97){
						z = false;
					}
					else{
						if(r > 108){
							z = false;
						}
						else{
							z = true;
						}
					}
				}
				m = true;
			}
		}
	}
	Paso_ln();
}

void Indi2(){
	for(int v=0;v < 2;){
		for(int w=0;w < 4;){
			if(deci[v] == barco2[w]){
				v++;
				w++;
				if(deci[v] == barco2[w]){
					cout << "IMPACTO\n";
					mapa[deci[0]][deci[1]] = 'X';
					barco2[0] = 0;
					barco2[1] = 0;
					v = 3;
					w = 5;
				}
			}
			else{
				v = 0;
				w = 2;
				if(deci[v] == barco2[w]){
					v++;
					w++;
					if(deci[v] == barco2[w]){
						cout << "IMPACTO\n";
						mapa[deci[0]][deci[1]] = 'X';
						barco2[2] = 0;
						barco2[3] = 0;
						v = 3;
						w = 5;
					}
				}
			}
		}
	}
}

void Indi3(){
	for(int v=0;v < 2;){
		for(int w=0;w < 6;){
			if(deci[v] == barco3[w]){
				v++;
				w++;
				if(deci[v] == barco3[w]){
					cout << "IMPACTO\n";
					mapa[deci[0]][deci[1]] = 'X';
					barco3[0] = 0;
					barco3[1] = 0;
					v = 3;
					w = 7;
				}
			}
			else{
				v = 0;
				w = 2;
				if(deci[v] == barco3[w]){
					v++;
					w++;
					if(deci[v] == barco3[w]){
						cout << "IMPACTO\n";
						mapa[deci[0]][deci[1]] = 'X';
						barco3[2] = 0;
						barco3[3] = 0;
						v = 3;
						w = 7;
					}
				}
				else{
					v = 0;
					w = 4;
					if(deci[v] == barco3[w]){
						v++;
						w++;
						if(deci[v] == barco3[w]){
							cout << "IMPACTO\n";
							mapa[deci[0]][deci[1]] = 'X';
							barco3[4] = 0;
							barco3[5] = 0;
							v = 3;
							w = 7;
						}
					}
				}
			}
		}
	}
}

void Indi4(){
	for(int v=0;v < 2;){
		for(int w=0;w < 8;){
			if(deci[v] == barco4[w]){
				v++;
				w++;
				if(deci[v] == barco4[w]){
					cout << "IMPACTO\n";
					mapa[deci[0]][deci[1]] = 'X';
					barco4[0] = 0;
					barco4[1] = 0;
					v = 3;
					w = 9;
				}
			}
			else{
				v = 0;
				w = 2;
				if(deci[v] == barco4[w]){
					v++;
					w++;
					if(deci[v] == barco4[w]){
						cout << "IMPACTO\n";
						mapa[deci[0]][deci[1]] = 'X';
						barco4[2] = 0;
						barco4[3] = 0;
						v = 3;
						w = 9;
					}
				}
				else{
					v = 0;
					w = 4;
					if(deci[v] == barco4[w]){
						v++;
						w++;
						if(deci[v] == barco4[w]){
							cout << "IMPACTO\n";
							mapa[deci[0]][deci[1]] = 'X';
							barco4[4] = 0;
							barco4[5] = 0;
							v = 3;
							w = 9;
						}
					}
					else{
						v = 0;
						w = 6;
						if(deci[v] == barco4[w]){
							v++;
							w++;
							if(deci[v] == barco4[w]){
								cout << "IMPACTO\n";
								mapa[deci[0]][deci[1]] = 'X';
								barco4[6] = 0;
								barco4[7] = 0;
								v = 3;
								w = 9;
							}
						}
					}
				}
			}
		}
	}
}
	
void Indi5(){
	for(int v=0;v < 2;){
		for(int w=0;w < 10;){
			if(deci[v] == barco5[w]){
				v++;
				w++;
				if(deci[v] == barco5[w]){
					cout << "IMPACTO\n";
					mapa[deci[0]][deci[1]] = 'X';
					barco5[0] = 0;
					barco5[1] = 0;
					v = 3;
					w = 11;
				}
			}
			else{
				v = 0;
				w = 2;
				if(deci[v] == barco5[w]){
					v++;
					w++;
					if(deci[v] == barco5[w]){
						cout << "IMPACTO\n";
						mapa[deci[0]][deci[1]] = 'X';
						barco5[2] = 0;
						barco5[3] = 0;
						v = 3;
						w = 11;
					}
				}
				else{
					v = 0;
					w = 4;
					if(deci[v] == barco5[w]){
						v++;
						w++;
						if(deci[v] == barco5[w]){
							cout << "IMPACTO\n";
							mapa[deci[0]][deci[1]] = 'X';
							barco5[4] = 0;
							barco5[5] = 0;
							v = 3;
							w = 11;
						}
					}
					else{
						v = 0;
						w = 6;
						if(deci[v] == barco5[w]){
							v++;
							w++;
							if(deci[v] == barco5[w]){
								cout << "IMPACTO\n";
								mapa[deci[0]][deci[1]] = 'X';
								barco5[6] = 0;
								barco5[7] = 0;
								v = 3;
								w = 11;
							}
						}
						else{
							v = 0;
							w = 8;
							if(deci[v] == barco5[w]){
								v++;
								w++;
								if(deci[v] == barco5[w]){
									cout << "IMPACTO\n";
									mapa[deci[0]][deci[1]] = 'X';
									barco5[8] = 0;
									barco5[9] = 0;
									v = 3;
									w = 11;
								}
							}
						}
					}
				}
			}
		}
	}
	
}

void Fallo(){
	cout << "FALLO\n";
	mapa[deci[0]][deci[1]] = 'F';
}
void Mostrar_mapa(){
	char letras=65;
	char num=49;
	int n2=48;
	
	for(int f=0;f < 13;f++){
		for(int c=0;c < 13;c++){
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
					if(num >= 58){
						mapa[f][c] = 49;
						cout << mapa[f][c];
						mapa[f][c] = n2;
						cout << mapa[f][c] << "\t";
						n2++;
					}
					else{
						mapa[f][c] = num;
						num++;
						cout << mapa[f][c] << "\t";
					}
				}
				else{
					cout << mapa[f][c] << "\t";
				}
			}
		}
		cout << "\n";
	}
}
	
void Barco_u2(){
	if(barco2[1] == 0){
		if(barco2[3] == 0){
			cout << "BARCO 2 UNDIDO\n";
		}
	}
}
	
void Barco_u3(){
	if(barco3[1] == 0){
		if(barco3[3] == 0){
			if(barco3[5] == 0){
				cout << "BARCO 3 UNDIDO\n";
			}
		}
	}
}
	
void Barco_u4(){
	if(barco4[1] == 0){
		if(barco4[3] == 0){
			if(barco4[5] == 0){
				if(barco4[7] == 0){
					cout << "BARCO 4 UNDIDO\n";
				}
			}
		}
	}
}
	
void Barco_u5(){
	if(barco5[1] == 0){
		if(barco5[3] == 0){
			if(barco5[5] == 0){
				if(barco5[7] == 0){
					if(barco5[9] == 0){
						cout << "BARCO 5 UNDIDO\n";
					}
				}
			}
		}
	}
	
}
void Fin(){
	if(barco2[0] == 0){
		if(barco2[2] == 0){
			if(barco3[0] == 0){
				if(barco3[2] == 0){
					if(barco3[4] == 0){
						if(barco3[0] == 0){
							if(barco4[0] == 0){
								if(barco4[2] == 0){
									if(barco4[4] == 0){
										if(barco4[6] == 0){
											if(barco5[0] == 0){
												if(barco5[2] == 0){
													if(barco5[4] == 0){
														if(barco5[6] == 0){
															if(barco5[8] == 0){
																bu = true;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void Compara(){
	while(bu == false){
		Desicion();
		if(deci[0] == barco2[0]){
			if(deci[1] == barco2[1]){
				Indi2();
			}
			else{
				Fallo();
			}
		}
		else{
			if(deci[0] == barco2[2]){
				if(deci[1] == barco2[3]){
					Indi2();
				}
				else{
					Fallo();
				}
			}
			else{
				if(deci[0] == barco3[0]){
					if(deci[1] == barco3[1]){
						Indi3();
					}
					else{
						Fallo();
					}
				}
				else{
					if(deci[0] == barco3[2]){
						if(deci[1] == barco3[3]){
							Indi3();
						}
						else{
							Fallo();
						}
					}
					else{
						if(deci[0] == barco3[4]){
							if(deci[1] == barco3[5]){
								Indi3();
							}
							else{
								Fallo();
							}
						}
						else{
							if(deci[0] == barco4[0]){
								if(deci[1] == barco4[1]){
									Indi4();
								}
								else{
									Fallo();
								}
							}
							else{
								if(deci[0] == barco4[2]){
									if(deci[1] == barco4[3]){
										Indi4();
									}
									else{
										Fallo();
									}
								}
								else{
									if(deci[0] == barco4[4]){
										if(deci[1] == barco4[5]){
											Indi4();
										}
										else{
											Fallo();
										}
									}
									else{
										if(deci[0] == barco4[6]){
											if(deci[1] == barco4[7]){
												Indi4();
											}
											else{
												Fallo();
											}
										}
										else{
											if(deci[0] == barco5[0]){
												if(deci[1] == barco5[1]){
													Indi5();
												}
												else{
													Fallo();
												}
											}
											else{
												if(deci[0] == barco5[2]){
													if(deci[1] == barco5[3]){
														Indi5();
													}
													else{
														Fallo();
													}
												}
												else{
													if(deci[0] == barco5[4]){
														if(deci[1] == barco5[5]){
															Indi5();
														}
														else{
															Fallo();
														}
													}
													else{
														if(deci[0] == barco5[6]){
															if(deci[1] == barco5[7]){
																Indi5();
															}
															else{
																Fallo();
															}
														}
														else{
															if(deci[0] == barco5[8]){
																if(deci[1] == barco5[9]){
																	Indi5();
																}
																else{
																	Fallo();
																}
															}
															else{
																Fallo();
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		Barco_u2();
		Barco_u3();
		Barco_u4();
		Barco_u5();
		Mostrar_mapa();
		Fin();
	}
	cout << "GAME OVER\n";
	cout << "YOU WIN\n";
}
	
int main(int argc, char *argv[]) {
	srand(time(NULL));
	Mapa();
	Barcos_comp();
//	Desicion();
	Compara();
	return 0;
}

