#include <stdbool.h>
#ifndef COMMAND_H
#define COMMAND_H

typedef struct{
  char *raw_string;
  char *args[20];
  int arg_count;
  enum {NONE, FILE_INP, FILE_OUT, FILE_IO} redirect ;
  char *file_out;
  char *file_in;
  bool pipe_to;
  bool pipe_from;
} command;

typedef struct{
  int stop_piping;
} flag_;

#endif // !COMMAND_H
