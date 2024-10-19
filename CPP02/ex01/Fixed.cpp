# include "Fixed.hpp"

//Constructor con output e inicializacion del fPointValue.

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fPointValue = 0;
}

//Copia del cosntructor con output e inicializacion de un objeto usando otro.
Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

//Integer constructor. Iniciar fPointValue con el valor de numI shifted a la izquierda  por fBits
Fixed::Fixed(int const numI)
{
    std::cout << "Integer constructor called" << std::endl;
    this->fPointValue = numI << fBits;
}

/*
Constructor de Float. Iniciar  fPointValue won el valor de numF multiplicado
por 2 elevado al FBits
- roundf() rounds the floar to the nearest integer value.
- (1 << this->fBits) es equivalente a 2 elevado a fBits. 
*/
Fixed::Fixed(float const numF)
{
    std::cout << "Float constructor called" << std::endl;
    this->fPointValue = roundf(numF * (1 << this->fBits));
}

//Desctrcutor con output
Fixed::~Fixed()
{
    std::cout << "Desctructor called" << std::endl;
}

/*
Asigancion de operador de copia con output.
Si el objeto no es el mismo que el pasado como argumento, el valor
deñ miembro fPointValue se le asigna el valor del objeto pasado como un
argumento con getRawBits().
Devuelve referencia a dicho objeto
*/
Fixed &Fixed::operator=(Fixed const &raw)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &raw)
        this->fPointValue =raw.getRawBits();
    return (*this);
}

/*
    Convirtiendo fPointValue en integer.
    -Dividir el valor de fPointVAlues por 2 elevado a fBits.
*/
int	Fixed::toInt(void) const { return (this->fPointValue >> this->fBits); }

/*
Conviritendo FpointValue a float.
- Dividir el valor de fPointValue por 2 elevadoa fBits
igual que toInt() but devuelve float.
*/
float   Fixed::toFloat(void) const { return ((float)this->fPointValue / (1 << this->fBits)); }

//Funcion getter. Devuelve el valor del miembro fPointValue.

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (fPointValue);
}

//Funcion setter. Das el valor del miembro fPoinValue.

void Fixed::setRawBits(int const raw) { this->fPointValue = raw; }

//operador "<<" (const)
/*
Sobrecargar el operador zz al output del valor del objecto como float.
Version Const para manejar objectos const y no const.
*/
std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
    out << rhs.toFloat();
    return (out);
}

//operador <<
/*
Sobrecargar el operador << al output del valor del objeto como float.
La misma version de const para manejar non const objects.
*/
std::ostream &operator<<(std::ostream &out, Fixed &rhs)
{
    out << rhs.toFloat();
    return (out);
}