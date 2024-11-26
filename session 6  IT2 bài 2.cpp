#include<stdio.h>
int main(){
	int soNguyen;
	int soChan = 0;
	int soLe = 0;
	
	printf("nhap 5 so nguyen :\n");
	for(int i=1 ; i<=5 ; i++){
		printf("nhap so nguyen %d :",i);
		scanf("%d",&soNguyen);
		
		if(soNguyen %2 ==0){
			soChan++; 
		} else {
			soLe++; 
		}
	}
	printf("co %d so chan \n",soChan);
	printf("co %d so le \n",soLe);
	
	return 0; 
} 
