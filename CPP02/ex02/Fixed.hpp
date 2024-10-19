#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cstring>
# include <iomanip>
# include <cmath>

/*
Ortodox Canonical Form (OCF)
- Constructor por defecto Fixed();
- Copia del Constructor Fixed(Fixed const &rhs);
- Destructor: ~Fixed();
- Copia operador de asignacion: Fixed &operator=(Fixed const &rhs);

*private:
	- int num; //El valor fixed point.
	- static int const bits = 8; //El numero de bits fraccionados.

*public:
	-De lo más importante y novedoso con respecto a los otros ejercicios.
	Comparison operators: >, <, >=, <=, ==, !=.
	Operadores aritmeticos: +, -, *, /.
	- Operadores de incremento y decremento: ++, --.
	-MAX & MIN operadores: min, max.
*/

class Fixed
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

		//Operadores de comparacion
		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		//Operadores aritmenticos
		float operator+(Fixed const &rhs) const;
		float operator-(Fixed const &rhs) const;
		float operator*(Fixed const &rhs) const;
		float operator/(Fixed const &rhs) const;

		//Operadores incrementales y decrementales
		//Pre-operadores
		Fixed operator++(void);
		Fixed operator--(void);
		//Post-operadores
		Fixed operator++(int);
		Fixed operator--(int);

		//MAX & MIN Operadores
		//min
		static const	Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &min(Fixed &first, Fixed &second);

		//max
		static const	Fixed &max(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & out, Fixed & rhs);
std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

# endif