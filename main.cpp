
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Bowl.h"

TEST_CASE( "have game", "bowl")
{
    Bowl *b = new Bowl;
    REQUIRE( b != NULL);
}

TEST_CASE( "game add score", "bowl")
{
    Bowl *b = new Bowl;
    b->AddFrame( 3, 5);
    REQUIRE( b != NULL);
}