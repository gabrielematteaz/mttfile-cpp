#ifndef MTTFILE_HPP
#define MTTFILE_HPP

#include <vector>
#include <fstream>

std::vector < char > mttfile_load_file(const char *name, std::streampos off, std::streamsize lim, bool str);
std::vector < char > mttfile_load_file(const wchar_t *wname, std::streampos off, std::streamsize lim, bool str);

#endif