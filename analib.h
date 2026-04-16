// -------------- Details --------------
//
// Name    : Analib
// Version : 0.1.0
//
// Author  : Simon Danielsson
// Email   : contact@simondanielsson.se
// Website : https://www.simondanielsson.se/
//
// ------------ Description ------------
//
// This library was built to contain most of the common utilities I need for
// building programs in C. I have chosen not to constrain the library to any
// specific function or theme - my goal is instead to have a single header file
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

#ifndef ANALIB_DEF
#define ANALIB_DEF
#endif // ANALIB_DEF

// an assert that doesn't abort continued execution of your program if false
#define analib_assert_cont(cond)                                               \
  do {                                                                         \
    if (!(cond)) {                                                             \
      fprintf(stderr, "FAILED ASSERT: %s (%s:%d)\n", #cond, __FILE__,          \
              __LINE__);                                                       \
    }                                                                          \
  } while (0)

ANALIB_DEF int add(int x, int y);

#endif // ANALIB_H_

#ifdef ANALIB_IMPLEMENTATION

ANALIB_DEF int add(int x, int y) { return x + y; }

#endif // ANALIB_IMPLEMENTATION
