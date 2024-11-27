#include <stdio.h>
int main(){
	int year, month;
	printf("Moi ban nhap vao so nam: ");
	scanf("%d",&year);
	printf("Moi ban nhap vao so thang: ");
	scanf("%d", &month);
	if(year%4==0 && year%100!=0 || year%4==0){
		switch(month){
			case(4):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(6):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(9):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(11):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(2):
				printf("Trong thang %d cu nam %d co 29 ngay", month, year)	;
				break;
			default:
				printf("Trong thang %d cua nam %d co 31 ngay", month, year);
			}
		}else{
		switch(month){
			case(4):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(6):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(9):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(11):
				printf("Trong thang %d cu nam %d co 30 ngay", month, year);
				break;
			case(2):
			printf("Trong thang %d cu nam %d co 28 ngay", month, year)	;
				break;
			default:
				printf("Trong thang %d cua nam %d co 31 ngay", month, year);
		}
	}
	return 0;
}
