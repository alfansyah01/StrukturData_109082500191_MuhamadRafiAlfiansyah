#include <iostream>
#define MAX 5
using namespace std;
int main(){
//     double tot_pembelian, diskon;
//     cout<<"total pembelian: Rp";
//     cin>>tot_pembelian;
//     diskon = 0;
//     if(tot_pembelian >= 100000)
//         diskon = 0.05*tot_pembelian;
//         else 
//         diskon = 0;
//         cout<<"besar diskon = Rp"<<diskon;
// }

    // int kode_hari;
    // puts("Menentukan hari kerja/Libur\n");
    // puts("1=Senin 3=Rabu 5=Jumat 7=Minggu");
    // puts("2=Selasa 4=Kamis 6=Sabtu" );
    // cin >> kode_hari;
    // switch (kode_hari){
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //     puts  ("Hari Kerja");
    //         break;
    //     case 6:
    //     case 7:
    //     puts ("Hari Libur");
    //     break;
    //     default:
    //         puts("Kode masukan salah!!");
    // }
    // return 0;
    // }

//     int i=1;
//     int jum;
//     cin>>jum;
//     do{
//         cout << "baris ke-" << (i+1) << endl;
//         i++;
//     } while (i<=jum);
//      return 0;
//  }

int i;
struct data{
    char nama[40];
    int nilai;
};
data siswa[MAX];
for (i=0; i<MAX; i++){
    cout << "Masukkan nama siswa ke-" << (i+1) << ": ";
    cin >> siswa[i].nama;
    cout << "Masukkan nilai siswa ke-" << (i+1) << ": ";
    cin >> siswa[i].nilai;
}
cout<<"\ndata siswa\n";
cout<<"======";
for (i=0; i<MAX; i++){
    cout <<"\n\ndata ke-" << (i+1) ;
    cout << "\nNama = " << siswa[i].nama;
    cout << "\nNilai = " << siswa[i].nilai;
}
return 0;
}