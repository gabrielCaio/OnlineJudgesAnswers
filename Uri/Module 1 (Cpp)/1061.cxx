#include <iostream>

using namespace std;

int main() {
	
	string lixo;
	int id, ih, im, is;
	int fd, fh, fm, fs;
	
	cin >> lixo >> id >> ih >> lixo >> im >> lixo >> is;
	cin >> lixo >> fd >> fh >> lixo >> fm >> lixo >> fs;

	int sec1 = is + im*60 + ih*3600 + id*86400;
	int sec2 = fs + fm*60 + fh*3600 + fd*86400;
	
	int totalsec = sec2 - sec1;
	
	cout << (totalsec/86400) << " dia(s)" << endl;
	totalsec %= 86400;
	cout << (totalsec/3600) << " hora(s)" << endl;
	totalsec %= 3600;
	cout << (totalsec/60) << " minuto(s)" << endl;
	totalsec %= 60;
	cout << totalsec << " segundo(s)" << endl;
	
	/*int a;
	cout << "Digite 1 para Realizar outro teste e outra coisa para sair: ";
	cin >> a;
	if(a == 1) main();
	else exit(0);*/
}
/*
void teste(){
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
}
*/
