#include <ncurses.h>
#include <time.h>
#include <unistd.h>
int rows;
int cols;
void display() {
     time_t rawtime;
     struct tm *timeinfo;
     time(&rawtime);
     timeinfo = localtime(&rawtime);
     move(0, (cols / 2) - sizeof(timeinfo) - 1);
     printw("%s ", asctime(timeinfo));
     refresh();
}
int main() {
     initscr();
     getmaxyx(stdscr, rows, cols);
     start_color();
     curs_set(0);
     use_default_colors();
     init_pair(1, COLOR_BLACK, COLOR_GREEN);
     move(0, cols / 2);
     attron(COLOR_PAIR(1));
     while (1) {
          display();
          sleep(1);
     }
     attroff(COLOR_PAIR(1));

     return 0;
}
