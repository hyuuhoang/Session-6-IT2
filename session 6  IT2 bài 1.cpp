#include<stdio.h>
int main(){
	int soNguyen;
	int tinhTong = 0;
	
	for(int i =1 ; i <= 5 ; i++){
		printf("nhap so thu %d :",i);
		scanf("%d",&soNguyen);
		if (soNguyen %2 != 0){
			tinhTong += soNguyen; 
		} 
	} 
	printf("tong cac so le la : %d \n",tinhTong);
	return 0; 
} 


