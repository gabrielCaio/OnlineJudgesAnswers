#include <iostream>

using namespace std;

int main() {
	
	long int n;
	cin >> n;
	long int v[n];
	for(int i=0;i<n;i++) cin >> v[i];
	
	for(int i=0;i<n;i++){
		if(v[i]%2 == 0 && v[i] > 0) cout << "EVEN POSITIVE" << endl;
        else if(v[i]%2 != 0 && v[i] > 0) cout << "ODD POSITIVE" << endl;
        else if(v[i]%2 == 0 && v[i] < 0) cout << "EVEN NEGATIVE" << endl;
        else if(v[i]%2 != 0 && v[i] < 0) cout << "ODD NEGATIVE" << endl;
        else cout << "NULL" << endl;
	}
	
	/*int ct;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> ct;
	if(ct == 1) main();
	else exit(0);*/
}
/*
void teste(){
4
-5
0
3
-4
}
*/
