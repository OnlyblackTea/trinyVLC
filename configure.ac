#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([trinyVLC], [0.01], [https://github.com/onlyblacktea/trinyVLC/issues])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
AC_CHECK_LIB([vlc])
#AC_CHECK_LIB([vlccore])

# Checks for header files.
AC_CHECK_HEADERS([libvlcpp/vlcpp/vlc.hpp],[]
                 [git clone https://github.com/videolan/libvlcpp.git libvlcpp])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_SUBDIRS([libvlcpp])
AC_CONFIG_FILES([Makefile],
		[src/Makefile])
AC_OUTPUT
