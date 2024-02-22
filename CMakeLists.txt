cmake_minimum_required(VERSION 3.10)

project(Sortuass)

set(CMAKE_CXX_STANDARD 20)
set (BOOST_ROOT "Y:/Boost/boost_1_84_0") # Путь к библиотеке Boost
 
set (CMAKE_CXX_STANDARD 20) 
set (Boost_NO_SYSTEM_PATHS ON)
set (Boost_USE_MULTITHREADED ON)
set (Boost_USE_STATIC_LIBS ON)
set (Boost_USE_STATIC_RUNTIME OFF)
set (BOOST_ALL_DYN_LINK OFF)
  
# Подключаем необходимые модули. Для примера подключим program_options
find_package (Boost REQUIRED COMPONENTS filesystem REQUIRED) 
  
# Если библиотека найдена, то
if (Boost_FOUND)
    include_directories (SYSTEM ${Boost_INCLUDE_DIR}) # подключаем заголовочные файлы
    add_executable (Sort 
                        "src/origin/main.cpp" 
                        "src/origin/Node.cpp" 
                        "src/origin/scanner.cpp"
                        "src/origin/blockRunner.cpp"
                        "src/origin/controlPanel.cpp"
                        "src/origin/threadNode.cpp"
                        "src/origin/threadNodeManager.cpp"
                    ) 

    target_link_libraries (Sort ${Boost_LIBRARIES}) # подключаем библиотеку
endif ()