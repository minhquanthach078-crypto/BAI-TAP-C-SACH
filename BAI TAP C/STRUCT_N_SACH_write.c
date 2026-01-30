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
void nhapNSach(S a[], int n);
void xuatNSach(S a[], int n);

int main() {
    int n;
    S a[100];
    FILE*fp;

    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    getchar();
    
    fp = fopen("sach.out", "wb");

    nhapNSach(a, n);
    xuatNSach(a, n);

    return 0;
}

// Nhap 1 sach
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

// Xuat 1 sach
void xuat1sach(S a) {
    printf("\nMa sach: %s", a.masach);
    printf("\nTieu de: %s", a.tieude);
    printf("\nNam xuat ban: %d", a.namxuatban);
    printf("\nGia ban: %lld", a.giaban);
    printf("\nSo trang: %d", a.sotrang);
    printf("\nNha xuat ban: %s", a.nhaxuatban);
    printf("\nLoai sach: %s", a.loaisach);
    printf("\n----------------------");
}

// Nhap n sach
void nhapNSach(S a[], int n) {
    for (int i = 0; i < n; i++) {							
        printf("\n=== Nhap sach thu %d ===", i + 1);
        nhap1sach(&a[i]);
    }
}

// Xuat n sach
void xuatNSach(S a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n=== Sach thu %d ===", i + 1);
        xuat1sach(a[i]);	
    }
}
	