#include <iostream>

using namespace std;

int main() {
	
	int tot[5];
	int par = 0, impar = 0, positivo = 0, negativo = 0;
	
	for(int i=0;i<5;i++){
		cin >> tot[i];
		if(tot[i]%2 == 0) par++;
		if(tot[i]%2 != 0) impar++;
		if(tot[i]>0) positivo++;
		if(tot[i]<0) negativo++;
	}
	
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << positivo << " valor(es) positivo(s)" << endl;
	cout << negativo << " valor(es) negativo(s)" << endl;
	
	/*int a;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> a;
	if(a == 1) main();
	else exit(0);*/
}
/*
void teste(){
-5
0
-3
-4
12
}
*/
