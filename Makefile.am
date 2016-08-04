AUTOMAKE_OPTIONS = gnu

lib_LTLIBRARIES = libzipkin.la

libzipkin_la_SOURCES = zipkin/collector.cc

nobase_include_HEADERS = zipkin/collector.h

libzipkin_la_LDFLAGS = -version-info 1:0:0


ACLOCAL_AMFLAGS = -I m4

AM_CXXFLAGS=  -Wall -fno-elide-constructors -pedantic-errors -ansi -Wextra -Wall
AM_CXXFLAGS+= -Winit-self -Wold-style-cast -Woverloaded-virtual -Winit-self
AM_CXXFLAGS+= -Wuninitialized -Wmissing-declarations -Werror -std=c++98
