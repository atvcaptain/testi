#ifndef __MAIN_H__
#define __MAIN_H__

#include <sys/stat.h>
#include <stdio.h>

int init_framebuffer(int steps);
void close_framebuffer();
int show_main_window();
void set_step_progress(int percent);
void set_step_text(char* str);

#endif