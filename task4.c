#include <stdio.h>
int main(){
	char str[50];
	int i;
	printf("enter a sentence: ");
	scanf("%[^\n]", str);
	while (str[i]!='\0'){
		if ((str[i]>='a')&&(str[i]<='z')){
			str[i]=str[i]-32;
		}
		else if ((str[i]>='A')&&(str[i]<='Z')){
			str[i]=str[i]+32;
		}
		i++;
	}
	printf("converted message: %s\n", str);
	return 0;
	
}
	
