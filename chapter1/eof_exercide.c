#include <stdio.h>
int main(){
	char c;
	if ((c=getchar())!=EOF){
	    printf("%d\n",c);
	}
	else{
	    printf("EOF value=%d",c);
	}
}
