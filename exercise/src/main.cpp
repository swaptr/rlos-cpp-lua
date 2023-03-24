#include <stdlib.h>

extern "C"
{
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

namespace
{
    void HelloFromLua(lua_State *lua)
    {
        // Execute print statement with the string
        luaL_dostring(lua, "print('Swapnil says hello')");
    }

    void PassIntToLua(lua_State *lua, int number)
    {
        // Push integer value onto the stack
        lua_pushinteger(lua, number);
        // Set a global variable in the current environment
        lua_setglobal(lua, "number");
        // Display its value
        luaL_dostring(lua, "print('Value of number: ' .. tostring(number))");
    }

    int ChangeIntInLua(lua_State *lua, int number)
    {
        // Push integer value onto the stack
        lua_pushinteger(lua, number);
        // Set a global variable in the current environment
        lua_setglobal(lua, "number");

        // Execute command to print its value
        luaL_dostring(lua, "print('Original value: ' .. tostring(number))");
        // Change the value of the variable
        luaL_dostring(lua, "number = 10");
        // Retrieve the global variable from the state
        lua_getglobal(lua, "number");
        // Returns the integer value
        number = lua_tointeger(lua, -1);

        lua_pop(lua, 1);
        return number;
    }
}

int main(int argc, char *argv[])
{
    // Create the lua object
    lua_State *lua = luaL_newstate();

    // Load Lua STL into state
    luaL_openlibs(lua);

    HelloFromLua(lua);

    // Declare a variable which will be print from Lua
    int number = 5;
    PassIntToLua(lua, number);

    int x = ChangeIntInLua(lua, number);
    printf("New value: %d\n", x);

    // Destroy all objects in the Lua state; Clean up
    lua_close(lua);

    return EXIT_SUCCESS;
}
