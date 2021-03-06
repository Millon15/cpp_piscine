#include "Pleft.hpp"

Pleft::Pleft( void ) {}
Pleft::Pleft( std::list<int> &stack, std::list<int>::iterator &it ) : _st(&stack), _it(&it) {}
Pleft::Pleft( const Pleft &toCopy ) { *this = toCopy; }
Pleft::~Pleft( void ) {}
Pleft		&Pleft::operator=( const Pleft &toCopy )
{
	static_cast<void>(toCopy);
	return *this;
}



void			Pleft::exec( void )
{
	if ( *_it == _st->begin() ) {
		std::cout << "RANGE ERROR" << std::endl;
		exit(2);
	}
	(*_it)--;
}
