#include <stdio.h>

struct foo;

typedef void (*fun_t)(int);
typedef double *(*fun2_t)(short, long);

int main(void) {
    double *p = NULL;
    int *i = (int *) p;
    long **lp = (long **) p;
    void **pp = (void **) p;
    struct foo *sfp = (struct foo *) p;
    struct foo **sfpp = (struct foo **) p;
    struct foo ***sfppp = (struct foo ***) p;
    fun_t x = (fun_t) p;
    fun2_t x2 = (fun2_t) p;

    return 0;
}
