#include "StaticEntity.hpp"

#include <stdio.h>

StaticEntity::StaticEntity ( Map & map ) : Entity (map) { }

StaticEntity::StaticEntity ( Map & map , const sf::Vector2f & position ,
                            const sf::Texture & texture ) : Entity(map)
{

}

void StaticEntity::update ( const sf::Time & frameTime )
{

}



