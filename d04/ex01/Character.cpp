#include "Character.hpp"

Character::Character( void ) : _numAP(40), _weapon(NULL)
{
	return ;
}

Character::Character( const std::string &name ) : _name(name), _numAP(40), _weapon(NULL)
{
	return ;
}

Character::Character( const Character &toCopy )
{
	*this = toCopy;
}

Character::~Character( void )
{
	return ;
}



Character				&Character::operator=( const Character &toCopy )
{
	this->_name = toCopy._name;
	this->_numAP = toCopy._numAP;
	this->_weapon = toCopy._weapon;

	return *this;
}




std::string				Character::getName( void ) const
{
	return this->_name;
}

int						Character::getAP( void ) const
{
	return this->_numAP;
}

AWeapon					*Character::getWeapon( void ) const
{
	return this->_weapon;
}




void					Character::recoverAP( void )
{
	_numAP += 10;
	if ( _numAP > 40 ) {
		_numAP = 40;
	}
}

void					Character::equip( AWeapon *weapon )
{
	_weapon = weapon;
}

void					Character::attack( Enemy *enemy )
{
	if( enemy->getHP() <= 0 )
		return ;
	if ( _weapon && _numAP >= _weapon->getAPCost() ) {
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_numAP -= _weapon->getAPCost();
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if ( enemy->getHP() <= 0 ) {
			delete enemy;
		}
	}
}

std::ostream		&operator<<( std::ostream &o, const Character &c )
{
	o << c.getName() << " has " << c.getAP() << " AP and ";
	if ( c.getWeapon() != NULL ) {
		o << "wields a " << (c.getWeapon())->getName();
	}
	else {
		o << "is unarmed";
	}
	o << std::endl;
	return o;
}
