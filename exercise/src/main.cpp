#include <stdio.h>
#include <stdlib.h>
#include <string>

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

int main(int argc, char* argv[]) {
    printf("Hello world");
    return EXIT_SUCCESS;
}
