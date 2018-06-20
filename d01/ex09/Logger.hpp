/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:49:58 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/20 16:17:42 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Logger_hpp
#define Logger_hpp

#include <string>
#include <iostream>
#include <fstream>

class Logger {

public:
	Logger( std::string const & fileName );
	~Logger( void );

	void				log(std::string const & dest, std::string const & message);

private:
	std::ofstream		_fs;

	void				logToConsole( std::string const & log );
	void				logToFile( std::string const & log );
	const std::string	makeLogEntry( std::string const & rudeLog ) const;

};


#endif
