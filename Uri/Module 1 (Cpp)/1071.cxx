#include <iostream>

using namespace std;

int main() {
	int a, b, soma = 0;
	cin >> a >> b;
	
	if(b<a) std::swap(b,a);
	
	for(int i=a+1; i<b; i++) if(i%2!=0) soma += i;
	
	cout << soma << endl;
	
	/*int ct;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> ct;
	if(ct == 1) main();
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
