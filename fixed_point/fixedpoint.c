#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include "fixedpoint.h"
#include <math.h>

// You can remove this once all of the functions are fully implemented
static Fixedpoint DUMMY;

Fixedpoint fixedpoint_create(uint64_t whole) {
  DUMMY.whole = whole;
  DUMMY.frac = 0;
  DUMMY.tag = 0;
  return DUMMY;
}

Fixedpoint fixedpoint_create2(uint64_t whole, uint64_t frac) {
  DUMMY.whole = whole;
  DUMMY.frac = frac;
  DUMMY.tag = 0;
  return DUMMY;
}

Fixedpoint fixedpoint_create_from_hex(const char *hex) {
 int len = strlen(*hex);
  char whole[] = *hex;

  for (int i = 0; i < len; i++) {
    if (whole[i] == ".") {
      whole[i] = 0;
      break;
    }
  }
  char frac[] = *hex;
  for 
  //assert(0); 
  return DUMMY;
}

uint64_t fixedpoint_whole_part(Fixedpoint val) {
  assert(val.tag == 0 || val.tag == 1);
  return val.whole;
}

uint64_t fixedpoint_frac_part(Fixedpoint val) {
  assert(val.tag == 0 || val.tag == 1);
  return val.frac;
}

Fixedpoint fixedpoint_add(Fixedpoint left, Fixedpoint right) {
  // TODO: implement
  assert(0);
  return DUMMY;
}

Fixedpoint fixedpoint_sub(Fixedpoint left, Fixedpoint right) {
  // TODO: implement
  assert(0);
  return DUMMY;
}

Fixedpoint fixedpoint_negate(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return DUMMY;
}

Fixedpoint fixedpoint_halve(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return DUMMY;
}

Fixedpoint fixedpoint_double(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return DUMMY;
}

int fixedpoint_compare(Fixedpoint left, Fixedpoint right) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_zero(Fixedpoint val) {
  if (val.tag != 0) {
    return 0;
  }
  if (val.whole == 0 && val.frac == 0) {
    return 1;
  }
  return 0;
}

int fixedpoint_is_err(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_neg(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_overflow_neg(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_overflow_pos(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_underflow_neg(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_underflow_pos(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

int fixedpoint_is_valid(Fixedpoint val) {
  // TODO: implement
  assert(0);
  return 0;
}

char *fixedpoint_format_as_hex(Fixedpoint val) {
  // TODO: implement
  assert(0);
  char *s = malloc(20);
  strcpy(s, "<invalid>");
  return s;
}
