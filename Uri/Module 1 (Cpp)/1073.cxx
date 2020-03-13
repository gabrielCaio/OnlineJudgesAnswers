#include <iostream>

using namespace std;
void pot(int a);

int main() {
	
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) if(i%2==0) pot(i);
	
	/*int ct;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> ct;
	if(ct == 1) main();
	else exit(0);*/
}
void pot(int a){
	cout << a << "^2" << " = " << (a*a) << endl;
}
/*
void teste(){
6
}
*/
