#include <stdio.h>

int main(){
    char a[]="a";
    const char *b="b"; /* to avoid any segmentation fault later, the constant will generate error at compile time 
			 if we try to change an object in read-only static memory*/

    printf("&a: %p\n",&a);
    printf("b: %p\n",b);
    printf("&b: %p\n",&b);

}
