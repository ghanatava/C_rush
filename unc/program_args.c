#include <stdio.h>



/*int main(int argc , char *argv[]){
    for(int i=0;i<argc;++i){
        printf("%s\n",argv[i]);
    }
}*/



/*An alternate way to perform the above process*/
int main(int argc,char **argv){
    while(argc-->0){
        printf("%s\n",*argv);
	argv++;
    }
}
