#include<iostream>

using namespace std;

int main(){
    int  a1 , a2;

    cout << "Enter the first angle := " ;
    cin >> a1;

    cout << "Enter the Second angle := " ;
    cin >> a2;

    cout << "The Third angle is := " << 180 -(a1 + a2) << endl;

    return 0;
}