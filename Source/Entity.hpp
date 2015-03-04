/* for help look at:
 http://www.sfml-dev.org/tutorials/2.2/
 */

/*
 The entity class is an abstract class which will represent all interactable objects
 on the map. Each entity must be able to move and rotate. Implementation help can be
 found at http://www.sfml-dev.org/tutorials/2.2/graphics-transform.php
 */

#pragma once

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Map ; // forward declaration of map class

class Entity
{
	public :
		Entity ( Map & map ) ;
		Entity ( Map & map , const sf::Vector2f & position , const sf::Texture & texture ) ;
      virtual ~Entity () = default;

		void setTexture ( const sf::Texture & texture ) ;
		const sf::Texture * const getTexture ( ) const ;

		void setPosition ( const sf::Vector2f & position ) ;
		const sf::Vector2f & getPosition ( ) const ;

      /* set the absolute rotation of the entity */
      void setRotation (float rotation);
      /* retrieve the absolute rotation of the entity */
      float getRotation ( ) const;

		Map & getMap ( ) ;
		const Map & getMap ( ) const ;

		void move ( const sf::Vector2f & offset ) ;

      /* rotates the orientation of the entity by offset, using the rotate method, this
       rotation is relative to the entity's current orientation */
      void rotate (float offset);
      
		virtual void update ( const sf::Time & frameTime ) = 0 ;

      /* the draw method of the target is called and sprite is one of its arguments
       renderTexture.draw(sprite); // or any other drawable */
		virtual void draw ( sf::RenderTarget & target ) const ;



	private :
   
		Map & map ;
		sf::Sprite sprite ;
} ;
