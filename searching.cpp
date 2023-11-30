#include <iostream>

// Fungsi untuk mencari nilai dalam array
int cariNilai(int arr[], int panjangArray, int nilaiCari) {
    for (int i = 0; i < panjangArray; ++i) {
        if (arr[i] == nilaiCari) {
            return i;  // Nilai ditemukan, kembalikan indeks
        }
    }

    return -1;  // Nilai tidak ditemukan
}

int main() {
    const int maksPanjangArray = 10;  // Tentukan maksimum panjang array

    do {
        int panjangArray;
        do {
            std::cout << "Masukkan panjang array (maksimum " << maksPanjangArray << "): ";
            std::cin >> panjangArray;
        } while (panjangArray <= 0 || panjangArray > maksPanjangArray);

        int arrayAngka[maksPanjangArray];

        std::cout << "Masukkan elemen-elemen array:\n";
        for (int i = 0; i < panjangArray; ++i) {
            std::cout << "Elemen ke-" << i << ": ";
            std::cin >> arrayAngka[i];
        }

        do {
            std::cout << "Array: ";
            for (int i = 0; i < panjangArray; ++i) {
                std::cout << arrayAngka[i] << " ";
            }
            std::cout << std::endl;

            int nilaiCari;
            std::cout << "Masukkan nilai yang ingin dicari: ";
            std::cin >> nilaiCari;

            int hasilPencarian = cariNilai(arrayAngka, panjangArray, nilaiCari);

            if (hasilPencarian != -1) {
                std::cout << "Nilai ditemukan pada indeks: " << hasilPencarian << std::endl;
            } else {
                std::cout << "Nilai tidak ditemukan dalam array." << std::endl;

                char cobaLagi;
                std::cout << "Apakah Anda ingin mencoba nilai lain? (y/n): ";
                std::cin >> cobaLagi;

                if (cobaLagi != 'y' && cobaLagi != 'Y') {
                    break;  // Keluar dari loop pencarian jika tidak ingin mencari lagi
                }
            }

        } while (true);

        char ulangi;
        std::cout << "Apakah Anda ingin memasukkan array baru? (y/n): ";
        std::cin >> ulangi;

        if (ulangi != 'y' && ulangi != 'Y') {
            break;  // Keluar dari loop utama jika tidak ingin memasukkan array baru
        }

    } while (true);

    std::cout << "Program selesai." << std::endl;

    return 0;
}