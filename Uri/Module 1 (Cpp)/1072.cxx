#include <iostream>

using namespace std;

int main() {
	
	long int n, in = 0, out;
	cin >> n;
	long int v[n];
	
	for(long int i=0;i<n;i++){
		cin >> v[i];
		if(v[i]>=10 && v[i]<=20) in++;
	}
	
	out = n - in;
	cout << in << " in\n" << out << " out\n"; 
	
	/*int ct;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> ct;
	if(ct == 1) main();
	else exit(0);*/
}
/*
void teste(){
4
14
123
10
-25
}
*/
