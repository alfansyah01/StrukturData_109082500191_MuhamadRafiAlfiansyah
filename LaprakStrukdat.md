# **Laporan Praktikum Modul 1 \- Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)**

# 

Muhamad Rafi Alfiansyah \- 109082500191

## Dasar Teori

A. Struktur

### 

Struktur merupakan tipe data bentukan yang terdiri atas kumpulan variabel dalam satu nama. Setiap variabel di dalam struktur dapat memiliki tipe data yang berbeda. Struktur digunakan untuk mengelompokkan beberapa informasi yang saling berkaitan menjadi satu kesatuan.

#### 1\. Struktur dideklarasikan menggunakan kata kunci struct, kemudian diikuti dengan nama struktur dan anggota-anggota yang terdapat di dalamnya.



#### 2\. Setiap anggota struktur dapat memiliki tipe data yang berbeda, seperti int, float, char, atau tipe struktur lainnya.

#### 3\. Elemen pada struktur dapat diakses menggunakan operator titik (.), seperti data.nama atau data.nilai.

B. Operasi Linked List

### 

Operasi pada linked list dilakukan dengan memanfaatkan pointer untuk mengatur hubungan antar-node. Operasi tersebut meliputi penambahan data, penghapusan data, serta penelusuran data dari node awal sampai node terakhir.

#### 1\. Penambahan node merupakan proses memasukkan node baru ke dalam linked list. Penambahan dapat dilakukan pada bagian awal, bagian akhir, atau pada posisi tertentu dengan mengubah pointer yang sesuai.



#### 2\. Penghapusan node merupakan proses menghilangkan node dari linked list. Proses ini dilakukan dengan menghubungkan pointer dari node sebelum node yang dihapus ke node setelahnya.

#### 3\. Traversal adalah proses mengunjungi atau menelusuri seluruh node pada linked list secara berurutan. Traversal dimulai dari node pertama atau head hingga mencapai node terakhir yang pointer-nya bernilai NULL.



## Guided

### 1\. ...

```C++
#include <iostream>
using namespace std;
int main(){
int W, X, Y; float Z;
X = 7; Y = 3; W = 1;
Z = (X + Y)/(Y + W);
cout<< "Nilai z = " << Z << endl;
return 0;
}
```

Program menggunakan operator aritmatika dengan tanda kurung untuk mengatur urutan perhitungan dan menghasilkan nilai Z.

### 2\. ...

```C++
#include <iostream>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + ++r;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

Program menggunakan ++r, yaitu nilai r ditambah terlebih dahulu sebelum digunakan dalam perhitungan.

### 3\. ...

```C++
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + r++;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

Program menggunakan r++, yaitu nilai r digunakan terlebih dahulu dalam perhitungan, kemudian nilainya ditambah.

### 4\. ...

```C++
#include <iostream>
using namespace std;
int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
cout<<"besar diskon = Rp" <<diskon;
}
```

Program menggunakan if untuk memberikan diskon sebesar 5% apabila total pembelian mencapai Rp100.000 atau lebih.

### 5\. ...

```C++
#include <iostream>
using namespace std;
int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
else
diskon = 0;
cout<<"besar diskon = Rp" <<diskon;
}
```

Program menggunakan if-else untuk menentukan diskon. Jika total pembelian memenuhi syarat, diberikan diskon 5%, jika tidak maka diskon bernilai 0.

### 6\. ...

```C++
#include <iostream>
using namespace std;
int main(){
int kode_hari;
puts("Menentukan hari kerja/libur\n");
puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
puts("2=Selasa 4=Kamis 6=Sabtu ");
cin>>kode_hari;
switch(kode_hari){
case 1:
case 2:
case 3:
case 4:
case 5:
cout<<"Hari Kerja"<<endl;
break;
case 6:
case 7:
cout<<"Hari Libur"<<endl;
break;
default:
cout<<"Kode masukan salah!!!"<<endl;
}
return 0;
}
```

Program menggunakan switch untuk menentukan keterangan hari berdasarkan kode. Kode 1–5 menunjukkan hari kerja, sedangkan 6–7 menunjukkan hari libur.

### 7\. ...

```C++
#include <iostream>
using namespace std;
int main(){
int jum;
cout<<"jumlah perulangan: ";
cin>>jum;
for(int i=0; i<jum; i++){
cout<<"saya pintar\n";
}
return 0;
}
```

Program menggunakan for untuk mengulang perintah menampilkan tulisan sebanyak jumlah perulangan yang dimasukkan oleh pengguna.

### 8\. ...

```C++
#include <iostream>
using namespace std;
int main(){
int i=1;
int jum;
cout<<"masukan banyak baris: ";
cin>>jum;
while(i<=jum){
cout<<"baris ke-"<<i<<endl;
i++; 
}
return 0;
}
```

Program menggunakan while untuk menampilkan nomor baris secara berulang selama kondisi i <= jum masih terpenuhi.

### 9\. ...

```C++
#include <iostream>
using namespace std;
int main(){
int i = 1;
int jum;
cin >> jum;
do{
cout << "baris ke-" <<(i+1)<<endl;
i++;
} while(i<jum);
return 0;
}
```

Program menggunakan do-while untuk menjalankan perintah terlebih dahulu, kemudian memeriksa kondisi perulangan pada bagian while.

### 10\. ...

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
int i;
struct data{
char nama[40];
int nilai;
};
data siswa[MAX];
for(i=0; i<MAX; i++){
cout<<"masukkan data ke-"<<i+1<<endl;
cout<<"nama = ";
cin>>siswa[i].nama;
cout<<"nilai = ";
cin>>siswa[i].nilai;
}
cout<<"\ndata siswa\n";
cout<<"=======";
for(i=0; i<MAX; i++){
cout<<"\n\ndata ke-"<<i+1;
cout<<"\n\nnama="<<siswa[i].nama;
cout<<"\n\nnilai="<<siswa[i].nilai;
}
return 0;
}
```

Program menggunakan struct untuk mengelompokkan data nama dan nilai siswa, kemudian array digunakan untuk menyimpan data beberapa siswa.

### 11\. ...

```C++
#include <iostream>
using namespace std;

float ctof(float celcius);
int main() {
float celcius, fahrenheit;
cout <<"nilai Celcius? ";
cin >> celcius;
fahrenheit = ctof(celcius);
cout<<celcius<<" Celcius adalah "<<fahrenheit<<" Fahrenheit"<<endl;
return 0;
}

float ctof(float celcius){
return (celcius * 1.8) + 32;
}
```

Program menggunakan fungsi ctof() untuk mengubah suhu dari Celcius menjadi Fahrenheit berdasarkan nilai yang dimasukkan pengguna.

## Unguided

### 1\. (Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.\)

```cpp
#include <iostream>
using namespace std;

int main(){
    float Pertama, Kedua;
    cout << "Masukkin bilangan pertama: ";
    cin >> Pertama;
    cout << "Masukkin bilangan kedua: ";
    cin >> Kedua;
    cout << "Penjumlahan = " << Pertama + Kedua << endl;
    cout << "Pengurangan = " << Pertama - Kedua << endl;
    cout << "Perkalian   = " << Pertama * Kedua << endl;
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](Output/Soal1_1.png)


##### Output 2

![Screenshot Output Unguided 1_2](Output/Soal1_2.png)

Melakukan operasi aritmatika dari dua bilangan yang dimasukkin oleh user. Kedua bilangannya digunakan untuk menghitung penjumlahan, pengurangan, dan perkalian.

### 2\. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100\)

```cpp
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
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](Output/Soal2_1.png)


##### Output 2

![Screenshot Output Unguided 2_2](Output/Soal2_2.png)

Mengubah angka 0-100 jadi tulisan. Programnya mengecek angka menggunakan if-else, lalu menampilkan kata yang sesuai, seperti 12 menjadi dua belas atau 25 jadi dua puluh lima. Kalo angka yang dimasukkin diluar 0_100, outputnya "Di luar jangkauan".  

### 3\. (Buatlah program yang dapat memberikan input dan output sbb.\)

```cpp
#include <iostream>
using namespace std;

int main(){
    int tinggi;

    cout << "Input : ";
    cin >> tinggi;

    cout << "Output :" << endl;
    for (int baris = 0; baris <= tinggi; baris++){
        for (int spasi = 0; spasi < baris; spasi++){
            cout << "  ";
        }
        for (int angka = tinggi - baris; angka >= 1; angka--){
            cout << angka << " ";
        }
        cout << "* ";
        for (int angka = 1; angka <= tinggi - baris; angka++){
            cout << angka << " ";
        }
        cout << endl;
    }

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](Output/Soal3_1.png)


##### Output 2

![Screenshot Output Unguided 3_2](Output/Soal3_2.png)

pMembuat pola angka berdasarkan tinggi yang dimasukkan. Perulangan for digunakan untuk mengatur spasi dan susunan angka, kemudian tanda * diletakkan di bagian tengah setiap baris sehingga membentuk pola tertentu.  

## Kesimpulan

...

## Referensi

\[1\] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.   
\[2\] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui [https://doi.org/10.21070/2020/978-623-6833-67-4](https://doi.org/10.21070/2020/978-623-6833-67-4). 

...