#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Loop do-while untuk memungkinkan program dijalankan kembali
    char ulangi;
    do {
        // Vektor untuk menyimpan angka dan kata
        std::vector<int> numbers;
        std::vector<std::string> words;

        // Meminta pengguna untuk memasukkan jumlah angka dan kata yang ingin dimasukkan
        int numCount, wordCount;
        std::cout << "Masukkan jumlah angka: ";
        std::cin >> numCount;
        std::cout << "Masukkan jumlah kata: ";
        std::cin >> wordCount;

        // Memasukkan angka sesuai keinginan pengguna
        std::cout << "Masukkan angka:\n";
        for (int i = 0; i < numCount; ++i) {
            int num;
            std::cout << "Angka " << i + 1 << ": ";
            std::cin >> num;
            numbers.push_back(num);
        }

        // Memasukkan kata sesuai keinginan pengguna
        std::cout << "Masukkan kata:\n";
        for (int i = 0; i < wordCount; ++i) {
            std::string word;
            std::cout << "Kata " << i + 1 << ": ";
            std::cin >> word;
            words.push_back(word);
        }

        // Menampilkan angka sebelum sorting
        std::cout << "Angka sebelum sorting: ";
        for (const auto& num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;

        // Sorting angka
        std::sort(numbers.begin(), numbers.end());

        // Menampilkan angka setelah sorting
        std::cout << "Angka setelah sorting: ";
        for (const auto& num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    
        // Menampilkan kata sebelum sorting
        std::cout << "Kata sebelum sorting: ";
        for (const auto& word : words) {
            std::cout << word << " ";
        }
        std::cout << std::endl;

        // Sorting kata
        std::sort(words.begin(), words.end());

        // Menampilkan kata setelah sorting
        std::cout << "Kata setelah sorting: ";
        for (const auto& word : words) {
            std::cout << word << " ";
        }
        std::cout << std::endl;

        // Meminta input untuk menjalankan program kembali
        std::cout << "Apakah Anda ingin menjalankan program lagi? (y/n): ";
        std::cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');

}
