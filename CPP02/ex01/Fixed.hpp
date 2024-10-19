#ifndef	FIXED_H
# define FIXED_H

# include <iostream>
# include <cstring>
# include <iomanip>
# include <cmath>

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
		int					fPointValue;
		static int const	fBits = 8;

	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const numI);
		Fixed(float const numF);
		~Fixed();

		Fixed &operator=(Fixed const &rhs);

		int	toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & out, Fixed & rhs);
std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif
