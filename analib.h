// -------------- Details --------------
//
// Name    : Analib
// Version : 0.1.1
//
// Author  : Simon Danielsson
// Email   : contact@simondanielsson.se
// Website : https://www.simondanielsson.se/
//
// ------------ Description ------------
//
// This library was built to contain most of the common utilities I need for
// building programs in C. I have chosen not to constrain the library to any
// specific utility or theme - my goal is instead to have a single header file
// filled with everything I need, that I can copy into my projects as an easy
// default. Analib is a highly opinionated and personal library catered only to
// myself, and myself only.
//
// -------------- License --------------
//
// Copyright © 2026 Simon Danielsson
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files, to deal in the Software
// without restriction, including without limitation the rights to use, copy,
// modify, merge, publish, distribute, sublicense, and/or sell copies of the
// Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef ANALIB_H_
#define ANALIB_H_

#include <stdlib.h>
#include <time.h>

#ifndef ANALIB_DEF
#define ANALIB_DEF
#endif // ANALIB_DEF

// DEFINITIONS: DEBUG
// =============================================================================

// assert that doesn't abort continued execution if false
#define AL_db_assert(cond)                                                     \
  do {                                                                         \
    if (!(cond)) {                                                             \
      fprintf(stderr, "ASSERT FALSE: %s (%s:%d)\n", #cond, __FILE__,           \
              __LINE__);                                                       \
    }                                                                          \
  } while (0)

// formatted log message with file, line and date
ANALIB_DEF void AL_db_log(const char *msg);

// DEFINITIONS: INTEGERS
// =============================================================================

// compare two integers and return the bigger one
ANALIB_DEF int AL_int_max(int a, int b);
// compare two integers and return the smaller one
ANALIB_DEF int AL_int_min(int a, int b);

// DEFINITIONS: STRINGS
// =============================================================================

// get length of str
ANALIB_DEF int AL_str_get_size(char *s);

#endif // ANALIB_H_
#ifdef ANALIB_IMPLEMENTATION

// IMPLEMENTATIONS: DEBUG
// =============================================================================

ANALIB_DEF void AL_db_log(const char *msg) {
  time_t now = time(NULL);
  struct tm *t = localtime(&now);

  char date[24];
  snprintf(date, sizeof(date), "%02d-%02d-%d %02d:%02d:%02d", t->tm_mday,
           t->tm_mon + 1, t->tm_year + 1900, t->tm_hour, t->tm_min, t->tm_sec);

  char header[64];
  int header_len = snprintf(header, sizeof(header), "----- %s:%d [%s] -----\n",
                            __FILE_NAME__, __LINE__, date);

  char div[header_len];
  memset(div, '-', header_len);
  div[header_len - 1] = '\0';

  fprintf(stdout, "%s%s\n%s\n", header, msg, div);
}

// IMPLEMENTATIONS: INTEGERS
// =============================================================================

ANALIB_DEF int AL_int_min(int a, int b) { return a < b ? a : b; }

ANALIB_DEF int AL_int_max(int a, int b) { return a > b ? a : b; }

// IMPLEMENTATIONS: STRINGS
// =============================================================================

ANALIB_DEF int AL_str_get_size(char *s) {
  char *t;
  for (t = s; *t != '\0'; t++)
    ;
  return t - s;
}

#endif // ANALIB_IMPLEMENTATION
