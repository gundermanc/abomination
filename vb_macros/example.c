/**
 * example.c
 * (C) 2014 Christian Gunderman
 * Modified by:
 * Author Email: gundermanc@gmail.com
 * Modifier Email:
 *
 * Description:
 * An example program written with the Macros.
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

#include "abomination.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * Reads input from the console
 */
Private Function Boolean GetInput(Character Array input, Integer maxInputLength) Begin
  If fgets(input, maxInputLength, stdin) == Nothing Then Begin
    Return False;
  Else
    Return True;
  End
End

/**
 * Program Entry point written in Abomination Macros.
 */
Function Integer EntryPoint(Integer numberOfArgs, Character ByRef argsArray[]) Begin
  Constant Integer maxInputLength = 115;
  Constant Integer path = 2;
  Character Array input = Allocate(maxInputLength, Character Array);
  Integer i = 0;

  PrintFormat("Hello world, what is your name?\n");

  If GetInput(input, maxInputLength) Then Begin
    PrintFormat("Nice to meet you %s\n", input);
  Else
    PrintFormat("Error!");
    Goodbye;
  End

  Switch path These Begin
    Case 0:
      PrintFormat("path = 0\n");
      Break;
    Case 1:
      PrintFormat("path = 1\n");
      Break;
    Default:
      PrintFormat("path = something else\n"); 
  End

  For i = 0; i < 10; i++ This Begin
    PrintFormat("Another time\n");
  End

  While False This Begin
    PrintFormat("Won't happen.");
  End

  FreeAlloc(input);
End
