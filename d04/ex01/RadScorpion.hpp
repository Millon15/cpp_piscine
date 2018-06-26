#ifndef RADSCORPION_hpp
#define RADSCORPION_hpp

#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion( void );
	RadScorpion( const RadScorpion & );
	~RadScorpion( void );

	RadScorpion			&operator=( const RadScorpion & );

private:


};

#endif												// end of RADSCORPION_hpp
