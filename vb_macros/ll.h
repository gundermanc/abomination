/**
 * Generic Unioned Linked List - Abomination-ized
 * (C) 2013 Christian Gunderman
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as 
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see 
 * <http://www.gnu.org/licenses/>.
 *
 * Contact Email: gundermanc@gmail.com 
 */

#ifndef LL__H__
#define LL__H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LL_TAIL -1

NewType TypeUnion Begin
  DoubleFloat doubleVal;
  Integer intVal;
  GenericPointer voidVal;
End LLValue;

NewType Structure tagLLNode Begin
  GenericPointer nextNode;
  LLValue payload;
End LLNode;

NewType Structure tagLL Begin
  LLNode ByRef head;
  LLNode ByRef tail;
  Integer size;
End LL;

NewType Structure tagLLIterator Begin
  LL ByRef list;
  LLNode ByRef head;
  LLNode ByRef cursor;
  LLNode ByRef previous;
End LLIterator;

Function LL ByRef ll_new();
Function NoReturn ll_free(LL ByRef list);
Function NoReturn  ll_append(LL ByRef list, LLValue item);
Function Integer ll_size(LL ByRef list);
Function LLNode ByRef ll_get_node(LL ByRef list, Integer index);
Function NoReturn ll_iterator_get(LLIterator ByRef iteratorObject, LL ByRef list);
Function Boolean ll_iterator_pop(LLIterator ByRef iteratorObject, LLValue ByRef value);
Function Boolean ll_iterator_peek(LLIterator ByRef iteratorObject, LLValue ByRef value);
Function Boolean ll_iterator_has_next(LLIterator ByRef iteratorObject);
Function LLValue ll_iterator_remove(LLIterator ByRef iteratorObject);
Function NoReturn ll_append_double(LL ByRef list, DoubleFloat value);
Function NoReturn ll_append_void(LL ByRef list, GenericPointer value);
Function NoReturn ll_append_int(LL ByRef list, Integer value);

#endif /* LL__H__ */
