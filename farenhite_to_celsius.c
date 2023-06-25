#include <stdio.h>
#define LOWER 0 
#define UPPER 300
#define STEP 20




void main(){

	float farh;

	for(farh=LOWER;farh<=UPPER;farh+=STEP){
		printf("%3.0f\t%6.1f\n",farh,(5.0/9.0)*(farh-32.0));
	}
}
