#include "MapChunk.hpp"

MapChunk::MapChunk ( Map & map , const sf::Vector2f & position , const sf::Vector2f & size )
{
    sf::Vector2f firstAreaSize ( rand ( ) % static_cast <int> ( size.x ) + 300 , rand ( ) % static_cast <int> ( size.y ) + 300 ) ;

    sf::Vector2f tempSize = firstAreaSize ;
    sf::Vector2f tempPosition = position ;

    this->areas.push_back ( MapArea ( map , MapArea::getRandomType ( ) , tempPosition , tempSize ) ) ;

    tempPosition.x += firstAreaSize.x ;
    tempSize.x = size.x - firstAreaSize.x ;

    this->areas.push_back ( MapArea ( map , MapArea::getRandomType ( ) , tempPosition , tempSize ) ) ;


    tempSize = firstAreaSize ;
    tempPosition = position ;

    tempPosition.y += firstAreaSize.y ;
    tempSize.y = size.y - firstAreaSize.y ;

    this->areas.push_back ( MapArea ( map , MapArea::getRandomType ( ) , tempPosition , tempSize ) ) ;

    tempPosition.x += firstAreaSize.x ;
    tempSize.x = size.x - firstAreaSize.x ;

    this->areas.push_back ( MapArea ( map , MapArea::getRandomType ( ) , tempPosition , tempSize ) ) ;
}

void MapChunk::draw ( sf::RenderTarget & target ) const
{
    for ( auto & area : this->areas )
        area.draw ( target ) ;
}