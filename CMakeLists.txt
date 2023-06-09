cmake_minimum_required(VERSION 3.22)
project(rlos-cpp-lua VERSION 1.0.0 DESCRIPTION "rlos exercise 2 submission" LANGUAGES C CXX)

add_library(
    LuaLibrary STATIC
    lua/lapi.c
    lua/lauxlib.c
    lua/lbaselib.c
    lua/lcode.c
    lua/lcorolib.c
    lua/lctype.c
    lua/ldblib.c
    lua/ldebug.c
    lua/ldo.c
    lua/ldump.c
    lua/lfunc.c
    lua/lgc.c
    lua/linit.c
    lua/liolib.c
    lua/llex.c
    lua/lmathlib.c
    lua/lmem.c
    lua/loadlib.c
    lua/lobject.c
    lua/lopcodes.c
    lua/loslib.c
    lua/lparser.c
    lua/lstate.c
    lua/lstring.c
    lua/lstrlib.c
    lua/ltable.c
    lua/ltablib.c
    lua/ltm.c
    lua/lua.c
    lua/lundump.c
    lua/lutf8lib.c
    lua/lvm.c
    lua/lzio.c
)

set_target_properties(LuaLibrary PROPERTIES FOLDER Libraries/lua)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_SKIP_BUILD_RPATH FALSE)
set(CMAKE_DEBUG_POSTFIX "")

add_subdirectory(exercise)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
