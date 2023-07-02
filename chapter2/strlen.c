/* Since a function named strlen() already exists in standard library we will name ours as str_len()*/

#include <stdio.h>
#define MAXLENGTH 100
int str_len(char s[]);
int main(){
    char str[MAXLENGTH];
    int i=0;
    while (i<MAXLENGTH){
        str[i]=getchar();
	if (str[i]!=EOF &&  str[i]!='\n' && str[i]!='\0'){
	    ++i;
	}
	else{
	    break;
	}
    }
    printf("%d\n",i);
    return 0;
}
