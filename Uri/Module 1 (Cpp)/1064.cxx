#include <iostream>

using namespace std;

int main() {
	
	float tot[6], pos[6], m;
	int cont = 0;
	
	for(int i=0;i<6;i++){
		cin >> tot[i];
		if(tot[i] > 0){
			pos[cont] = tot[i];
			m += pos[cont];
			cont++;
		}
	}
	
	cout << cont << " valores positivos" << endl;
	printf("%.1f\n", (m/cont));
	
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
-3.4
4.6
12
}
*/
