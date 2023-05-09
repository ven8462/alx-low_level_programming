#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void data(unsigned char *e_ident);
void class(unsigned char *e_ident);
void version(unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void entry(unsigned int e_entry, unsigned char *e_ident);
void osabi(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void verify(unsigned char *e_ident);

#endif
