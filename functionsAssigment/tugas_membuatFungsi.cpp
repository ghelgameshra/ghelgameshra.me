#include <iostream>
#include <ctime>
using namespace std;

void tampil(){
    // ini adalah fungsi tanpa argumen [soal no. 1]
    cout << "ini adalah fungsi tanpa argumen" << endl;
}


void data( string fungsi = "ini adalah fungsi dengan argumen" ){
    // ini adalah fungsi dengan argumen [soal no. 2]
    cout << fungsi << endl;
}



int cariUmur(int tahun_lahir){
    // ini adalah fungsi dengan argumen dan kembalian [soal no. 3]
    int umur;

    // mencari tahun sekarang
    time_t t = time(nullptr);
    tm const* pTInfo = localtime(&t);
    int tahun_sekarang = 1900 + pTInfo->tm_year;

    // mecari umur
    umur = tahun_sekarang - tahun_lahir;

    // nilai kembalian
    return umur;
}



// ini adalah fungsi utama
int main(){
    int tahun_lahir;
    tampil(); // menampilkan fungsi tampil()
    data(); // menampilkan fungsi data()
    
    cout << "Masukkan tahun lahir: ";
    cin >> tahun_lahir;
    cout << "Umur: " << cariUmur(tahun_lahir); // menampilkan fungsi umur()


    cin.get();
    return 0;
}