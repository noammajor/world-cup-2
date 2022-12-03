#include <iostream>
#include "AVL_tree.h"
#include "worldcup23a1.h"
#include <cstdlib>
#include "assert.h"

int main()
{
    world_cup_t game;
    game.add_team(1, 0);
    game.add_team(2, 5);
    game.add_team(3, 5);
    game.add_team(4, 5);
    game.add_team(5, 5);

    game.add_player(21, 1, 1, 1, 20, true); // closest 25
    game.add_player(25, 2, 1, 1, 25, true); // closest 21
    game.add_player(3, 1, 1, 1, 5, true); // closest 4
    game.add_player(4, 2, 1, 1, 1, true); // closest 3
    game.add_player(5, 1, 1, 2, 5, true); // closest 6
    game.add_player(6, 2, 1, 2, 4, true); // closest 5
    game.add_player(24, 1, 1, 2, 3, true); // closest 7
    game.add_player(7, 2, 1, 2, 2, true); // closest 8
    game.add_player(8, 1, 1, 2, 1, true); // closest 7
    game.add_player(9, 2, 1, 5, 30, true); // closest 10
    game.add_player(10, 3, 1, 5, 29, true); // closest 11
    game.add_player(11, 2, 1, 5, 28, true); // closest 12
    game.add_player(12, 5, 1, 5, 27, true); // closest 11
    game.add_player(51, 3, 1, 6, 40, true); // closest 52
    game.add_player(52, 1, 1, 6, 40, true); // closest 53
    game.add_player(53, 4, 1, 6, 40, true); // closest 52
    game.add_player(54, 1, 1, 6, 10, true); // closest 60
    game.add_player(60, 4, 1, 6, 5, true); // closest 70
    game.add_player(70, 4, 1, 6, 4, true); // closest 60
    game.add_player(100, 5, 1, 8, 6, true); // closest 80
    game.add_player(80, 1, 1, 10, 7, true); // closest 90
    game.add_player(90, 5, 1, 10, 7, true); // closest 80
    game.unite_teams(2,3,6);
    assert(game.get_top_scorer( 1).ans()==80);
    assert(game.get_top_scorer(3).ans()==51);
    assert(game.get_top_scorer(2).ans()==11);
    assert(game.get_top_scorer(4).ans()==70);
    assert(game.get_top_scorer(-4).ans()==90);

  assert(game.get_closest_player(21, 1).ans()==25);
    assert(game.get_closest_player(25, 2).ans()==21);
    assert(game.get_closest_player(3, 1).ans()==4);
    assert(game.get_closest_player(4, 2).ans()==3);
    assert(game.get_closest_player(5, 1).ans()==6);
    assert(game.get_closest_player(6, 2).ans()==5);
    assert(game.get_closest_player(24, 1).ans()==7);
    assert(game.get_closest_player(7, 2).ans()==8);
    assert(game.get_closest_player(8, 1).ans()==7);
    assert(game.get_closest_player(9, 2).ans()==10);
    assert(game.get_closest_player(10, 3).ans()==11);
    assert(game.get_closest_player(11, 2).ans()==12);
    assert(game.get_closest_player(12, 1).ans()==11);
    assert(game.get_closest_player(51, 2).ans()==52);
    assert(game.get_closest_player(52, 1).ans()==53);
    assert(game.get_closest_player(53, 2).ans()==52);
    assert(game.get_closest_player(54, 1).ans()==60);
   // assert(game.get_closest_player(60, 2).ans()==70);
  //  assert(game.get_closest_player(70, 1).ans()==60);
    assert(game.get_closest_player(100, 2).ans()==80);
    assert(game.get_closest_player(80, 1).ans()==90);
    assert(game.get_closest_player(90, 2).ans()==80);
    std::cout<<"Success!"<<std::endl;

    return 0;
}
