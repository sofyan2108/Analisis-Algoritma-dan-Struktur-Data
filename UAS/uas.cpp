#include <iostream>
#include <vector>
#include <string>

// Struktur untuk merepresentasikan buku
struct Book {
    std::string title;
    std::string author;
};

// Fungsi untuk menambahkan buku ke inventaris
void addBook(std::vector<Book> &inventory) {
    Book newBook;
    std::cout << "Masukkan Judul Buku: ";
    std::cin.ignore();
    std::getline(std::cin, newBook.title);
    std::cout << "Masukkan Nama Penulis: ";
    std::getline(std::cin, newBook.author);
    inventory.push_back(newBook);
    std::cout << "Buku berhasil ditambahkan ke penyimpanan.\n";
}

// Fungsi untuk mencari buku berdasarkan judul atau penulis
void searchBook(const std::vector<Book> &inventory) {
    std::string query;
    std::cout << "Masukkan Judul Buku atau Penulisnya : ";
    std::cin.ignore();
    std::getline(std::cin, query);

    bool found = false;
    for (const Book &book : inventory) {
        if (book.title.find(query) != std::string::npos || book.author.find(query) != std::string::npos) {
            std::cout << "Judul : " << book.title << "\nPenulis : " << book.author << "\n\n";
            found = true;
        }
    }

    if (!found) {
        std::cout << "Buku tidak ditemukan.\n";
    }
}

// Fungsi untuk mengedit informasi buku
void editBook(std::vector<Book> &inventory) {
    std::string query;
    std::cout << "Masukkan Judul Buku atau Penulis untuk di edit: ";
    std::cin.ignore();
    std::getline(std::cin, query);

    for (Book &book : inventory) {
        if (book.title.find(query) != std::string::npos || book.author.find(query) != std::string::npos) {
            std::cout << "Masukkan Judul Baru: ";
            std::getline(std::cin, book.title);
            std::cout << "Masukkan Penulis nya: ";
            std::getline(std::cin, book.author);
            std::cout << "Informasi buku, berhasil diubah.\n";
            return;
        }
    }

    std::cout << "Buku tidak ditemukan.\n";
}

// Fungsi untuk menampilkan seluruh inventaris buku
void displayInventory(const std::vector<Book> &inventory) {
    if (inventory.empty()) {
        std::cout << "Penyimpanan Masih Kosong.\n";
    } else {
        std::cout << "Penyimpanan Buku :\n";
        for (const Book &book : inventory) {
            std::cout << "Judul: " << book.title << "\nPenulis: " << book.author << "\n\n";
        }
    }
}

int main() {
    std::vector<Book> inventory;

    while (true) {
        std::cout << "Manajemen Data Buku : \n";
        std::cout << "1. Tambah Buku\n";
        std::cout << "2. Cari Buku\n";
        std::cout << "3. Edit Buku\n";
        std::cout << "4. Tampilkan Data Penyimpanan Buku\n";
        std::cout << "5. Keluar\n";
        std::cout << "Masukkan Perintah (1-5) : ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                addBook(inventory);
                break;
            case 2:
                searchBook(inventory);
                break;
            case 3:
                editBook(inventory);
                break;
            case 4:
                displayInventory(inventory);
                break;
            case 5:
                std::cout << "Menutup Program. Seluruh Data akan Hilang.\n";
                return 0;
            default:
                std::cout << "Instruksi salah. Silahkan pilih angka antara 1 sampai 5.\n";
        }
    }

    return 0;
}
