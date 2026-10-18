
#include "Singlylist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    CreateList(L);

    cout << boolalpha;
    cout << "List kosong (awal): "
         << ListEmpty(L) << '\n';

    // Memasukkan data sesuai Modul 5
    int data[] = {2, 0, 8, 12, 9};

    for (int x : data) {
        insertFirst(L, alokasi(x));
    }

    cout << "List kosong (setelah insert): "
         << ListEmpty(L) << '\n';

    // Menampilkan seluruh data
    cout << "\nLATIHAN UTAMA\n";
    cout << "Data list: ";
    printInfo(L);

    // Mencari elemen bernilai 8
    cout << "\nPENCARIAN DATA\n";
    address P = findElm(L, 8);

    if (P != Nil) {
        cout << "Data ditemukan: " << P->info << '\n';

        address Prec = findBefore(L, P);

        if (Prec != Nil) {
            cout << "Data sebelum 8: "
                 << Prec->info << '\n';
        } else {
            cout << "Data 8 berada di awal list\n";
        }
    } else {
        cout << "Data 8 tidak ditemukan\n";
    }

    // Menghitung jumlah node dan total info
    cout << "\nJumlah node: " << nbList(L) << '\n';
    cout << "Total info: " << totalInfo(L) << '\n';

    // Menghapus semua node agar memori bersih
    delAll(L);

    return 0;
}
