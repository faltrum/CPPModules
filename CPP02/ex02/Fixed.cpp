# include "Fixed.hpp"

//Constructor con output e inicializacion

Fixed::Fixed() { this->fPointValue = 0; }

//Copia del constructor inizlizando objeto con otro objeto, una locura.

Fixed::Fixed(Fixed const &src) { *this =src; }

/*
Constructor del Int. Iniciando fPointValue con el valor de numI shifteado al aizquierda.
*/
Fixed::Fixed(int const numI) { this->fPointValue = numI << fBits; }

/*
Constructor del float, con sus matematicas.
*/

Fixed::Fixed(float const numF) { this->fPointValue = roundf(numF * (1 << this->fBits)); }

//Destructor con output.

Fixed::~Fixed() {}

// Copy assigment operator
//Operador =
Fixed &Fixed::operator=(Fixed const &raw)
{
	if (this != &raw)
		this->fPointValue = raw.getRawBits();
	return (*this);
}

/*
Operadores de comparacion
Permite comparar 2 obejtos de la misma clase
SE compara si hay concurrencia entr4e el objeto(fPointValue)
y el objeto pasdo como argumento (raw.fPointValue).
Usando el operador ternario, is es true, devuelve true, si no, devuelve false.
*/
//operador ">"
bool	Fixed::operator>(Fixed const &raw) const
{
	return (this->fPointValue > raw.fPointValue ? true : false);
}

//operador "<"
bool	Fixed::operator<(Fixed const &raw) const
{
	return (this->fPointValue < raw.fPointValue ? true : false);
}

// oprador "<="
bool	Fixed::operator<=(Fixed const &raw) const
{
	return (this->fPointValue <= raw.fPointValue ? true : false);
}

//operador ">="
bool	Fixed::operator>=(Fixed const &raw) const
{
	return (this->fPointValue >= raw.fPointValue ? true : false);
}

//operador "=="
bool	Fixed::operator==(Fixed const &raw) const
{
	return (this->fPointValue == raw.fPointValue ? true : false);
}

//operador !=
bool	Fixed::operator!=(Fixed const &raw) const
{
	return (this->fPointValue != raw.fPointValue ? true : false);
}

/*
Operadores aritmeticos
Permiten trabajar cona ritemtica dos objetos de la misma clase
Convierte el fixed point falue en float y trabaja la operaicon
*/
//operador "+"
float	Fixed::operator+(Fixed const &raw) const
{
	return (this->toFloat() + raw.toFloat());
}

//operador "-"
float	Fixed::operator-(Fixed const &raw) const
{
	return (this->toFloat() - raw.toFloat());
}

//operador "*"
float	Fixed::operator*(Fixed const &raw) const
{
	return (this->toFloat() * raw.toFloat());
}

//operdor "/"
float	Fixed::operator/(Fixed const &raw) const
{
	return (this->toFloat() / raw.toFloat());
}

/*
Incrementeos y decrementos
PErmite incrementar o decrementar el valor del objeto de 1 en 1.
Pre: añade o quita 1 al valor.
Post: añade o quita 1 al valor de fPointValue y devuelve el valor antes de la
operacion gravada en el objeto temporal (init).
*/
//oprador "++"
Fixed Fixed::operator++(void)
{
	this->fPointValue = this->fPointValue + 1;
	return (*this);
}

//operador "--"
Fixed Fixed::operator--(void)
{
	this->fPointValue = this->fPointValue - 1;
	return (*this);
}

//operador "++"
Fixed Fixed::operator++(int)
{
	Fixed init(*this);
	this->fPointValue = this->fPointValue + 1;
	return (init);
}

//operador "--"
Fixed Fixed::operator--(int)
{
	Fixed init(*this);
	this->fPointValue = this->fPointValue - 1;
	return (init);
}

/*
Operadores MAX MIN
Permite compara dos objetos de la misma clase y devolver
el más pequeño o el más grande.
Usa el operador ternario para comparar los 2 objetos.
min and max tienes 2 fucniones, una para el const object y otr para
el non-const object.
*/
//operador min
const	Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	return (first < second ? first : second);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	return (first < second ? first : second);
}

//operador max
const	Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	return (first > second ? first : second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second ? first : second);
}

/*
Convirtiendo fixed point en integer o float
*/

int	Fixed::toInt(void) const { return (this->fPointValue >> this->fBits); }

float	Fixed::toFloat(void) const { return ((float)this->fPointValue / (1 << this->fBits)); }

/*
Getter function. Devuelve el valor del miembro fPointValue
*/

int	Fixed::getRawBits(void) const { return (fPointValue); }

// Getter function. configurar el valor de fPoinValue.

void	Fixed::setRawBits(int const raw) { this->fPointValue = raw; }

// operador "<<" (const)
std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

//operador "<<"
std::ostream &operator<<(std::ostream &out, Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}