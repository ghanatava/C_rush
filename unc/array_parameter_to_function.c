#include <stdio.h>
#include <stdint.h>

int64_t sum(int64_t *xs,size_t len);

int main(){
    int64_t nums[] = {1,2,3,4,5};
    size_t len_nums=sizeof(nums)/sizeof(int64_t);

    int64_t total = sum(nums,len_nums);
    printf("%ld\n",total);
}

int64_t sum(int64_t *xs,size_t len){
    int64_t result=0;
    while(len -- >0){
        result+=*xs;
	xs++;
    }
    return result;
}



