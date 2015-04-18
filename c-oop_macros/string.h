
#include "c-oop.h"
#include <string.h>

spec(String,
     
     char *string;
     int length;,
     
     constructor(String, char *text) {
       this->length = strlen(text);
       this->string = malloc(this->length + 1);
       strcpy(this->string, text);
       this->string[this->length] = 0;
       
       return this;
     }
     
     function_min(String, char *, getCString) {
       return this->string;
     }
     
     function_min(String, int, length) {
       return this->length;
     }
     
     subroutine(String, append, char *string) {
       this->length = this->length + strlen(string) + 1;
       char *tmp = malloc(this->length);
       strcpy(tmp, this->string);
       strcat(tmp, string);
       free(this->string);
       this->string = tmp;
     }
     
     subroutine(String, appendString, PString string) {
       spec_func(String, this, append, string->string);
     }
)