/**
 * @file        c_cpp/samples/file_io/main.c
 * @brief       Example how to do with file.
 * @mainpage    Template project #1.
 *
 * @copyright   Copyright (c) 2018. All Rights Reserved.
 * @author      Taras Drozdovskyi t.drozdovskiy@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @todo
 * @bug   No know bugs.
 */

/* Included Files. */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Pre-processor Definitions. */
/* All C pre-processor macros are defined here. */


/* Private Types. */
/* Any types, enums, structures or unions used by the file are defined here. */


/* Private Function Prototypes. */
/* Prototypes of all static functions in the file are provided here. */


/* Private Data. */
/* All static data definitions appear here. */


/* Public Data. */
/* All data definitions with global scope appear here. */

/* Private Functions. */

/**
 * @brief         <Static function name> - Description of the operation
 *                of the static function.
 *
 * @param value   [in]/[out] A list of input parameters, one-per-line,
 *                appears here along with a description of each input
 *                parameter.
 *
 * @returns       Description of the value returned by this function
 *                (if any), including an enumeration of all possible
 *                error values.
 */

/* All static functions in the file are defined in this grouping. Each is
 * preceded by a function header similar to the above.
 */

/* Public Functions. */

/**
 * @brief         <Function name > - Description of the operation of
 *                the static function.
 *
 * @param value   [in]/[out] A list of input parameters, one-per-line,
 *                appears here along with a description of each input
 *                parameter.
 *
 * @returns       Description of the value returned by this function
 *                (if any), including an enumeration of all possible
 *                error values.
 */

/* All global functions in the file are defined here. */

int main(int argc, char *argv[])
{
  FILE *fd;
  unsigned char *buffer = NULL;

  if (argc == 1) {
    fprintf(stderr,"%s: No file given\n", argv[0]);
    return -1;
  }

  if ((fd = fopen(argv[1], "rb")) == NULL) {
    fprintf(stderr, "Open file %s is fail, %s\n", argv[1], strerror(errno));
    return -1;
  }

  /* Get file size */
  if (fseek(fd, 0, SEEK_END) != 0) {
    fprintf(stderr, "Unable to get '%s' file size, '%s'", argv[1], strerror(errno));
    goto fail;
  }

  size_t size = ftell(fd);

  buffer = malloc(size);
  if (buffer == NULL){
    fprintf(stderr, "Allocation buffer is fail. Request size is = %ld bytes\n", size);
    goto fail;
  }
  rewind(fd);

  /* Read file contents to the buffer */
  if (size != fread(buffer, 1, size, fd)) {
    fprintf(stderr, "Read from file '%s' is fail, %s\n", argv[1], strerror(errno));
  }
  else

fail:
  fclose(fd);

  return 0;
}

