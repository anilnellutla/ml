#include <time.h>

#define NN_IMPLEMENTATION
#include "nn.h"

int main(void) {
    srand(time(0));
    Mat a = mat_alloc(1, 2);
    mat_rand(a, 5, 10);

    float id_data[4] = {
        1, 0,
        0, 1
    };

    // Mat b = mat_alloc(2, 2);
    Mat b = {.rows = 2, .cols = 2, .es = id_data};
    mat_fill(b, 1);

    Mat dst = mat_alloc(1, 2);

    mat_print(a);
    printf("----------------------\n");
    mat_dot(dst, a, b);

    mat_print(dst );

    return 0;
}