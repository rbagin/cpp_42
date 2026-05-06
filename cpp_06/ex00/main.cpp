/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/03 16:00:00 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/06 16:22:13 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
** -- Subject examples --
**   ./convert 0            char: Non displayable | int: 0 | float: 0.0f | double: 0.0
**   ./convert nan          all impossible except float: nanf | double: nan
**   ./convert 42.0f        char: '*' | int: 42 | float: 42.0f | double: 42.0
**
** -- Char (single non-digit char) --
**   ./convert c            char: 'c' | int: 99 | float: 99.0f | double: 99.0
**   ./convert '*'          char: '*' | int: 42 (must quote in shell)
**   ./convert ' '          space (32) — first printable
**   ./convert '~'          tilde (126) — last printable
**
** -- Int --
**   ./convert -42          negative
**   ./convert +42          explicit positive sign
**   ./convert 2147483647   INT_MAX
**   ./convert -2147483648  INT_MIN
**   ./convert 2147483648   INT_MAX + 1 → int: impossible (overflow)
**   ./convert -2147483649  INT_MIN - 1 → int: impossible (underflow)
**
** -- Float / Double --
**   ./convert 4.2          double literal
**   ./convert 4.2f         float literal
**   ./convert -4.2f        negative float
**   ./convert 1e100        wait — scientific notation isn't supported, expect impossible
**
** -- Pseudo-literals (all 6) --
**   ./convert nan          double pseudo
**   ./convert nanf         float pseudo
**   ./convert +inf         double, sign preserved
**   ./convert -inf         double, sign preserved
**   ./convert +inff        float
**   ./convert -inff        float
**
** -- Char range edge cases --
**   ./convert 31           below printable → char: Non displayable
**   ./convert 127          DEL (above printable) → char: Non displayable
**   ./convert 128          outside char range → char: impossible
**   ./convert -1           negative → char: impossible
**
** -- Invalid inputs (everything impossible) --
**   ./convert ""           empty
**   ./convert hello        non-numeric
**   ./convert 4.2.0        two dots
**   ./convert +            just a sign
**   ./convert 4..2         empty fraction
*/
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
