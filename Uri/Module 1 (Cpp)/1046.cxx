#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int cont = 0;
	
	do{
		a++;
		cont++;
		if(a == 24) a = 0;
	}while(a != b);
	
	printf("O JOGO DUROU %d HORA(S)\n", cont);
	
    return 0;
}
