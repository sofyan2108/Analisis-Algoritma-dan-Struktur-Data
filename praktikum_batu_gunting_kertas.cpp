#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

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
}

int main() {
    cout << "Selamat datang di permainan batu, gunting, kertas!" << endl;

    while (true) {
        int userChoice = getUserChoice();
        int computerChoice = getComputerChoice();

        cout << "Anda memilih: " << userChoice << endl;
        cout << "Komputer memilih: " << computerChoice << endl;

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
