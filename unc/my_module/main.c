#include <stdlib.h>
#include <stdio.h>
#include "Point.h"

void *OOM_GUARD(void *p);

int main(){
    Point *a = malloc(sizeof(Point));
    OOM_GUARD(a);
    *a=Point_val(1.0,2.0);
    Point_print(a);
    Point b = Point_val(10.0,20.0);
    Point_offset(a,&b);
    Point_print(a);
    free(a);
}

void *OOM_GUARD(void *p){
    if(p==NULL){
        fprintf(stderr,"out of memory");
	exit(EXIT_FAILURE);
    }
    return p;
}

