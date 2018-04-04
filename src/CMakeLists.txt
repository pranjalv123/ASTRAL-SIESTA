cmake_minimum_required (VERSION 2.6)
project (ASTRAL-SIESTA)

file(GLOB SOURCES *.cpp)

add_definitions(-std=c++14 -g -O3 -Wall)

add_executable(ASTRAL-SIESTA ${SOURCES} astral-siesta.cpp)
target_link_libraries(ASTRAL-SIESTA phylokit phylonaut)

INCLUDE_DIRECTORIES("boost/" )
install(TARGETS ASTRAL-SIESTA
		RUNTIME DESTINATION bin)
