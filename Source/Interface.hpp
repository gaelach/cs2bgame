#pragma once

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "Map.hpp"
#include "ResourceManager.hpp"

class AudioManager;
class Game;

class Interface
{
   public :
      Interface (Game &game, const sf::View & defaultView);

      const sf::View& getCamera()const;

      /*  */
      void handle ( const sf::Event & event ) ;
      /*  */
      void update ( const sf::Time & frameTime ) ;
      /*  */
      void draw ( sf::RenderTarget & target ) ;

   private:
      Game& game;
      sf::View camera ;

      sf::Vector2f offset;
} ;
