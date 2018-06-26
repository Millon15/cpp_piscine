#ifndef Sorcerer_hpp
#define Sorcerer_hpp

#include "Victim.hpp"

class Sorcerer {

public:
	Sorcerer( void );
	Sorcerer( std::string name, std::string title );
	Sorcerer( const Sorcerer &toCopy );
	~Sorcerer( void );

	Sorcerer			&operator=( const Sorcerer &toCopy );

	void				polymorph( const Victim & );

	std::string			getName( void ) const;
	std::string			getTitle( void ) const;

private:
	std::string		_name;
	std::string		_title;

};

std::ostream			&operator<<( std::ostream &o, const Sorcerer &s );

#endif																	// end of Sorcerer_hpp
