#include <iostream>
using namespace std;

int main() {
    int panjangArray;
    char ulang;

    do {
        // Meminta panjang array dari pengguna (minimal 5)
        cout << "Masukkan panjang array (minimal 5): ";
        cin >> panjangArray;

        // Memastikan panjang array minimal 5
        if (panjangArray < 5) {
            cout << "Panjang array harus minimal 5. Silakan coba lagi." << endl;
            continue;
        }

        int angka[panjangArray];

        // Menerima input bilangan ke dalam array
        cout << "Masukkan " << panjangArray << " bilangan ke dalam array:" << endl;
        for (int i = 0; i < panjangArray; ++i) {
            cout << "Bilangan ke-" << i + 1 << ": ";
            cin >> angka[i];
        }

        // Mencari nilai minimum dan maksimum dalam array
        int minimum = angka[0];
        int maksimum = angka[0];
        for (int i = 1; i < panjangArray; ++i) {
            if (angka[i] < minimum) {
                minimum = angka[i];
            }
            if (angka[i] > maksimum) {
                maksimum = angka[i];
            }
        }

        // Menampilkan hasil nilai minimum dan maksimum
        cout << "Nilai minimum: " << minimum << endl;
        cout << "Nilai maksimum: " << maksimum << endl;

        // Meminta input dari pengguna untuk mengulang program
        cout << "Apakah Anda ingin mengulang program? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
