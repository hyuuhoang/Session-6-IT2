#include <stdio.h>
int main(){
	double money;
	double interestRate , receive, interest;
	int month;
	printf("Moi ban nhap vao so tien gui ban dau: ");
	scanf("%lf", &money);
	receive=money;
	printf("Moi ban nhap lai suat thang: ");
	scanf("%lf", &interestRate);
	interestRate=interestRate/100;
	printf("Moi ban nhap so thang gui: ");
	scanf("%d", &month);
	for( int i =1; i<=month; i++){
		receive+=receive*interestRate;
	}
	interest= receive - money;
	printf("tien lai la: %.3lf\n", interest);
    printf("tien nhan duoc la: %.3lf\n", receive);
	return 0;
}
