#include <iostream>

using namespace std;

int main() {
	
	float v[6];
	int cont = 0;
	for(int i=0;i<6;i++) cin >> v[i];
	for(int i=0;i<6;i++){
		if(v[i] > 0) cont++;
	}
	cout << cont << " valores positivos" << endl;
	/*int a;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> a;
	if(a == 1) main();
	else exit(0);*/
}
