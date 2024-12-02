#include<stdio.h>
int main(){
	int arr[4] = {7,1,5,4};
	int arrsize = sizeof(arr)/sizeof(int);
	printf (" mang truoc khi sap xep: ");
	for (int i = 0 ; i < arrsize ; i++){
		printf("%d\t",arr[i]);
	}
	for (int i = 0 ; i < arrsize ; i++){
		for (int j = 0 ; j < arrsize -1 - i ; j++){
			if ( arr[j+1]<arr[j]){
				int bonho = arr[j];
				arr[j] = arr [j+1];
				arr[j+1] = bonho;
							
		
			}
		}
    }
        printf ("\nmang sau truoc khi sap xep: ");
		for (int i = 0 ; i < arrsize ; i++){
		    printf("%d\t  ",arr[i]);
	}
}
