#include <iostream>

using namespace std;
void res(float a, float p);

int main() {
	float a;
	cin >> a;
	
	if(a >= 0 && a <=400) res(a, 0.15);
	else if(a > 400 && a<= 800) res(a, 0.12);
	else if(a > 800 && a<= 1200) res(a, 0.1);
	else if(a > 1200 && a<= 2000) res(a, 0.07);
	else res(a, 0.04);

	return 0;
}

void res(float a, float p){
	float gain = a * p;
	float new_wage = gain + a;
	float gainP = p * 100;
	printf("Novo salario: %.2f\n", new_wage);
	printf("Reajuste ganho: %.2f\n", gain);
	printf("Em percentual: %.0f %%\n", gainP);
}
