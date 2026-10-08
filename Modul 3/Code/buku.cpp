#include "buku.h"

void editIsi(string judul, int halaman, string penulis, buku &buku)
{
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}

void tampilkanIsiBuku(buku buku)
{
    cout << "Judul: " << buku.judul << endl;
    cout << "Halaman: " << buku.halaman << endl;
    cout << "Penulis: " << buku.penulis << endl;
}

bool checkPenulis(buku buku)
{
    return buku.penulis == "";
}