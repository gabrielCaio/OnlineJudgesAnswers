#include <iostream>

using namespace std;

int main() {
    
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if((a+b)>c && (b+c)>a && (a+c)>b){
        float perimeter = a+b+c;
        printf("Perimetro = %.1f\n", perimeter);
    }else {
        float area = ((a+b)*c) / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
