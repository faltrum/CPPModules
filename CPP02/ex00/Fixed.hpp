#ifndef	FIXED_H
# define FIXED_H

# include <iostream>
# include <cstring>
# include <iomanip>

/*
En este ejercicio se entrena le Ortodox Canonical Form (OCF)
En cada clase debe haber:
- Default  constructor: Fixed();
- Copy constructor: Fixed(Fixed const &src);
- Copy assignment operator: Fixed &operator=(Fixed cont &rsh);
El resto de atributos y métodos que piden el ejercicio.
*/
class	Fixed
{
	private:
		int					num;
		static int const	bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed &operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
