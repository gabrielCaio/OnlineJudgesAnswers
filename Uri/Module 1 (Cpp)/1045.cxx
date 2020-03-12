#include <iostream>
#include <algorithm>

using namespace std;

double po2(double a);

int main() {
    
    double v[3];
    for(int i=0;i<3;i++) cin >> v[i];
    sort(v, v+3);
    reverse(v, v+3);
    
    double a = v[0], b = v[1], c = v[2];

    if(a>=(b+c)) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if(po2(a) == po2(b) + po2(c)) cout << "TRIANGULO RETANGULO" << endl;
        if(po2(a) > po2(b) + po2(c)) cout << "TRIANGULO OBTUSANGULO" << endl;
        if(po2(a) < po2(b) + po2(c)) cout << "TRIANGULO ACUTANGULO" << endl;
        if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
        if((a==b && b != c) || (b==c && c!=a) || (a==c) && c !=b) cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    return 0;
}

double po2(double a){
    return a * a;
}