#include<stdio.h>

typedef struct {
	int MaSV;
	char TenLop [30];
	char HoTen [30];
	
} SinhVien;

int main() {
	int MaSV;
	char TenLop [30];
	char HoTen [30];
	
	printf("NHAP\n");
	printf("MaSV: "); scanf("%d", &MaSV); 
	getchar();
	printf("TenLop: "); fgets(TenLop, sizeof(TenLop), stdin);
	printf("HoTen: "); fgets(HoTen, sizeof(HoTen), stdin);
	
	printf("%s", HoTen); // Tai sao in dc cai nay?
	
	SinhVien sv1 = {MaSV, TenLop, HoTen};
	
	printf("%s", sv1.HoTen); // Ma ko in dc cai nay ????
	return 0;
}
