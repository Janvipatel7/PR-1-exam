#include<iostream>

using namespace std;

int main(){
    int celsius ;

    cout << "Enter the value of celsius : ";
    cin >> celsius;

    cout << "Convert temperature from degrees Celsius to Fahrenheit  : "  << (1.8 * celsius) + 32;


    return 0;
}