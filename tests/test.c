#include <assert.h>

#define ANALIB_IMPLEMENTATION
#include "../analib.h"

int main(void) {
    assert(add(6, 6) == 12);
    return 0;
}
