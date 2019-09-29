project(lab1)

add_executable(oop_exercise_01
  main.cpp
  fraction.cpp)

set(CMAKE_CXX_FLAGS
	"${CMAKE_CXX_FLAGS} -Wall -Wextra")
