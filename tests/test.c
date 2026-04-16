#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define ANALIB_IMPLEMENTATION
#include "../analib.h"

typedef struct {
    char *pnt;
} AnaStr;

AnaStr analib_str_new(const char *s) {
    AnaStr result = {0};
    if (s) {
        result.pnt = strdup(s);
    }
    return result;
}

// to lowercase
void analib_str_lower(AnaStr *s) {
    if (!s || !s->pnt)
        return;
    for (int i = 0; s->pnt[i] != '\0'; i++) {
        s->pnt[i] = tolower((unsigned char)s->pnt[i]);
    }
}

// to uppercase
void analib_str_upper(AnaStr *s) {
    if (!s || !s->pnt)
        return;
    for (int i = 0; s->pnt[i] != '\0'; i++) {
        s->pnt[i] = toupper((unsigned char)s->pnt[i]);
    }
}

// append analib strings to eachother
void analib_str_app(AnaStr *a, AnaStr *b_append) {}

char *analib_str_char(AnaStr *s) { return s->pnt; }

int main(void) {
    // assert(add(6, 6) == 12);
    AnaStr str = analib_str_new("hello");
    analib_str_lower(&str);
    printf("%s\n", analib_str_char(&str));
    analib_str_upper(&str);
    printf("%s\n", analib_str_char(&str));
    return 0;
}
