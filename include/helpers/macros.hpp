#pragma once

#ifdef _WIN32
  #define Knitpp_Export __declspec(dllexport)
#else
  #define Knitpp_Export
#endif

