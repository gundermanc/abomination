/**
 * abomination.h
 * (C) 2014 Christian Gunderman
 * Modified by:
 * Author Email: gundermanc@gmail.com
 * Modifier Email:
 *
 * Description:
 * Visual basic like macros for C. Created this project because I was bored.
 * If you ACTUALLY use this, you should probably cover your mouth with one hand
 * and your nose with another and hold it that way until things go dark ;)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ABOMINATION__H__
#define ABOMINATION__H__

#include "stdlib.h"

#define Break         break
#define Case          case
#define Character     char
#define DoubleFloat   double
#define Constant      const
#define Continue      continue
#define Default       default
#define Do            do
#define This          )
#define These         This
#define Else          } else {
#define Enumeration   enum
#define External      extern
#define SingleFloat   float
#define For           for(
#define Goto          goto
#define If            if(
#define Then          )
#define Integer       int
#define LongInteger   long
#define Register      register
#define Return        return
#define ShortInteger  short
#define Signed        signed
#define SizeOf        sizeof
#define Static        static
#define Private       static
#define Structure     struct
#define Switch        switch(
#define NewType       typedef
#define TypeUnion     union
#define Unsigned      unsigned
#define NoReturn      void
#define Volatile      volatile
#define While         while(
#define Nothing       NULL
#define Boolean       Integer
#define True          (int)1
#define False         (int)0
#define Function      /* defined as nothing, just there for looks */
#define EntryPoint    main
#define ByRef         *
#define Array         ByRef
#define Begin         {
#define End           }
#define GenericPointer (void*)
#define ToType(var, type)  ((type)var)  /* this is how we do typecasts */
#define Allocate(size, type)     ((type) malloc(size))
#define FreeAlloc     free
#define PrintFormat   printf
#define Goodbye       exit(0)
#endif  /* ABOMINATION__H__ */
