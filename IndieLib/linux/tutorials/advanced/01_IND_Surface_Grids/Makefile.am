bin_PROGRAMS = tutorial1

AM_CXXFLAGS = $(INTI_CFLAGS) -Werror -I @top_srcdir@/../common/include -I @top_srcdir@/../tutorials/advanced/01_IND_Surface_Grids -I @top_srcdir@/../tutorials

tutorial1_SOURCES = ../../../../tutorials/WorkingPath.cpp  ../../../../tutorials/advanced/01_IND_Surface_Grids/CIndieLib.cpp ../../../../tutorials/advanced/01_IND_Surface_Grids/Tutorial01.cpp

tutorial1_LDADD = -L@top_srcdir@/.libs $(INTI_LIBS) -lIndieLib -lSDL2 -lGLEW -lGLU -lGL
