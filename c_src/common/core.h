#pragma once

#include <stddef.h>
#include <stdio.h>

#define CALLOC(result, type, number) \
  (result) = (type*)calloc((number), sizeof(type))

#define REALLOC(result, type, number) \
  (result) = (type*)realloc((result), sizeof(type) * (number))

#define FREE(result) \
  do {               \
    free(result);    \
    result = NULL;   \
  } while (0)

#define nullpo_ret(result, target) \
  if (!(target)) return (result)

int main(int, char**);
unsigned int getTicks(void);
void set_termfunc(void (*termfunc)(void));
static void sig_proc(int);
int set_default_input(int (*func)(char*));
int default_parse_input(char*);
int do_init(int, char**);