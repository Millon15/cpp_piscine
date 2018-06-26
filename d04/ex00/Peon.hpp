#ifndef Peon_hpp
#define Peon_hpp

#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon( void );
	Peon( std::string );
	Peon( const Peon & );
	~Peon( void );

	Peon			&operator=( const Peon & );

	virtual void	getPolymorphed( void ) const;

};

#endif																	// end of Peon_hpp
