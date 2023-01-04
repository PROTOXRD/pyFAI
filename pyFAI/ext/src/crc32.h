/*
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include <stdio.h>
#include <stdint.h>

#ifdef __GNUC__
#define PYFAI_VISIBILITY_HIDDEN __attribute__((visibility("hidden")))
#else
#define PYFAI_VISIBILITY_HIDDEN
#endif

PYFAI_VISIBILITY_HIDDEN uint32_t _get_crc32_table_key();
PYFAI_VISIBILITY_HIDDEN int8_t _is_crc32_sse4_available();
PYFAI_VISIBILITY_HIDDEN int8_t _check_sse4();
PYFAI_VISIBILITY_HIDDEN void _get_crc32_table(uint32_t *table);
PYFAI_VISIBILITY_HIDDEN void _crc32_table_init(uint32_t key);
PYFAI_VISIBILITY_HIDDEN uint32_t _crc32_table(char *str, uint32_t len);
PYFAI_VISIBILITY_HIDDEN uint32_t _crc32_sse4(char *str, uint32_t len);
PYFAI_VISIBILITY_HIDDEN uint32_t pyFAI_crc32(char *str, uint32_t len);
