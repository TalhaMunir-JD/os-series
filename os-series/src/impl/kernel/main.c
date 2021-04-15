#include "print.h"
void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("ssssssssss  eeeeeeeee  eeeeeeeee  cccccccccccc  ssssssssss \n");
    print_str("s           e          e          c             s \n");
    print_str("s           e          e          c             s \n");
    print_str("ssssssssss  eeeeeeeee  eeeeeeeee  c             ssssssssss \n");
    print_str("         s  e          e          c                      s \n");
    print_str("         s  e          e          c                      s \n");
    print_str("ssssssssss  eeeeeeeee  eeeeeeeee  cccccccccccc  ssssssssss \n");
}