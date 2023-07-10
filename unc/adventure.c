#include <stdio.h>
/* warning this program tries to beyond the main frame in call stack and will crash, but IT WILL BE FUN*/
int main(){
    char start ='.';
    char *hero=&start;
    while(1){
        putchar(*hero);
	fflush(stdout);
	hero++;
    }
}
