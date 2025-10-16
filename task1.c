#include <stdio.h>
int main(){
	int arr[5];
	int i,temp;
	printf("enter 5 integers: ");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	temp=arr[4];
	for(i=4;i>=1;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	for(i=0;i<=4;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
