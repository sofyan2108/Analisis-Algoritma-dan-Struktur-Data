#include <iostream>
#include <vector>  // Gunakan vector untuk menyimpan multiple values pada satu elemen

// Fungsi untuk mencari nilai dalam array
int cariNilai(const std::vector<int>& arr, int nilaiCari) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == nilaiCari) {
            return i;  // Nilai ditemukan, kembalikan indeks
        }
    }

    return -1;  // Nilai tidak ditemukan
}

int main() {
    int panjangArray;

    std::cout << "Masukkan panjang array: ";
    std::cin >> panjangArray;

    // Membuat vector untuk menyimpan multiple values pada satu elemen
    std::vector<std::vector<int>> arrayAngka(panjangArray);

    // Memasukkan elemen-elemen array
    for (int i = 0; i < panjangArray; ++i) {
        int jumlahNilai;

        // Memasukkan jumlah nilai untuk elemen ke-i
        std::cout << "Masukkan jumlah nilai untuk elemen ke-" << i << ": ";
        std::cin >> jumlahNilai;

        // Memasukkan nilai-nilai untuk elemen ke-i
        std::cout << "Masukkan nilai-nilai untuk elemen ke-" << i << ": ";
        for (int j = 0; j < jumlahNilai; ++j) {
            int nilai;
            std::cin >> nilai;
            arrayAngka[i].push_back(nilai);
        }
    }

    // Menampilkan array
    std::cout << "Array: ";
    std::cout << std::endl;
    for (int i = 0; i < panjangArray; ++i) {
        std::cout << "Elemen ke-" << i << ": ";
        for (int j = 0; j < arrayAngka[i].size(); ++j) {
            std::cout << arrayAngka[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Memasukkan nilai yang ingin dicari
    int nilaiCari;
    std::cout << "Masukkan nilai yang ingin dicari: ";
    std::cin >> nilaiCari;

    for (int i = 0; i < panjangArray; ++i) {
        int hasilPencarian = cariNilai(arrayAngka[i], nilaiCari);

        if (hasilPencarian != -1) {
            std::cout << "Nilai " << nilaiCari << " ditemukan pada indeks " << hasilPencarian << " dari elemen ke-" << i << std::endl;
        } else {
            std::cout << "Nilai " << nilaiCari << " tidak ditemukan dalam elemen ke-" << i << std::endl;
        }
    }

    return 0;
}
