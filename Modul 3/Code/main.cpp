#include <iostream>
#include "buku.h"

using namespace std;

int main(){
   buku novel;

   string judul, penulis;
   int halaman;

   cout << "Masukkan judul buku: ";
   cin >> judul;
    cout << "Masukkan jumlah halaman: ";
    cin >> halaman;
    cout << "Masukkan nama penulis: ";
    cin >> penulis;

    editIsi(judul, halaman, penulis, novel);
    tampilkanIsiBuku(novel);

    cout << checkPenulis(novel) << endl;

    return 0;
}