#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printHeader() {
    cout << "=============================" << endl;
    cout << "  Permainan Batu Gunting Kertas" << endl;
    cout << "=============================" << endl;
}

int getUserChoice() {
    int choice;
    cout << "Pilih 1 untuk batu, 2 untuk gunting, 3 untuk kertas: ";
    cin >> choice;
    return choice;
}

int getComputerChoice() {
    srand(time(0));
    return rand() % 3 + 1;
}

void determineWinner(int userChoice, int computerChoice) {
    cout << "=============================" << endl;
    cout << "Hasil: ";
    if (userChoice == computerChoice) {
        cout << "Seri!" << endl;
    } else if (
        (userChoice == 1 && computerChoice == 2) ||
        (userChoice == 2 && computerChoice == 3) ||
        (userChoice == 3 && computerChoice == 1)
    ) {
        cout << "Anda Menang!" << endl;
    } else {
        cout << "Komputer Menang!" << endl;
    }
    cout << "=============================" << endl;
}

int main() {
    printHeader();
    
    while (true) {
        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        cout << "Anda memilih: ";
        switch(userChoice) {
            case 1: cout << "Batu"; break;
            case 2: cout << "Gunting"; break;
            case 3: cout << "Kertas"; break;
            default: cout << "Pilihan tidak valid";
        }
        cout << endl;

        cout << "Komputer memilih: ";
        switch(computerChoice) {
            case 1: cout << "Batu"; break;
            case 2: cout << "Gunting"; break;
            case 3: cout << "Kertas"; break;
        }
        cout << endl;

        determineWinner(userChoice, computerChoice);

        char playAgain;
        cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Terima kasih telah bermain. Sampai jumpa!" << endl;
            break;
        }
    }

    return 0;
}
