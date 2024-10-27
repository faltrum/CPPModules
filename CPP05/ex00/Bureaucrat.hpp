#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define MAX_GRADE 150
# define MIN_GRADE 1

# define MAGENTA "\033[35m"
# define RESET "\033[0m"
# define CYAN "\033[36m"

class	Bureaucrat
{
	private:
		const std::string	_name;  //Const porque no se debe modificar
		unsigned int		_grade; //entre 1 y 150, siempre positivo.
	
	public:
		//Vamos con el canonical form: Constructor,copia constructor,
		// desctructor, operador "=".
		Bureaucrat();
		Bureaucrat(const std::string &name, const unsigned int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();

		Bureaucrat&		operator=(const Bureaucrat &cpy);

		//GEtters
		std::string		getName() const;
		unsigned int	getGrade() const; 

		//Función para el incremento y decremento de grados
		void	incrementGrade();
		void	decrementGrade();
		void	incrementGrade(unsigned int increment);
		void	decrementGrade(unsigned int decrement);

		//Excepciones customizadas
		class GradeToolLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class GradeToolHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};		
		
};

//Overload operador "<<" para pritnear Bureaucrat info
std::ostream&	operator<<(std::ostream &os, const Bureaucrat &b);

#endif