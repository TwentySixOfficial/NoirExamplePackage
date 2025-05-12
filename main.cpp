#include <iostream>

#ifdef _WIN32
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API
#endif

using namespace std;

EXPORT_API bool hi() {
  return true;
}
