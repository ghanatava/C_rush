#include <stdio.h>
void main(){
    float farh,cels;
    int lower=0,upper=300,step=20;

    farh=lower;
    printf("%s   %s\n","farh","cels");
    for(farh;farh<upper;farh+=step){
        cels=(5/9)*(farh-32);
	printf("%3.0f %6.1f\n",farh,cels);
    }
}
