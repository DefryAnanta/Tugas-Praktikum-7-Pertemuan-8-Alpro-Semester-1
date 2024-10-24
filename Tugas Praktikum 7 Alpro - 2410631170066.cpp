#include <iostream>
using namespace std;

struct Zodiak {
    string nama;
    int awalBulan;
    int awalHari;
    int akhirBulan;
    int akhirHari;
};

// Fungsi untuk mengambil input tanggal lahir
void inputTanggalLahir(int &tgl, int &bln, int &thn) {
    cout << "Masukkan Tanggal Lahir Anda (1-31): ";
    cin >> tgl;
    cout << "Masukkan Bulan Lahir Anda (1-12): ";
    cin >> bln;
    cout << "Masukkan Tahun Lahir Anda: ";
    cin >> thn;
}

// Fungsi untuk menampilkan tanggal lahir
void tampilkanTanggalLahir(int tgl, int bln, int thn) {
    cout << "\nTanggal lahir Anda: " << tgl << "-" << bln << "-" << thn << endl;
}

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
void tentukanZodiak(int tgl, int bln) {
    Zodiak zodiak[] = {
        {"CAPRICORN", 12, 22, 1, 19},
        {"AQUARIUS", 1, 20, 2, 18},
        {"PISCES", 2, 19, 3, 20},
        {"ARIES", 3, 21, 4, 19},
        {"TAURUS", 4, 20, 5, 20},
        {"GEMINI", 5, 21, 6, 20},
        {"CANCER", 6, 21, 7, 22},
        {"LEO", 7, 23, 8, 22},
        {"VIRGO", 8, 23, 9, 22},
        {"LIBRA", 9, 23, 10, 22},
        {"SCORPIO", 10, 23, 11, 21},
        {"SAGITTARIUS", 11, 22, 12, 21}
    };

    string zodiakAnda = "Tidak Diketahui atau Tidak Terbaca, tolong masukkan sesuai format";  // kondisi default atau awal zodiakAnda

    for (int i = 0; i < 12; i++) {
        if ((bln == zodiak[i].awalBulan && tgl >= zodiak[i].awalHari) ||
            (bln == zodiak[i].akhirBulan && tgl <= zodiak[i].akhirHari)) {
            zodiakAnda = zodiak[i].nama;
            break;
        }
    }

    cout << "Zodiak Anda adalah: " << zodiakAnda << endl;  // kondisi akhir jika loop menemukan zodiak yg sesuai
}

void identitasProgram() {
    cout << "Tugas Praktikum 7 Pertemuan 8 Alpro" << endl << endl
         << "Nama       : Defry Ananta Perangin Angin" << endl
         << "NPM        : 2410631170066" << endl
         << "Kelas/Prodi: 1B/Informatika" << endl << endl
         << "Selamat datang di program Menentukan Zodiak\n\n";
}

int main() {

    identitasProgram();

    int tgl, bln, thn;
    char lagi;

    do {
        // Memanggil fungsi untuk input tanggal lahir
        inputTanggalLahir(tgl, bln, thn);

        // Memanggil fungsi untuk menampilkan tanggal lahir
        tampilkanTanggalLahir(tgl, bln, thn);

        // Memanggil fungsi untuk menentukan zodiak
        tentukanZodiak(tgl, bln);

        // Menanyakan apakah pengguna ingin mencoba lagi
        cout << "\nApakah Anda ingin menentukan zodiak lagi? (y/n): ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');

    cout << "Terima kasih dan sampai jumpa!" << endl;
    return 0;
}
