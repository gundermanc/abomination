
#include "c-oop.h"
#include "string.h"
#include <stdio.h>

int main(void) {
  // Create new string.
  PString string = alloc_init(String, "Hello");
  PString string2 = alloc_init(String, "friend");
  
  spec_func(String, string, appendString, string2);
  printf("%s", spec_func_min(String, string, getCString));
  delete(string);
}
