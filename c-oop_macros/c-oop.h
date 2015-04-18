/**
 * coop.h
 * (C) 2014 Christian Gunderman
 * Modified by:
 * Author Email: gundermanc@gmail.com
 * Modifier Email:
 *
 * Description:
 * Macros for simulating Object oriented programming with C structs.
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

#include <stdlib.h>

#ifndef COOP__H__
#define COOP__H__

#define spec(spec_name, spec_vars, spec_functions) \
  typedef struct { spec_vars } spec_name; \
  typedef spec_name * P ## spec_name ; \
  spec_functions

#define subroutine(spec_name, subroutine_name, ...) \
  void spec_name ## subroutine_name(P ## spec_name this, __VA_ARGS__)
  
#define subroutine_min(spec_name, subroutine_name) \
  void spec_name ## subroutine_name(P ## spec_name this)

#define function_min(spec_name, function_type, function_name) \
  function_type spec_name ## function_name(P ## spec_name this)

#define function(spec_name, function_type, function_name, ...) \
  function_type spec_name ## function_name(P ## spec_name this, __VA_ARGS__)

#define constructor(spec_name, ...) \
  function(spec_name, P ## spec_name, constructor, __VA_ARGS__) \

  
#define alloc(spec_name) ((spec_name *)malloc(sizeof(spec_name)))

#define init(spec_name, obj_name, ...) spec_name ## constructor(obj_name, __VA_ARGS__)

#define alloc_init(spec_name, ...) init(spec_name, alloc(spec_name), __VA_ARGS__)
// The delete operator.
#define delete(spec_name) (free(spec_name))

// The reference/dereference operators.
#define ref(spec_name)  (&spec_name)
#define deref(spec_name) (*spec_name)

#define member(spec_name, obj_name, member, ...) (spec_name ## member(obj_name, __VA_ARGS__))

#define spec_func_min(spec_name, obj_name, member) (spec_name ## member(obj_name))

#define spec_func(spec_name, obj_name, member, ...) (spec_name ## member(obj_name, __VA_ARGS__))

#endif // COOP__H__