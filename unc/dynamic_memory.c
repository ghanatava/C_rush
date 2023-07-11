#include <stdio.h>
#include <stdlib.h>
#define ALPHA_LEN 26
/* For arrays use calloc and for structs use malloc  */


void fill_lowercase(char *str,size_t len);

char *string_malloc(size_t size);

char *string_calloc(size_t size);

char *string_realloc(char *original,size_t new);

int main(){

    char *str=string_calloc(ALPHA_LEN+1);    
    fill_lowercase(str,ALPHA_LEN+1);
    printf("%s\n",str);
    str=string_realloc(str,2*(ALPHA_LEN)-1);
    fill_lowercase(&str[ALPHA_LEN],ALPHA_LEN+1);
    printf("%s\n",str);
    free(str);
    str=NULL;
}

char *string_realloc(char *original,size_t new){
    original=realloc(original,new);
    if(original == NULL){
        fprintf(stderr,"out of memory");
	exit(EXIT_FAILURE);
    }

    return original;
}

char *string_calloc(size_t size){
    char *str=calloc(size,sizeof(char));
    if (str==NULL){
        fprintf(stderr,"out of memory");
	exit(EXIT_FAILURE);
    }
    return str;
}


char *string_malloc(size_t size){
    char *str = malloc(size);
    if (str==NULL){
        fprintf(stderr,"out of memory");
	exit(EXIT_FAILURE);
    }
    for(size_t i=0;i<size;++i){
        str[i]='\0';
    }
    return str;   
}

void fill_lowercase(char *str,size_t len){
    if(len>26)
	    len=27;

    for(size_t i=0;i<len-1;++i){
            str[i]='a'+i;
    }
    str[len-1]='\0';
}
