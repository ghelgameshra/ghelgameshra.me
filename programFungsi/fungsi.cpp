#include <iostream>
using namespace std;
/* 
Nama    : Rizky Andriawan
Prodi   : Teknik Informatika
NIM     : 21552021033
*/
int main(){
    // variabel untuk inputan
    // menggukan tipe data float
    // agar bisa input nilai bilangan desimal, negatif, dll
    float k, a, t1, t2, l;

    // variabel untuk menampilkan data mahasiswa (tanpa inputan)
    string nama = "Rizky Andriawan";
    string prodi = "Teknik Informatika";
    string nim = "21552021033";
    string matkul = "Pemrograman Terstruktur";
    string myCode = "9323347554412627";
    char tampil;

    // pilihan apakah menampilkan data mahasiswa/ tidak
    cout << "===============================" << endl;
    cout << "Tampilkan nama mahasiswa ?[y/n]";
    cin >> tampil;
    if( tampil == 'y' ){
        cout << "===============================" << endl;
        cout << "Nama : " << nama << endl;
        cout << "Pordi : " << prodi << endl;
        cout << "Matkul : " << matkul << endl;
        cout << "NIM : " << nim << endl << endl;
    }

    // output 
    cout << "===============================" << endl;
    cout << "Rumus :     q = kA( t1 - t2 )/L" << endl;
    cout << "===============================" << endl << endl;

     // proses inputan data ( cin >> namaVariabel; )
    cout << "Masukkan nilai k : ";cin >> k;
        
        // kondisi jika nilai yang dimasukkan bukan angka
        if(k == false){
        cout << "===============================" << endl << endl;
        cout << "Inputan k bukan angka !" << endl;
        return 0;
        }
    cout << "Masukkan nilai a : ";cin >> a;

        // kondisi jika nilai yang dimasukkan bukan angka
        if(a == false){
        cout << "===============================" << endl << endl;
        cout << "Inputan a bukan angka !" << endl;
        return 0;
        }
    cout << "Masukkan nilai t1 : ";cin >> t1;
    if(t1 == false){

        // kondisi jika nilai yang dimasukkan bukan angka
        cout << "===============================" << endl << endl;
        cout << "Inputan t1 bukan angka !" << endl;
        return 0;
        }
    cout << "Masukkan nilai t2 : ";cin >> t2;
    if(t2 == false){

        // kondisi jika nilai yang dimasukkan bukan angka
        cout << "===============================" << endl << endl;
        cout << "Inputan t2 bukan angka !" << endl;
        return 0;
        }
    cout << "Masukkan nilai L : ";cin >> l;
    if(l == false){

        // kondisi jika nilai yang dimasukkan bukan angka
        cout << "===============================" << endl << endl;
        cout << "Inputan L bukan angka !" << endl;
        return 0;
        }

    // variabel hasil
    // hasil dari ( t1 - t2 )*k*a/l dimasukkan dalam variabel q
    float q = ( t1 - t2 )*k*a/l;

    // keluaran hasil (detail output)
    cout << "q = kA( t1 - t2 )/L" << endl;
    cout << "q = " << k << " x " << a << "(" << t1 << "-" << t2 << ")" << "/" << l << endl;
    cout << "q = " << k*a << "(" << t1-t2 << ")" << "/" << l << endl;
    cout << "q = " << (t1-t2)*k*a << "/" << l << endl;
    cout << "q = " << q << endl << endl;
    
    if( myCode = "9323347554412627" ){
        cout << "===============================" << endl;
        cout << "Code by : RizkyAndriawan" << endl;
        cout << "===============================" << endl;   
    } else {
        cout << "===============================" << endl;
        cout << "Code by : unknown" << endl;
        cout << "===============================" << endl;   
    }
    cin.get();
    return 0;
}
