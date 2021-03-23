#include <X11/Xlib.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "keys.h"

int startswith(char* content, char* query) {
    int code;
    for (int i = 0; i < strlen(query); i++) {
        //printf("%c vs %c\n", content[i], query[i]);
        if (content[i] != query[i]) {
            code = 1;
            //printf("%c != %c\n", content[i], query[i]);
        }
    }
    if (code = 1) return 1;
    else return 0;
}

int launch_program(Display* d, Window w, XEvent e, int s) {
   const char *msg = "Welcome";
   d = XOpenDisplay(NULL);
   if (d == NULL) {
      fprintf(stderr, "Cannot open display\n");
      exit(1);
   }
 
   s = DefaultScreen(d);
   
   w = XCreateSimpleWindow(d, RootWindow(d, s), 100, 100, 1000, 500, 1, BlackPixel(d, s), WhitePixel(d, s));
   XSelectInput(d, w, ExposureMask | KeyPressMask);
   XMapWindow(d, w);
 
   while (1) {
      XNextEvent(d, &e);
      if (e.type == Expose) {
         //XFillRectangle(d, w, DefaultGC(d, s), 500, 200, 100, 100);
         XDrawRectangle(d, w, DefaultGC(d, s), 420, 50, 200, 100);
         XDrawString(d, w, DefaultGC(d, s), 500, 100, msg, strlen(msg));
      }
      if (e.type == KeyPress) {
          int KERNING;
          int count;
          int newline;
          int enter_count;
          if (enter_count == 0 || enter_count == '\0') newline = 200; KERNING + 7;
          switch (e.xkey.keycode) {
              case ALPHA_A:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "a", 1);
              break;
              case ALPHA_B:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "b", 1);
              break;
              case ALPHA_C:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "c", 1);
              break;
              case ALPHA_D:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "d", 1);
              break;
              case ALPHA_E:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "e", 1);
              break;
              case ALPHA_F:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "f", 1);
              break;
              case ALPHA_G:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "g", 1);
              break;
              case ALPHA_H:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "h", 1);
              break;
              case ALPHA_I:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "i", 1);
              break;
              case ALPHA_J:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "j", 1);
              break;
              case ALPHA_K:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "k", 1);
              break;
              case ALPHA_L:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "l", 1);
              break;
              case ALPHA_M:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "m", 1);
              break;
              case ALPHA_N:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "n", 1);
              break;
              case ALPHA_O:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "o", 1);
              break;
              case ALPHA_P:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "P", 1);
              break;
              case ALPHA_Q:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "q", 1);
              break;
              case ALPHA_R:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "r", 1);
              break;
              case ALPHA_S:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "s", 1);
              break;
              case ALPHA_T:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "t", 1);
              break;
              case ALPHA_U:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "e", 1);
              break;
              case ALPHA_V:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "v", 1);
              break;
              case ALPHA_W:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "w", 1);
              break;
              case ALPHA_X:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "x", 1);
              break;
              case ALPHA_Y:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "y", 1);
              break;
              case ALPHA_Z:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, "z", 1);
              break;
              case SPACE_BAR:
                count = count + 1;
                if (count == 1) KERNING = 120;
                else KERNING = KERNING + 7;
                XDrawString(d, w, DefaultGC(d, s), KERNING, newline, " ", 1);
              break;
              case ENTER_KEY:
                KERNING = 120;
                enter_count = enter_count + 1;
                newline = newline + 15;
              break;
              case CONTROL_KEY:
                XDrawString(d, w, DefaultGC(d, s), 100, 100, "Enter commands here, exit with ctrl", 36);
              break;
            }
           printf("%d and %d on %d\n", KERNING, count, e.xkey.keycode);
      }
   }
 
   XCloseDisplay(d);
}

int main(void) {
   Display *d;
   Window w;
   XEvent e;
   int s;

   launch_program(d, w, e, s);

   return 0;
}
//gcc main.c -L/usr/X11R6/lib -lX11 -o main
