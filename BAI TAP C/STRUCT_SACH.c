#include <stdio.h>
#include <string.h>

struct SACH {
    char masach[11];
    char tieude[100];
    int namxuatban;
    long long giaban;
    int sotrang;
    char nhaxuatban[100];
    char loaisach[50];
};

typedef struct SACH S;

void nhap1sach(S *a);
void xuat1sach(S a);

int main() {
    S a;

    nhap1sach(&a);
    xuat1sach(a);

    return 0;
}

void nhap1sach(S *a) {
    printf("\nNhap ma sach: ");
    scanf("%10s", a->masach);
    getchar();

    printf("Nhap tieu de: ");
    fgets(a->tieude, sizeof(a->tieude), stdin);
    a->tieude[strcspn(a->tieude, "\n")] = '\0';

    printf("Nhap nam xuat ban: ");
    scanf("%d", &a->namxuatban);

    printf("Nhap gia ban: ");
    scanf("%lld", &a->giaban);

    printf("Nhap so trang: ");
    scanf("%d", &a->sotrang);
    getchar();

    printf("Nhap nha xuat ban: ");
    fgets(a->nhaxuatban, sizeof(a->nhaxuatban), stdin);
    a->nhaxuatban[strcspn(a->nhaxuatban, "\n")] = '\0';

    printf("Nhap loai sach: ");
    fgets(a->loaisach, sizeof(a->loaisach), stdin);
    a->loaisach[strcspn(a->loaisach, "\n")] = '\0';
}

void xuat1sach(S a) {
    printf("\n--- THONG TIN SACH ---\n");
    printf("Ma sach: %s\n", a.masach);
    printf("Tieu de: %s\n", a.tieude);
    printf("Nam xuat ban: %d\n", a.namxuatban);
    printf("Gia ban: %lld\n", a.giaban);
    printf("So trang: %d\n", a.sotrang);
    printf("Nha xuat ban: %s\n", a.nhaxuatban);
    printf("Loai sach: %s\n", a.loaisach);
}
