#include <stdio.h>
int main(){
	int search,i,count;
	int arr[10];
	count=0;
	
	for (i=0;i<10;i++){
		printf("enter a value");
		scanf("%d",&arr[i]);
		
	}
	arr[i]-'0';
	printf("enter a value to search: ");
	scanf("%d",&search);
	for(i=0;i<=9;i++){
		if (search==arr[i]){
			count++;
		}
	}
	if (count>0){
		printf("the number was found %d times", count);
    }
	else{
		printf("number not found!");
	}
	return 0;
}
