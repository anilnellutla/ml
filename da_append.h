#define da_append(xs, x)\
    do {\
        if(xs.count >= xs.capacity) {\
            if (xs.capacity == 0) {\
                xs.capacity = 256;\
            } else {\
                xs.capacity *= 2;\
            }\
            xs.items = realloc(xs.items, xs.capacity*sizeof(xs.items[0]));\
        }\
        xs.items[xs.count++] = x;\
    }while(0)