#ifndef MAIN_H
#define MAIN_H

#ifdef _WIN32
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API
#endif

// Declare the function to be exported
EXPORT_API bool hi();

#endif // MAIN_H
