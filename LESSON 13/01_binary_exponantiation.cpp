#include <iostream>
using namespace std;

double My_pow(double x, int n ){
    int binary_form = n;
    if(n < 0){
        x = (1/x);
        binary_form = -binary_form;
    }

    double ans = 1;

    while(binary_form > 0){
        if(binary_form % 2 == 1){
            ans *= x;
        }
        x *= x;
        binary_form /= 2;
    }
    return ans;
}
int main(){
    double base1 = 2.0;
    int exponent1 = 5;
    cout << base1 << "^" << exponent1 << " = " << My_pow(base1, exponent1) << endl;

    double base2 = 2.0;
    int exponent2 = -3;
    cout << base2 << "^" << exponent2 << " = " << My_pow(base2, exponent2) << endl;

    return 0;
}
// nothing