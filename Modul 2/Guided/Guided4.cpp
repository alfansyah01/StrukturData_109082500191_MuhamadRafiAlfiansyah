#include <iostream>
using namespace std;

void tulis(int x);
int main(){
    int jum;
    cout << "jumlah bari kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

void tulis(int x){
    for (int i = 1; i <= x; i++)
        cout << "baris ke-" << i << endl;
}