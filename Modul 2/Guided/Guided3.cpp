#include <iostream>
using namespace std;

int maks3(int a, int b, int c);
int main (){
    int x,y,z;
    cout << "masukkan nilai bilangan ke-1= ";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2= ";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3= ";
    cin >> z;
    cout << "nilai maksimum adalah= " << maks3(x,y,z) << endl;
    return 0;
}

int maks3(int a, int b, int c){
    int temp_maks;
    if (a > b && a > c)
        temp_maks = a;
    else if (b > a && b > c)
        temp_maks = b;
    else
        temp_maks = c;
    return temp_maks;
}