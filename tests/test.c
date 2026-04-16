#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define ANALIB_IMPLEMENTATION
#include "../analib.h"

int main(void) {
    char s[] = "hello";
    printf("%d\n", AL_str_get_size(s));
    // printf("%d\n", al_min_int(5, 12));
    return 0;
}
