#ifndef VEC_H
#define VEC_H

#include <stdlib.h>
 /**
  * Vec a dynamically growable array of any type
  */

/**
 * The vec struct is a "thick pointer".
 * Users of Vec should not access these members directly
 * Instead use the operations exposed to the functions given below
 */

typedef struct Vec{
    const size_t item_size;  //size of array in bytes 
    size_t length;          //number of items in vec
    size_t capacity;       //number of items buffer can store
    void *buffer;         //heap memory storing items
}Vec;

//Constructor / Destructor

/**
 * Construct a vec value.Owner is responsible for calling 
 * Vecdrop when its lifetime expires
 *
 * @param capacity - initial number of items it can store.
 * @param item_size- size of an individual item.
 * @return initialised vec value.
 */

Vec Vec_val(size_t capacity,size_t item_size);

/**
 * Owner must call to expire a Vec value's life time
 * Frees any heap memory the Vec owns
 * Resets length capacity to zero, buffer to NULL
 */

void Vec_drop(Vec *self);

/*Accessors*/

/**
 * Returns number of items in a Vec
 */

size_t Vec_len(const Vec *self);
/**
 * Returns a pointer to items array _for readingonly_
 * You should noot write to returned memory directly
 * */

const void* Vec_items(const Vec *self);

/*Operations*/

/**
 * Get a pointer to the item at 'index'.You may
 *write to this reference but not beyond it.
 **/

void* Vec_ref(const Vec *self,size_t index);
/**
 * Copy the item at index to the memory of out
 * */

void Vec_get(const Vec *self,size_t index, void *out);
 /**
  * Assign an item at index to be a copy of value 
  * Valid indices include 0-length. When the index
  * is equal to length,the item is appended to Vec
  * */

void Vec_set(Vec *self, size_t index,const void *value);
#endif
