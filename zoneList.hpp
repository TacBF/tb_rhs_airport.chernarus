#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK     SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}      , {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE   , SPAWN_XRAY,    {3}      , {}    , 1      , {}        , 0    , "RU Main Base" },
{ 2, TEAM_RED  , SPAWN_XRAY,     {9}      , {}    , 1      , {}        , 0    , "Insurgents Main Base" },

{ 3, TEAM_BLUE   , SPAWN_NEVER,   {1,4}      , {}   , 1      , {}         , 0    , "Vybor" },
{ 4, TEAM_BLUE   , SPAWN_NEVER,   {3,5}      , {}   , 1      , {}         , 0    , "%1" },

{ 5, TEAM_BLUE, SPAWN_NEVER,   {4,6}      , {}    , 1      , {}        , 0    , "%1" },

{ 6, TEAM_BLUE, SPAWN_NEVER,   {5,7}      , {}    , 1      , {}        , 0    , "%1" },

{ 7, TEAM_BLUE, SPAWN_NEVER,   {6,8}      , {}    , 1      , {}        , 0    , "%1" },
 
{ 8, TEAM_NEUTRAL   , SPAWN_NEVER,    {7,9}      , {}   , 1      , {}         , 0    , "%1" },

{ 9, TEAM_RED   , SPAWN_NEVER,    {8}      , {}   , 1      , {}         , 0    , "Grishino" },

{ 10, TEAM_BLUE   , SPAWN_LARGEFB,    {}      , {}   , 1      , {1}         , 1    , "Airbase" },
{ 11, TEAM_RED   , SPAWN_LARGEFB,    {}      , {}   , 1      , {2}         , 1    , "FB South" },
{ 12, TEAM_RED   , SPAWN_LARGEFB,    {}      , {}   , 1      , {2}         , 1    , "FB North" },

//{ 10, TEAM_RED  , SPAWN_NEVER,    {9,11}      , {}    , 1      , {}        , 0    , "Slums West" },


//{ 12, TEAM_NEUTRAL   , SPAWN_INSTANT,    {}      , {}   , 1      , {3,4,5}         , 3    , "FB Checkpoint" },


//{ 14, TEAM_NEUTRAL   , SPAWN_INSTANT,    {}      , {}   , 1      , {9,8,7}         , 3    , "FB Sofia" },


//{ 16, TEAM_NEUTRAL   , SPAWN_INSTANT,    {}      , {}   , 1      , {1,5,7,11}         , 3    , "FB Center" }



};


