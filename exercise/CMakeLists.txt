cmake_minimum_required(VERSION 3.22)
set(This exercise)

set(Sources src/main.cpp)

add_executable(${This} ${Sources})
set_target_properties(${This} PROPERTIES FOLDER Applications)

target_link_libraries(${This} PUBLIC
    LuaLibrary
)

target_link_libraries(${This} PRIVATE
    -static-libstdc++
)
