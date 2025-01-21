#include<iostream>

using namespace std;

int main(){

    float weight , height , BMI;

    cout << "Enter weight in (kg) := ";
    cin >> weight;

    cout << "Enter height in (m) := ";
    cin >> height;

    BMI = weight /( height * height);

    cout << "Your BMI value is := " << BMI << endl;

    return 0;
}