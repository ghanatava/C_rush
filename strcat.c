/*writing my own strcat*/

#include <stdio.h>
void str_cat(char s[],char t[]){
	int i,j;
	i=j=0;
	while(s[i]!='\0'){
	    i++;
	}
	while((s[i++]=t[j++])!='\0')
	    ;	
	
}

int main(){
	char s[100];
	char t[10]={'E','F','G','H'};
	scanf("%s",&s);
	str_cat(s,t);
	printf("%s\n",s);

}
