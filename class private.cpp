#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int umur;
    double ipk;

public:
    void inputData() {
        cout << "Masukkan nama mahasiswa: ";
        cin.get();
        getline(cin, nama);   // Mengambil input dari user dan menyimpannya pada atribut nama

        cout << "Masukkan umur mahasiswa: ";
        cin >> umur;    // Mengambil input dari user dan menyimpannya pada atribut umur

        cout << "Masukkan IPK mahasiswa: ";
        cin >> ipk;     // Mengambil input dari user dan menyimpannya pada atribut ipk
    }

    void printData() {
        cout << "Nama: " << nama << endl;    // Mencetak nilai pada atribut nama
        cout << "Umur: " << umur << endl;    // Mencetak nilai pada atribut umur
        cout << "IPK: " << ipk << endl;      // Mencetak nilai pada atribut ipk
    }

    void naikSemester() {
        if (ipk >= 3.0) {
            cout << "Anda naik semester!" << endl;
        }
        else {
            cout << "Anda belum bisa naik semester." << endl;
        }
    }
};

int main() {
    Mahasiswa mhs1;     // Membuat objek mhs1 dari class Mahasiswa
    mhs1.inputData();   // Memanggil fungsi inputData() untuk mengisi nilai pada atribut
    mhs1.printData();   // Memanggil fungsi printData() untuk mencetak nilai pada atribut
    mhs1.naikSemester();    // Memanggil fungsi naikSemester() untuk mengecek apakah mahasiswa bisa naik semester

    Mahasiswa mhs2;     // Membuat objek mhs2 dari class Mahasiswa
    mhs2.inputData();   // Memanggil fungsi inputData() untuk mengisi nilai pada atribut
    mhs2.printData();   // Memanggil fungsi printData() untuk mencetak nilai pada atribut
    mhs2.naikSemester();    // Memanggil fungsi naikSemester() untuk mengecek apakah mahasiswa bisa naik semester

    return 0;
}
