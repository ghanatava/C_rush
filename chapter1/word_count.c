#include <stdio.h>
#define IN 1
#define OUT 0

void main(){
	int c,nl,nw,nc,state;
	state=OUT;
	nl=nc=nw=0;

	while((c=getchar())!=EOF){
	    ++nc;
	    if(c=='\n')
		    ++nl;

	    if(c==' ' || c=='\n' || c=='\t')
		    state=OUT;
	    else if(state == OUT){
		    state == IN;
		    ++nl;
		 }
	}
	
	printf("%d %d %d\n",nl,nw,nc);
}
