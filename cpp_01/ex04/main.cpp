/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/18 12:24:16 by rbagin        #+#    #+#                 */
/*   Updated: 2026/03/18 13:33:27 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>

std::string	search_and_replace(std::string content, std::string s1, std::string s2)
{
	std::string result;
	if (s1.empty())
		return content;
	std::size_t pos = content.find(s1);
	while (pos != std::string::npos)
	{
		result += content.substr(0, pos);
		result += s2;
		content = content.substr(pos + s1.length());
		pos = content.find(s1);
	}
	result += content;
	return result;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return 1;
	std::ifstream infile(argv[1]);
	if (!infile.is_open())
		return 1;
	std::ofstream outfile(std::string(argv[1]) + ".replace");
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;
	while (std::getline(infile, line))
	{
		outfile << search_and_replace(line, s1, s2) << "\n";
	}
	return 0;
}

/* -----------------TESTS--------------------
Test 01 - Basic replacement (hello, hi)
Input file:
hello world
hello 42

Expected output:
hi world
hi 42

Test 02 - No match (zzz, X)
Input file:
abcdef
ghijkl

Expected output:
abcdef
ghijkl

Test 03 - Match at start (foo, X)
Input file:
foobar
foo

Expected output:
Xbar
X

Test 04 - Match at end (foo, Y)
Input file:
barfoo
zzzfoo

Expected output:
barY
zzzY

Test 05 - Multiple matches in one line (abc, z)
Input file:
abc abc abc

Expected output:
z z z

Test 06 - Adjacent matches (aa, b)
Input file:
aaaa

Expected output:
bb

Test 07 - Overlap behavior (non-overlapping replacement) (aba, X)
Input file:
ababa

Expected output:
Xba

Test 08 - Delete matches (na, "")
Input file:
banana

Expected output:
ba

Test 09 - s1 equals s2 (repeat, repeat)
Input file:
repeat repeat

Expected output:
repeat repeat

Test 10 - s2 contains s1 (a, aa)
Input file:
aaa

Expected output:
aaaaaa

Test 11 - Case sensitivity (a, x)
Input file:
AaA

Expected output:
AxA

Test 12 - Whitespace preservation (a, Z)
Input file:
a a a
a

Expected output:
Z Z Z
Z

Test 13 - Punctuation (a, _)
Input file:
a,b.a!a?

Expected output:
_,b._!_?

Test 14 - Empty file (a, b)
Input file:
(empty file)

Expected output:
(empty output file)

Test 15 - Empty lines preserved (a, x)
Input file:
a

b

Expected output:
x

b

Test 16 - Input without trailing newline (a, z)
Input file:
abc (no newline at end)

Expected output:
zbc
Note: your implementation writes a newline after every processed line.

Test 17 - Empty search string ("", X)
Input file:
hello
world

Expected output:
hello
world
Note: content should stay unchanged.

Test 18 - Nonexistent input file (a, b)
Expected result:
Program exits with error code 1
No output file created

Test 19 - Wrong argument count
Expected result:
Program exits with error code 1

Test 20 - Large input sanity (a, b)
Input file:
one very large line (for example 10k characters of a)

Expected output:
Same size line, all a replaced by b
*/
