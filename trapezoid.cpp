#include<iostream>

using namespace std;

int main(){
    int a , b , H ;

    cout << "Enter the length of base a := ";
    cin >> a;

    cout << "Enter the length of base b := ";
    cin >> b;

    cout << "Enter the Height := ";
    cin >> H;

    cout << "The Area of the Trapezoid is := " << ((a + b) / 2 * H);

    return 0;
}