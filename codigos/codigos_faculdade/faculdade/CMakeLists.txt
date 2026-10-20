cmake_minimum_required(VERSION 3.16)

project(faculdade LANGUAGES C)

add_executable(faculdade main.c)

include(GNUInstallDirs)
install(TARGETS faculdade
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
