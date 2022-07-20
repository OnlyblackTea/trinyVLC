#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([trinyVLC], [0.01], [804559276@qq.com])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
AC_CHECK_LIB([vlc])

# Checks for header files.
AC_CHECK_HEADERS([vlcpp/vlc.hpp], [Warning: No libvlcpp Detected, Installing...],
                 [git clone https://github.com/videolan/libvlcpp.git libvlcpp && cd libvlcpp && ./bootstrap && ./configure && make &&sudo make install])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_SUBDIRS([libvlcpp])
AC_CONFIG_FILES([Makefile] [src/Makefile])
AC_OUTPUT
