#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 < num2)  cout << num1 << ' ' << num2;
    else cout << num2 << ' ' << num1;

    return 0;
}
