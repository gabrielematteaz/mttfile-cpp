# mttfilecpp
C++ version of "mttfile"

# Functions
- mttfile_load_file

# Example
```cpp
#include "mttlib/mttfile/mttfile.hpp"
#include <iostream>

int main()
{
	try
	{
		std::cout << mttfile_load_file("test.cpp", 0, 0, true).data() << std::endl;
	} 
	catch (const std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
```
