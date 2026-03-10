# 42 C++ Modules Project Instructions

## Project Overview
This is a 42 school C++ learning project (cpp_00 through cpp_09) covering C++ fundamentals through advanced topics. Each module contains multiple exercises (ex00, ex01, etc.) that must be completed sequentially.

## File Structure & Headers

### 42 Header Format
**Always** use the 42 school header format for all `.cpp` and `.hpp` files:
```cpp
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filename.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ravi-bagin <ravi-bagin@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: YYYY/MM/DD HH:MM:SS by ravi-bagin    #+#    #+#                 */
/*   Updated: YYYY/MM/DD HH:MM:SS by ravi-bagin    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
```

### Directory Structure
- Each `cpp_XX/` module contains subject PDFs and multiple exercises
- Each exercise lives in `cpp_XX/exYY/` with its own Makefile
- Some modules have shared test files (e.g., [cpp_00/tests.cpp](cpp_00/tests.cpp))

## Compilation & Makefiles

### Standard Makefile Template
Every exercise requires a Makefile with this structure (see [cpp_00/ex00/Makefile](cpp_00/ex00/Makefile)):
```makefile
NAME = executable_name
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = source_files.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
```

**Note**: Executable names are specified in subject PDFs (e.g., `megaphone` for ex00, `my_awesome_phonebook` for ex01).

### Compilation Requirements
- **Compiler**: `c++` (typically g++ or clang++)
- **Mandatory Flags**: `-Wall -Wextra -Werror` (all warnings enabled, warnings are errors)
- Code **must compile without any warnings or errors**

## C++ Coding Standards

### Orthodox Canonical Form (OCF)
For classes with dynamic memory or resources, implement the "Rule of Three":
```cpp
class MyClass {
public:
    MyClass();                              // Default constructor
    MyClass(const MyClass& other);          // Copy constructor
    MyClass& operator=(const MyClass& rhs); // Copy assignment operator
    ~MyClass();                             // Destructor
};
```

### Header Guards
Use include guards in all `.hpp` files:
```cpp
#ifndef CLASSNAME_HPP
# define CLASSNAME_HPP

class ClassName { /* ... */ };

#endif
```

### Naming Conventions
- **Classes**: PascalCase (e.g., `Account`, `PhoneBook`)
- **Private members**: Prefix with underscore (e.g., `_nbAccounts`, `_amount`)
- **Public methods**: camelCase (e.g., `makeDeposit`, `displayStatus`)
- **Static members**: Prefix with underscore (e.g., `_totalAmount`)

### Code Style
- No `using namespace std;` in header files
- Use `std::` prefix explicitly (e.g., `std::cout`, `std::string`)
- Indentation with tabs (as seen in [cpp_00/ex00/ex00.cpp](cpp_00/ex00/ex00.cpp))
- Private members before public in class definitions

## Development Workflow

1. **Read the subject PDF** in the module directory (`en.subject.pdf` or similar)
2. **Check example code** from previous exercises for patterns
3. **Write implementation** with proper 42 headers
4. **Test compilation** with `-Wall -Wextra -Werror`
5. **Verify Makefile** has all required rules (all, clean, fclean, re)

## Module Progression
- **cpp_00**: Basic I/O, strings, classes intro (see [ex00/ex00.cpp](cpp_00/ex00/ex00.cpp))
- **cpp_01**: Memory, pointers, references
- **cpp_02**: Ad-hoc polymorphism, operator overloading
- **cpp_03**: Inheritance
- **cpp_04**: Subtype polymorphism, abstract classes
- **cpp_05**: Exceptions
- **cpp_06**: C++ casts
- **cpp_07**: Templates
- **cpp_08**: STL containers
- **cpp_09**: Advanced STL

## Key Implementation Notes

### cpp_00 Specific
- **ex02**: Implement [Account.hpp](cpp_00/Account.hpp) using the provided [tests.cpp](cpp_00/tests.cpp) (don't modify it)
- Your output must match [19920104_091532.log](cpp_00/19920104_091532.log) exactly (except timestamps)
- The log format shows the expected output structure: `[timestamp] field1:value1;field2:value2`

### General Notes
- Test files provided in module directories (like [tests.cpp](cpp_00/tests.cpp)) must not be modified
- Each exercise builds on concepts from previous ones - check completed exercises for patterns
- Always prefer C++ features over C equivalents (e.g., `std::string` over `char*`)
- Some modules may have test files separate from exercises (e.g., [cpp_07/main.cpp](cpp_07/main.cpp))
