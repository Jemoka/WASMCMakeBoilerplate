set(project "TestWASM")

project(${project})
cmake_minimum_required(VERSION 3.12)

# set sources
set(src 
   test.cpp
)

# specify the executable
add_executable(${project} ${src})


set(exports 
   _fib
 )

# process exported functions
set(exports_string "")
list(JOIN exports "," exports_string)

# set compiler and flags

set_target_properties(${project} PROPERTIES LINK_FLAGS "-s WASM=1 -s EXPORTED_FUNCTIONS='[${exports_string}]'")


