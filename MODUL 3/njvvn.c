#include <stdio.h>

int main() {
    int total_detik;
    int hari, jam, menit, detik;

    // Input jumlah detik
    printf("Masukkan jumlah detik: ");
    scanf("%d", &total_detik);

    // Menghitung hari, jam, menit, detik menggunakan if-else
    if (total_detik >= 86400) { // 1 hari = 86400 detik
        hari = total_detik / 86400; // Menghitung jumlah hari
        total_detik = total_detik % 86400; // Sisa detik setelah dihitung hari
    } else {
        hari = 0; // Tidak ada hari
    }

    if (total_detik >= 3600) { // 1 jam = 3600 detik
        jam = total_detik / 3600; // Menghitung jumlah jam
        total_detik = total_detik % 3600; // Sisa detik setelah dihitung jam
    } else {
        jam = 0; // Tidak ada jam
    }

    if (total_detik >= 60) { // 1 menit = 60 detik
        menit = total_detik / 60; // Menghitung jumlah menit
        total_detik = total_detik % 60; // Sisa detik setelah dihitung menit
    } else {
        menit = 0; // Tidak ada menit
    }

    detik = total_detik; // Sisa detik yang tersisa

    // Output dalam format hari jam:menit:detik
    if (hari > 0) {
        printf("%d hari %d:%d:%d\n", hari, jam, menit, detik);
    } else {
        printf("%d:%d:%d\n", jam, menit, detik);
    }

    return 0;
}
