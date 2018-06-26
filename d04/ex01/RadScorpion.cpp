#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion &toCopy )
{
	*this = toCopy;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
}



RadScorpion				&RadScorpion::operator=( const RadScorpion &toCopy )
{
	Enemy::operator=(toCopy);

	return *this;
}
