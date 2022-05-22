#pragma once

#ifndef HELLO_DLL
# ifdef _WIN32
#  if defined( BUILD_DLL )
#    define HELLO_DLL __declspec(dllexport)
#  elif defined( USE_DLL )
#    define HELLO_DLL __declspec(dllimport)
#  else
#    define HELLO_DLL
#  endif
# else
#  define HELLO_DLL
# endif
#endif

class HELLO_DLL hello
{
public:
    void print();
};