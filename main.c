/*
to compile:
gcc -o find main.c
to run:
./find [search-term] [file]
IMPORTANT:
note that this program will not create files :(
*/
#include <stdio.h>
#include <string.h>
int main(int amount_of_args,char *all_args[]) {
  char current_line[101];
  int line = 1;
  char *string;
  if (*(all_args + 1) && *(all_args + 2)) {
    FILE *point_to_file = fopen(*(all_args + 2),"r");
    while (fgets(current_line, 100, point_to_file)) {
      if (string = strstr(current_line, *(all_args + 1))) {
        fprintf(stdout,"Character found on line %i:\n%s\n",line,current_line);
      }
      line++;
    }
    fclose(point_to_file);
  }
  else {
    fprintf(stderr, "\nYOU NEED TO ENTER TWO ARGUMENTS!\n");
    return 1;
  }
  return 0;
} 
