#include<stdio.h>
int main(){
	int a,b;
    printf("hay nhap so luong phan tu cho mang :");
	scanf("%d",&a);
	int arr[a];
	for(int i = 0 ; i < a ; i++){
		    printf("[%d] = ",i+1);
		    scanf("%d",&arr[i]);
		}	
        	
   printf(" hay nhap phan tu:");
   scanf("%d",&b);
	int c; 
	for (int i = 0 ; i < a ; i++){
		if(b == arr[i]){
		    	c=0 ; 
		}else{
			c=1;
		}
		
  } 
			
	
    if(c==0){
			printf(" co phan tu trong mang");
		}else if(c==1){
		
			printf("ko co phan tu trong mang");
        }
		
		
			return 0;
}
 
