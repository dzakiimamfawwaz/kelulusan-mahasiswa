#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 10 /*Mendefinisikan konstanta bernama
MAX_MAHASISWA dan memberikan nilainya 10 */

int main() {
//buat variable
char nama_mahasiswa[MAX_MAHASISWA][50];
int indikator_lulus[MAX_MAHASISWA];
double jml_lulus = 0;
double jml_gagal = 0;
double jml_kelulusan;

printf("====================================\n");
printf(" Program Pengecekan Kelulusan\n");
printf("====================================\n\n");

printf(" Masukkan Data Mahasiswa\n");
printf("====================================\n\n");

//Menginput nama mahasiswa beserta hasil ujiannya lulus / gagal

for (int i = 0; i < MAX_MAHASISWA; i++) {
printf("Nama: ");
scanf(" %[^\n]s", nama_mahasiswa[i]); //%[^\n]s digunakan untuk membaca string dari input pengguna sampai menemui karakter newline.
printf("Masukkan hasil ujian %s (1 = LULUS dan 2 = GAGAL):\t ", nama_mahasiswa[i]);
scanf("%d", &indikator_lulus[i]);

if (indikator_lulus[i] == 1) {
jml_lulus++;
} else if (indikator_lulus[i] == 2) {
jml_gagal++;
} else {
printf("Salah input hasil, silahkan coba kembali.\n");
return 1; // Mengembalikan kode kesalahan
}
}

// Mencetak hasil input nama mahasiswa beserta hasil ujiannya (lulus / gagal)
printf("\nDaftar Mahasiswa Dan Hasil Ujian:\n");
for (int i = 0; i < MAX_MAHASISWA; i++) {
printf("------------------------------------\n");
printf("Nama\t\t: %s\nHasil Ujian\t: %s\n", nama_mahasiswa[i], (indikator_lulus[i] == 1) ? "Lulus" : "Gagal");
}

// Process membuat julah kelulusan
jml_kelulusan = (jml_lulus / MAX_MAHASISWA) * 100;

//output jumlah kelulusan
printf("\nPersentase kelulusan %.2lf%%\n", jml_kelulusan);
printf("Jumlah mahasiswa yang lulus: %.0lf\n", jml_lulus);
printf("Jumlah mahasiswa yang gagal: %.0lf\n", jml_gagal);

printf("\n");
if (jml_kelulusan > 80) {
printf("Kelulusan kelas telah mencapai target! :)\n");
} else {
printf("Target kelulusan kelas belum tercapai! :(\n");
}

return 0;
}