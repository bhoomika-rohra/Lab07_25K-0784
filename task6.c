#include <stdio.h>
int main(){
	char str[50];
	int i=0;
	int vcount=0,ccount=0;
	printf("enter a string:");
	scanf("%49[^\n]", str);
	while (str[i]!='\0'){
		if ((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')){
			vcount++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			ccount++;
		}
		i++;
	}
	printf("number of vowels: %d\n", vcount);
	printf("number of consonants: %d\n", ccount);
	return 0;
}
