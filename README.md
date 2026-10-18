# Modul 5 — Singly Linked List

Repository ini berisi implementasi praktikum Struktur Data Modul 5 dengan bahasa pemrograman C++. Praktikum ini membahas konsep Singly Linked List, operasi pencarian elemen (*searching*), serta perhitungan jumlah node dan total nilai pada list.

## Tujuan Praktikum

- Memahami penggunaan linked list dengan pointer.
- Memahami operasi dasar pada Singly Linked List.
- Mengimplementasikan Abstract Data Type (ADT) Singly Linked List menggunakan C++.
- Melakukan pencarian elemen berdasarkan nilai.
- Menghitung jumlah node dan total nilai seluruh elemen.

## Struktur File

```text
Modul-5/
├── main.cpp
├── singlylist.cpp
├── singlylist.h
└── README.md
```

- **`main.cpp`**: Program utama untuk menjalankan dan menguji operasi linked list.
- **`singlylist.cpp`**: Implementasi fungsi-fungsi Singly Linked List.
- **`singlylist.h`**: Deklarasi struktur data dan prototype fungsi.
- **`README.md`**: Dokumentasi repository.

## Fitur Program

- Inisialisasi list kosong.
- Alokasi dan dealokasi node.
- Penyisipan elemen di awal list (`insertFirst`).
- Menampilkan seluruh elemen list (`printInfo`).
- Mencari elemen berdasarkan nilai (`findElm`).
- Menghitung jumlah node (`nbList`).
- Menghitung total nilai seluruh elemen (`totalInfo`).

## Data Pengujian

Program menggunakan lima nilai berikut:

`2, 0, 8, 12, 9`

Data dimasukkan menggunakan operasi `insertFirst`, sehingga urutan list yang terbentuk adalah:

`9 → 12 → 8 → 0 → 2`

## Hasil Pengujian

| Pengujian | Hasil |
|---|---|
| Kondisi list awal | Kosong (`true`) |
| Kondisi setelah insert | Tidak kosong (`false`) |
| Pencarian nilai 8 | Ditemukan |
| Nilai sebelum 8 | 12 |
| Jumlah node | 5 |
| Total seluruh nilai | 31 |

## Cara Menjalankan Program

Pastikan compiler C++ seperti GCC sudah terpasang dan dapat digunakan melalui terminal.

1. Buka folder repository di VS Code.
2. Buka terminal pada folder project.
3. Compile program menggunakan perintah:

```bash
g++ main.cpp singlylist.cpp -o modul5.exe
```

4. Jalankan program melalui PowerShell:

```powershell
.\modul5.exe
```

## Teknologi

- Bahasa pemrograman: C++
- Compiler: GCC (g++)
- Editor: Visual Studio Code
- Version control: Git dan GitHub

## Kesimpulan

Praktikum ini mengimplementasikan struktur data Singly Linked List menggunakan pointer dalam C++. Program berhasil membentuk list, mencari nilai 8, menghitung jumlah node sebanyak 5, dan memperoleh total nilai sebesar 31.

---

Praktikum Struktur Data — Modul 5  
Program Studi Data Science
