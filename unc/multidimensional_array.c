#include <stdio.h>
# define COUNT 3

int main(){
    char a[]="a";
    char b[]="big";
    char c[]="cake";

    char *words[COUNT]={a,b,c};
    char **words_ptr=words;

    for(int i=0;i<COUNT;++i){
        printf("%c: %s\n",**words_ptr,*words_ptr);
	words_ptr++;
    }
}
