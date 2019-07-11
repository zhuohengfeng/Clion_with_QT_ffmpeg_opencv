cmake_minimum_required(VERSION 3.13)

# 指定项目的名称
project(Clion_with_QT_ffmpeg_opencv)

# 设置支持C++11
set(CMAKE_CXX_STANDARD 11)

# 设置C++ FLAGS
set(CMAKE_CXX_FLAGS "-g -Wall")

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "/Users/hengfeng/tools/Qt5.9.8/5.9.8/clang_64/lib/cmake")

#----------FFMPEG START-------
set(FFMPEG_PATH "/usr/local/Cellar/ffmpeg/4.1.1")
INCLUDE_DIRECTORIES(${FFMPEG_PATH}/include)
LINK_DIRECTORIES(${FFMPEG_PATH}/lib)
#----------FFMPEG END---------

#----------OpenCV START-------
find_package(OpenCV REQUIRED)
# Add OpenCV headers location to your include paths
include_directories(${OpenCV_INCLUDE_DIRS})
#----------OpenCV END---------

#----------QT START-------
#打开Qt的MOC功能和UI文件处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

#----------QT END---------




#我们可以通过 SET 指令重新定义 EXECUTABLE_OUTPUT_PATH 和 LIBRARY_OUTPUT_PATH 变量来指定最终的目标二进制的位置(指最终生成的CRNode可执行文件或者最终的共享库，而不包含编译生成的中间文件)。
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_executable(Clion_with_QT_ffmpeg_opencv main.cpp  mainwindow.cpp)


TARGET_LINK_LIBRARIES(Clion_with_QT_ffmpeg_opencv
        avcodec avdevice avfilter avformat avresample avutil postproc swresample swscale
        Qt5::Core Qt5::Widgets
        ${OpenCV_LIBS} )