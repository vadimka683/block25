cmake_minimum_required (VERSION 3.8)

if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(task2 main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp ${MY_INCLUDE_DIR}/task2.h ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h)
target_include_directories(task2 PUBLIC ${MY_INCLUDE_DIR})
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task2 PROPERTY CXX_STANDARD 20)
endif()

