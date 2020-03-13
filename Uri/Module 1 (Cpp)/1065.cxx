#include <iostream>

using namespace std;

int main() {
	
	int tot[5];
	int cont = 0;
	
	for(int i=0;i<5;i++){
		cin >> tot[i];
		if(tot[i]%2 == 0) cont++;
	}
	
	cout << cont << " valores pares" << endl;
	
	/*int a;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> a;
	if(a == 1) main();
	else exit(0);*/
}
/*
void teste(){
7
-5
6
-4
12
}
*/
