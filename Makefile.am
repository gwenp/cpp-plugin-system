bin_PROGRAMS = cppPlugins

INCLUDES = -I/usr/include/sigc++-2.0/


cppPlugins_SOURCES =  \
					src/core/Application.cpp \
					src/core/ConcretePluginManager.cpp \
                                        src/core/main/main.cpp \
					src/api/CommunicativeObject.cpp \
					src/api/Plugin.cpp 

AM_CPPFLAGS = $(LIBSIGC_CFLAGS) -fPIC -g
cppPlugins_LDADD = $(LIBSIGC_LIBS) -ldl
