#include<stdio.h>
int main(){
	int password = 123;
	int nhapMk;
	
	printf("nhap mat khau : ");
	scanf("%d",&nhapMk);
	
	if( password == nhapMk ){
		printf("mat khau dung roi !! \n"); 
	} else{
		printf("mat khau sai roi !! \n"); 
	} 
	return 0; 
}


