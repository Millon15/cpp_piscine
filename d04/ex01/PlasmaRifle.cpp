#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle &toCopy )
{
	*this = toCopy;
}

PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}



PlasmaRifle				&PlasmaRifle::operator=( const PlasmaRifle &toCopy )
{
	AWeapon::operator=(toCopy);

	return *this;
}


void					PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
