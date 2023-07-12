#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/Guards.h"
#include "../include/Vec.h"

static void _ensure_capacity(Vec *self,size_t n);

/*Constructor/Destructor*/

Vec Vec_val(size_t capacity,size_t item_size){
    Vec vec={
        item_size,
	0,
	capacity,
	calloc(capacity,item_size)
    };
    OOM_GUARD(vec.buffer,__FILE__,__LINE__);
    return vec;
}

void Vec_drop(Vec *self){
    free(self->buffer);
    self->buffer=NULL;
    self->capacity=0;
    self->length=0;
}

/*Accessor*/

size_t Vec_len(const Vec *self){
    return self->length;
}

const void* Vec_items(const Vec *self){
    return self->buffer;
}
/*Operations*/

void* Vec_ref(const Vec *self,size_t index){
    return self->buffer + (index*self->item_size);
}

void Vec_get(const Vec *self,size_t index,void *out){
    memcpy(out,Vec_ref(self,index),self->item_size);    
}

void Vec_set(Vec *self,size_t index,const void *value){
    _ensure_capacity(self,index+1);
    memcpy(Vec_ref(self,index),value,self->item_size);
    if(index>self->length){
        self->length=index+1;
    }
}

static void _ensure_capacity(Vec *self,size_t n){
    if(n>self->capacity){
        size_t new_capacity=n*2;
	self->buffer=realloc(self->buffer,new_capacity*self->item_size);
    }
}





