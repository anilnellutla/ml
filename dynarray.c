#include <stdio.h>
#include <stdlib.h>
#include "da_append.h"

typedef struct 
{
    int *items;
    size_t count;
    size_t capacity;
} Numbers;

int main(void) {
    Numbers xs = {0};
    for(int x = 0; x < 10; ++x) {
        // if(xs.count >= xs.capacity) {
        //     if (xs.capacity == 0) {
        //         xs.capacity = 256;
        //     } else {
        //         xs.capacity *= 2;
        //     }
        //     xs.items = realloc(xs.items, xs.capacity*sizeof(xs.items[0]));
        // }
        // xs.items[xs.count++] = x;
        da_append(xs, x);
    }
    for(int x = 0; x < xs.count; ++x) printf("%d\n", xs.items[x]);
    return 0;
}