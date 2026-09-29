#include <iostream>
#include <string>
using namespace std;

int main(){
    string satuan[10] = {"nol", "satu", "dua", "tiga", "empat",
                         "lima", "enam", "tujuh", "delapan", "sembilan"};
    int n;

    cout << "Masukkin angka (0-100): ";
    cin >> n;

    if (n < 0 || n > 100){
        cout << "Di luar jangkauan" << endl;
    } else if (n == 100){
        cout << "seratus" << endl;
    } else if (n < 10){
        cout << satuan[n] << endl;
    } else if (n == 10){
        cout << "sepuluh" << endl;
    } else if (n == 11){
        cout << "sebelas" << endl;
    } else if (n < 20){
        cout << satuan[n % 10] << " belas" << endl;
    } else {
        cout << satuan[n / 10] << " puluh";
        if (n % 10 != 0)
            cout << " " << satuan[n % 10];
        cout << endl;
    }

    return 0;
}