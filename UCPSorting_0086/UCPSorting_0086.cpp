// .InsertionSort: memisahkan elemen menjadi 2 sublist,list yang sudah terurut dan list yang belum terurut. kemudian dibandingkan dan dimasukan dalam sublist terurut.
// .Banyak data - 1 atau ( n-1)
// .

#include <iostream>
using namespace std;

int linda[86];
int n;

void input() { // Prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal jumhlah 86): ";
        cin >> n;

        if (n <= 86)
            break;
        else
            cout << "\nArray hanya dapat mempunyai maksimal 86 elemen.\n";
    }

    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> linda[i];
    }
}

void selectionsort() {
    int i, j, pass;
    for (i = 0; i < n - 1; i++) {
        pass = i;
        for (j = i + 1; j < n; j++) {
            if (linda[j] < linda[pass])
                pass = j;
        }
        //swap


    }

}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;


    for (int j = 0; j < n; j++) {
        cout << linda[j];
        if (j < n - 1)
            cout << "-->";
    }

    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    selectionsort();
    display();

    system("pause");
    return 0;

}