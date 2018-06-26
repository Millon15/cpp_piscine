#ifndef ENEMY_hpp
#define ENEMY_hpp

#include <string>
#include <iostream>

class Enemy {

public:
	Enemy( void );
	Enemy( int hp, const std::string &type );
	Enemy( const Enemy & );
	virtual ~Enemy( void );

	Enemy			&operator=( const Enemy & );
	 
	std::string		getType() const;
	int				getHP() const;

	virtual void	takeDamage( int );

private:
	std::string		_type;
	int				_numHP;

};

#endif												// end of ENEMY_hpp
