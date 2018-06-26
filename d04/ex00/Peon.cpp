#include "Peon.hpp"

Peon::Peon( void ) : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( std::string name ) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon &toCopy )
{
	*this = toCopy;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}



Peon				&Peon::operator=( const Peon &toCopy )
{
	this->_name = toCopy.getName();

	return *this;
}



void				Peon::getPolymorphed( void ) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}
