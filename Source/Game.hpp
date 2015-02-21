#pragma once

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Game
{
	public :
		void handle ( const sf::Event & event ) ;
		void update ( const sf::Time & frameTime ) ;
		void draw ( sf::RenderTarget & target ) ;

    private :
        sf::Vector2f scrollOffset ;
} ;