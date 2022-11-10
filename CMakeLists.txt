cmake_minimum_required (VERSION 3.8)
project(CppGame VERSION 1.0)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CppGame)
set (CMAKE_CXX_STANDARD 20)
file(GLOB_RECURSE SOURCE "Source/*.*")

include_directories(${PROJECT_SOURCE_DIR}/Library/SDL2-2.0.12/include)
set(SDL2_LIBRARIES "${PROJECT_SOURCE_DIR}/Library/SDL2-2.0.12/lib/x64/SDL2.lib")

include_directories(${PROJECT_SOURCE_DIR}/Library/SDL2_image-2.0.5/include)
set(SDL2_IMAGE_LIBRARIES "${PROJECT_SOURCE_DIR}/Library/SDL2_image-2.0.5/lib/x64/SDL2_image.lib")

add_executable(CppGame ${SOURCE})

target_link_libraries(CppGame ${SDL2_IMAGE_LIBRARIES})
target_link_libraries(CppGame ${SDL2_LIBRARIES})


