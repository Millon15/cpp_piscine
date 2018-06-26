#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void )
{
	std::cout << _name << ", " <<  _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title)
{
	std::cout << _name << ", " <<  _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer &toCopy )
{
	*this = toCopy;
	std::cout << _name << ", " <<  _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _name << ", " <<  _title << ", is dead. Consequences will never be the same !" << std::endl;
}



Sorcerer				&Sorcerer::operator=( const Sorcerer &toCopy )
{
	this->_name = toCopy.getName();
	this->_title = toCopy.getTitle();

	return *this;
}



void					Sorcerer::polymorph( const Victim &v )
{
	v.getPolymorphed();
}



std::string				Sorcerer::getName( void ) const
{
	return this->_name;
}

std::string				Sorcerer::getTitle( void ) const
{
	return this->_title;
}



std::ostream			&operator<<( std::ostream &o, const Sorcerer &s )
{
	o << "I am " << s.getName() << ", " <<  s.getTitle() << ", and I like ponies !" << std::endl;

	return o;
}
