#include <iostream>
#include "AVL_tree.h"
#include "worldcup23a1.h"
#include <cstdlib>
#include "assert.h"
struct test
{
    int p[23];
    output_t<int> get_p(int k)
    {
        return output_t<int>(p[k]);
    }
};
int main()
{
    test t;
    world_cup_t cup = world_cup_t();
    cup.add_team(1,10000);
    cup.add_team(2,20000);
    cup.add_team(3,30000);
    cup.add_team(4,40000);
    cup.add_player(1001,1,10,0,0,false);
    cup.add_player(1002,1,10,0,0,false);
    cup.add_player(1003,1,10,0,0,false);
    cup.add_player(1004,1,10,0,2,false);
    cup.add_player(1005,1,10,0,0,false);
    cup.add_player(1006,1,10,4,3,false);
    cup.add_player(1007,1,10,0,0,false);
    cup.add_player(1008,1,10,0,0,true);
    cup.add_player(1009,1,10,0,0,false);
    cup.add_player(1010,1,10,0,0,false);
    cup.add_player(1011,1,10,0,0,false);
    cup.add_player(1012,1,10,0,0,false);
    cup.add_player(2001,2,20,0,0,false);
    cup.add_player(2002,2,20,0,0,false);
    cup.add_player(2003,2,20,0,0,false);
    cup.add_player(2004,2,20,0,0,false);
    cup.add_player(2005,2,20,0,0,false);
    cup.add_player(2006,2,20,0,0,false);
    cup.add_player(2007,2,20,0,0,false);
    cup.add_player(2008,2,20,6,4,true);
    cup.add_player(2009,2,20,0,0,false);
    cup.add_player(2010,2,0,0,0,false);
    cup.add_player(2011,2,20,0,0,false);
    cup.add_player(3001,3,30,0,0,false);
    cup.add_player(3002,3,30,0,0,false);
    cup.add_player(3003,3,30,0,0,false);
    cup.add_player(3004,3,30,0,0,false);
    cup.add_player(3005,3,30,2,0,false);
    cup.add_player(3006,3,30,0,0,false);
    cup.add_player(3007,3,30,0,0,false);
    cup.add_player(3008,3,30,0,0,false);
    cup.add_player(3009,3,30,0,2,false);
    cup.add_player(3010,3,30,0,0,true);
    cup.add_player(3011,3,30,0,0,true);
    cup.add_player(4001,4,2,1,2,false);
    cup.add_player(4002,4,2,2,2,false);
    cup.update_player_stats(3011,2,1,1);
    cup.play_match(2,3);
    cup.play_match(1,2);
    int a = cup.get_num_played_games(2003).ans();
    int b = cup.get_team_points(3).ans();
    cup.unite_teams(1,2,2);
    int c = cup.get_top_scorer(-1).ans();;
    int x = cup.get_all_players_count(3).ans();
    cup.get_all_players(2,t.p);
    for (int i=0;i<23;i++)
    {
        std::cout<<t.p[i]<<'\n';
    }
    int* xarr = new int[x];
    cup.get_all_players(4, xarr);
    cup.get_closest_player(2008,2);
    cup.knockout_winner(0,3);
    cup.remove_team(2);
    cup.remove_player(3008);
    return true;

    /*
    world_cup_t *obj = new world_cup_t();
    int players[4] = {};

    StatusType res = obj->get_all_players(1, nullptr);
    assert(res == StatusType::INVALID_INPUT);
    res = obj->get_all_players(0, players);
    assert(res == StatusType::INVALID_INPUT);
*/
    /*
    world_cup_t *obj = new world_cup_t();
    StatusType res = obj->add_team(1, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1001, 1, 1, 5, 2, true);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(2, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1002, 2, 1, 3, 4, false);
    assert(res == StatusType::SUCCESS);
    res = obj->unite_teams(1, 2, 3);
    assert(res == StatusType::SUCCESS);
    int players[10] = {};
    res = obj->get_all_players(3, players);
    assert(res == StatusType::SUCCESS);
    assert(players[0] == 1002);
    assert(players[1] == 1001);
    assert(players[2] == 0);
    assert(players[3] == 0);
    assert(players[4] == 0);
    assert(players[5] == 0);
    assert(players[6] == 0);
    assert(players[7] == 0);
    assert(players[8] == 0);
    assert(players[9] == 0);

    res = obj->add_team(3, 2);
    assert(res == StatusType::FAILURE);
    res = obj->add_team(1, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(2, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(4, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1001, 3, 1, 5, 2, true);
    assert(res == StatusType::FAILURE);
    res = obj->add_player(1002, 3, 1, 3, 4, false);
    assert(res == StatusType::FAILURE);
    res = obj->add_player(1003, 3, 1, 1, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1004, 4, 1, 1, 2, true);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1005, 4, 1, 1, 4, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1006, 4, 1, 1, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1007, 4, 1, 1, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->unite_teams(3, 4, 5);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(5, 2);
    assert(res == StatusType::FAILURE);
    res = obj->add_team(3, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(4, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1008, 3, 1, 1, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1004, 3, 1, 1, 1, false);
    assert(res == StatusType::FAILURE);
    res = obj->add_player(1009, 4, 1, 1, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1005, 4, 1, 1, 1, false);
    assert(res == StatusType::FAILURE);
    res = obj->unite_teams(3, 4, 3);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(3, 2);
    assert(res == StatusType::FAILURE);

    res = obj->add_team(4, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1009, 3, 1, 1, 1, false);
    assert(res == StatusType::FAILURE);

    delete obj;


     */
    /*
    world_cup_t *obj = new world_cup_t();
    StatusType res = obj->add_team(1, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(2, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(3, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(4, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(5, 2);
    assert(res == StatusType::SUCCESS);
    res = obj->add_team(6, 2);
    assert(res == StatusType::SUCCESS);

    // add players
    res = obj->add_player(21, 1, 10, 1, 20, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(25, 1, 10, 1, 20, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3, 1, 10, 1, 5, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(4, 4, 10, 1, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(5, 5, 10, 2, 5, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(6, 6, 10, 2, 4, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(24, 1, 10, 2, 3, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(7, 5, 10, 2, 2, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(8, 6, 10, 2, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(9, 3, 10, 5, 30, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(10, 2, 10, 5, 29, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(11, 2, 10, 5, 28, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(12, 2, 10, 5, 27, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(51, 5, 10, 6, 40, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(52, 6, 10, 6, 40, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(53, 3, 10, 6, 40, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(54, 2, 10, 6, 10, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(60, 2, 10, 6, 5, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(70, 2, 10, 6, 4, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(100, 2, 10, 8, 6, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(80, 2, 10, 10, 7, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(90, 2, 10, 10, 7, false);
    assert(res == StatusType::SUCCESS);

    // check all closest
    output_t<int> resn1 = obj->get_closest_player(21, 1);
    assert(resn1.status() == StatusType::SUCCESS);
    assert(resn1.ans() == 25);
    output_t<int> resn2 = obj->get_closest_player(25, 1);
    assert(resn2.status() == StatusType::SUCCESS);
    assert(resn2.ans() == 21);
    output_t<int> resn3 = obj->get_closest_player(3, 1);
    assert(resn3.status() == StatusType::SUCCESS);
    assert(resn3.ans() == 4);
    output_t<int> resn4 = obj->get_closest_player(4, 4);
    assert(resn4.status() == StatusType::SUCCESS);
    assert(resn4.ans() == 3);
    output_t<int> resn5 = obj->get_closest_player(5, 5);
    assert(resn5.status() == StatusType::SUCCESS);
    assert(resn5.ans() == 6);
    output_t<int> resn6 = obj->get_closest_player(6, 6);
    assert(resn6.status() == StatusType::SUCCESS);
    assert(resn6.ans() == 5);
    output_t<int> resn7 = obj->get_closest_player(24, 1);
    assert(resn7.status() == StatusType::SUCCESS);
    assert(resn7.ans() == 7);
    output_t<int> resn8 = obj->get_closest_player(7, 5);
    assert(resn8.status() == StatusType::SUCCESS);
    assert(resn8.ans() == 8);
    output_t<int> resn9 = obj->get_closest_player(8, 6);
    assert(resn9.status() == StatusType::SUCCESS);
    assert(resn9.ans() == 7);
    output_t<int> resn10 = obj->get_closest_player(9, 3);
    assert(resn10.status() == StatusType::SUCCESS);
    assert(resn10.ans() == 10);
    output_t<int> resn11 = obj->get_closest_player(10, 2);
    assert(resn11.status() == StatusType::SUCCESS);
    assert(resn11.ans() == 11);
    output_t<int> resn12 = obj->get_closest_player(11, 2);
    assert(resn12.status() == StatusType::SUCCESS);
    assert(resn12.ans() == 12);
    output_t<int> resn13 = obj->get_closest_player(12, 2);
    assert(resn13.status() == StatusType::SUCCESS);
    assert(resn13.ans() == 11);
    output_t<int> resn14 = obj->get_closest_player(51, 5);
    assert(resn14.status() == StatusType::SUCCESS);
    assert(resn14.ans() == 52);
    output_t<int> resn15 = obj->get_closest_player(52, 6);
    assert(resn15.status() == StatusType::SUCCESS);
    assert(resn15.ans() == 53);
    output_t<int> resn16 = obj->get_closest_player(53, 3);
    assert(resn16.status() == StatusType::SUCCESS);
    assert(resn16.ans() == 52);
    output_t<int> resn17 = obj->get_closest_player(54, 2);
    assert(resn17.status() == StatusType::SUCCESS);
    assert(resn17.ans() == 60);
    output_t<int> resn18 = obj->get_closest_player(60, 2);
    assert(resn18.status() == StatusType::SUCCESS);
    assert(resn18.ans() == 70);
    output_t<int> resn19 = obj->get_closest_player(70, 2);
    assert(resn19.status() == StatusType::SUCCESS);
    assert(resn19.ans() == 60);
    output_t<int> resn20 = obj->get_closest_player(100, 2);
    assert(resn20.status() == StatusType::SUCCESS);
    assert(resn20.ans() == 80);
    output_t<int> resn21 = obj->get_closest_player(80, 2);
    assert(resn21.status() == StatusType::SUCCESS);
    assert(resn21.ans() == 90);
    output_t<int> resn22 = obj->get_closest_player(90, 2);
    assert(resn22.status() == StatusType::SUCCESS);
    assert(resn22.ans() == 80);

    delete obj;*/
    /*
    world_cup_t *obj5 = new world_cup_t();
    int players[10] = {};

    StatusType res = obj5->add_team(1, 2);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1001, 1, 1, 10, 1, true);
    assert(res == StatusType::SUCCESS);
    res = obj5->get_all_players(1, players);
    assert(res == StatusType::SUCCESS);
    assert(players[0] == 1001);
    for (int i = 1; i < 10; i++)
    {
        assert(players[i] == 0);
    }

    res = obj5->add_player(1002, 1, 1, 9, 1, false);
   assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1003, 1, 1, 8, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1004, 1, 1, 7, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1005, 1, 1, 6, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1006, 1, 1, 5, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1007, 1, 1, 4, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1008, 1, 1, 3, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1009, 1, 1, 2, 1, false);
    assert(res == StatusType::SUCCESS);
    res = obj5->add_player(1010, 1, 1, 1, 1, false);
    assert(res == StatusType::SUCCESS);

    res = obj5->get_all_players(1, players);
    assert(res == StatusType::SUCCESS);
    for (int i = 0; i < 10; i++)
    {
       // cout<<players[i]<<'\n';
       assert(players[i] == 1010 - i);
    }
    world_cup_t *obj12 = new world_cup_t();
    output_t<int> resn100 = obj12->get_top_scorer(1);
    assert(resn100.status() == StatusType::FAILURE);


    for (int i = 0; i < 10; i++)
    {
        players[i] = 0;
    }
    res = obj->get_all_players(-1, players);
    REQUIRE(res == StatusType::SUCCESS);
    for (int i = 0; i < 10; i++)
    {
        REQUIRE(players[i] == 1010 - i);
    }
    delete obj;
}

SECTION("get_all_players goals")
{
world_cup_t *obj = new world_cup_t();
int players[10] = {};

StatusType res = obj->add_team(1, 2);
REQUIRE(res == StatusType::SUCCESS);
res = obj->add_player(1001, 1, 1, 5, 2, true);
REQUIRE(res == StatusType::SUCCESS);
res = obj->add_player(1002, 1, 1, 3, 4, false);
REQUIRE(res == StatusType::SUCCESS);
res = obj->add_player(1003, 1, 1, 1, 1, false);
REQUIRE(res == StatusType::SUCCESS);
res = obj->get_all_players(1, players);
REQUIRE(res == StatusType::SUCCESS);
REQUIRE(players[0] == 1003);
REQUIRE(players[1] == 1002);
REQUIRE(players[2] == 1001);

for (int i = 3; i < 10; i++)
{
assert(players[i] == 0);
}

delete obj;
}

    world_cup_t *obj2 = new world_cup_t();
    obj2->add_team(1, 2);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1001, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1002, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1003, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1004, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1005, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1061, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1032, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1033, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1054, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj2->add_player(1065, 1, 10, 15, 0, false);
    assert(res == StatusType::SUCCESS);

    output_t<int> resn10 = obj2->get_closest_player(55, 1);
    assert(resn10.status() == StatusType::FAILURE);
    output_t<int> resn2 = obj2->get_closest_player(1001, 60);
    assert(resn2.status() == StatusType::FAILURE);

    output_t<int> resn3 = obj2->get_closest_player(-1, 1);
    assert(resn3.status() == StatusType::INVALID_INPUT);
    output_t<int> resn4 = obj2->get_closest_player(1001, -1);
    assert(resn4.status() == StatusType::INVALID_INPUT);
    output_t<int> resn5 = obj2->get_closest_player(0, 1);
    assert(resn5.status() == StatusType::INVALID_INPUT);
    output_t<int> resn6 = obj2->get_closest_player(1001, 0);
    assert(resn6.status() == StatusType::INVALID_INPUT);
    world_cup_t *obj1 = new world_cup_t();
    StatusType res1 = obj1->add_team(1, 2);
    assert(res1 == StatusType::SUCCESS);
    output_t<int> resn1 = obj1->get_top_scorer(1);
    assert(resn1.status() == StatusType::FAILURE);
    delete obj1;
    delete obj2;
            world_cup_t *obj = new world_cup_t();

  assert(res == StatusType::SUCCESS);
    res = obj->add_team(2, 20000);
  assert(res == StatusType::SUCCESS);
    res = obj->add_team(3, 30000);
   assert(res == StatusType::SUCCESS);
    res = obj->add_team(4, 40000);
   assert(res == StatusType::SUCCESS);
    res = obj->add_player(1001, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1002, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1003, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1004, 1, 10, 0, 2, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1005, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1006, 1, 10, 4, 3, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1007, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(1007);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(1002);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1008, 1, 10, 0, 0, true);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1009, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1010, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1011, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(1001);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(1012, 1, 10, 0, 0, false);
    assert(res == StatusType::SUCCESS);

    res = obj->add_player(2001, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2002, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2003, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2004, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2005, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(1011);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2006, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2007, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2008, 2, 20, 6, 4, true);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2009, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(2001);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2010, 2, 0, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(2011, 2, 20, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(2010);
    assert(res == StatusType::SUCCESS);

    world_cup_t game;
    game.add_team(1, 0);
    game.add_team(2, 5);
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
    game.add_player(10, 1, 1, 5, 29, true); // closest 11
    game.add_player(11, 2, 1, 5, 28, true); // closest 12
    game.add_player(12, 1, 1, 5, 27, true); // closest 11
    game.add_player(51, 2, 1, 6, 40, true); // closest 52
    game.add_player(52, 1, 1, 6, 40, true); // closest 53
    game.add_player(53, 2, 1, 6, 40, true); // closest 52
    game.add_player(54, 1, 1, 6, 10, true); // closest 60
    game.add_player(60, 2, 1, 6, 5, true); // closest 70
    game.add_player(70, 1, 1, 6, 4, true); // closest 60
    game.add_player(100, 2, 1, 8, 6, true); // closest 80
    game.add_player(80, 1, 1, 10, 7, true); // closest 90
    game.add_player(90, 2, 1, 10, 7, true); // closest 80
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
    assert(game.get_closest_player(10, 1).ans()==11);
    assert(game.get_closest_player(11, 2).ans()==12);
    assert(game.get_closest_player(12, 1).ans()==11);
    assert(game.get_closest_player(51, 2).ans()==52);
    assert(game.get_closest_player(52, 1).ans()==53);
    assert(game.get_closest_player(53, 2).ans()==52);
    assert(game.get_closest_player(54, 1).ans()==60);
    assert(game.get_closest_player(60, 2).ans()==70);
    assert(game.get_closest_player(70, 1).ans()==60);
    assert(game.get_closest_player(100, 2).ans()==80);
    assert(game.get_closest_player(80, 1).ans()==90);
    assert(game.get_closest_player(90, 2).ans()==80);
    test t;
    game.get_all_players(-1, t.p);
    if(game.update_player_stats(90,100,5,10000)!=StatusType::SUCCESS)
    {
        cout<<"fail"<<'\n';
    }
  /*  if(game.update_player_stats(91,100,5,10000)!=StatusType::FAILURE)
    {
    cout<<"fail"<<'\n';
    }
    if(game.remove_player(3)!=StatusType::SUCCESS)
    {
        cout<<"fail"<<'\n';
   }
    game.add_player(3, 1, 1, 1, 5, true);
    game.get_team_points(2);
   // assert(game.knockout_winner(1,2).ans()==2);
    game.unite_teams(1,2,6);
    if(game.unite_teams(1,2,6)!= StatusType::FAILURE)
    {
        cout<<"fail"<<'\n';
    }
    assert(game. get_all_players_count(6).ans()==22);
    game.add_team(2, 5);
    game.add_player(101, 2, 1, 2, 2, true); // closest 25
    game.add_player(102, 2, 1, 2, 2, false); // closest 21
    game.add_player(103, 2, 1, 2, 2, false); // closest 4
    game.add_player(104, 2, 1, 2, 2, false); // closest 3
    game.add_player(105, 2, 1, 3, 3, false); // closest 6
    game.add_player(106, 2, 1, 3, 3, false); // closest 5
    game.add_player(107, 2, 1, 3, 3, false); // closest 7
    game.add_player(108, 2, 1, 3, 3, false); // closest 8
    game.add_player(109, 2, 1, 3, 3, false); // closest 7
    game.add_player(110, 2, 1, 6, 30, false); // closest 10
    game.add_player(111, 2, 1, 6, 29, false); // closest 11
    game.add_player(112, 2, 1, 6, 28, false); // closest 12
    game.add_player(113, 2, 1, 6, 27, false); // closest 11
    game.add_player(114, 2, 1, 7, 40, false); // closest 52
    game.add_player(115, 2, 1, 7, 40, false); // closest 53
    game.add_player(116, 2, 1, 7, 40, false); // closest 52
    game.add_player(117, 2, 1, 7, 10, false); // closest 60
    game.add_player(118, 2, 1, 7, 5, false); // closest 70
    game.add_player(119, 2, 1, 7, 4, false); // closest 60
    game.add_player(120, 2, 1, 9, 6, false); // closest 80
    game.add_player(121, 2, 1, 11, 7, false); // closest 90
    game.add_player(122, 2, 1, 11, 7, false);
    game.add_team(3, 5);
    assert(game. get_all_players_count(2).ans()==22);
    game.add_player(123, 3, 1, 6, 30, false); // closest 10
    game.add_player(124, 3, 1, 6, 29, false); // closest 11
    game.add_player(125, 3, 1, 6, 28, false); // closest 12
    game.add_player(126, 3, 1, 6, 27, false); // closest 11
    game.add_player(127, 3, 1, 7, 40, false); // closest 52
    game.add_player(128, 3, 1, 7, 40, false); // closest 53
    game.add_player(129, 3, 1, 7, 40, false); // closest 52
    game.add_player(130, 3, 1, 7, 10, false); // closest 60
    game.add_player(131, 3, 1, 7, 5, false); // closest 70
    game.add_player(132, 3, 1, 7, 4, false); // closest 60
    game.add_player(133, 3, 1, 9, 6, false); // closest 80
    game.add_player(134, 3, 1, 11, 7, false); // closest 90
    game.add_player(135, 3, 1, 11, 7, false);*/
   /* assert(game. knockout_winner(2,6).ans()==2);
    assert(game.get_top_scorer(3).ans()==135);
    assert(game.get_top_scorer(2).ans()==122);
    assert(game.get_top_scorer(6).ans()==90);
    assert(game.get_team_points(3).ans()==-171);
    assert(game.get_team_points(3).ans()==-171);
    assert(game. get_num_played_games(101).ans()==1);
    game.update_player_stats(101,4,3,3);
    assert(game. get_num_played_games(101).ans()==5);
    game.add_player(150,3,1,1,1,true);
    assert(game. knockout_winner(2,6).ans()==3);
    game.unite_teams(2,3,4);
    assert(game.get_all_players_count(4).ans()==36);
    game.remove_player(135);
    game.remove_player(127);
    assert(game.get_all_players_count(4).ans()==34);
    game.play_match(4,6);
    assert(game.get_team_points(4).ans()==11);
    game.remove_team(6);
    game.add_team(7,10000);
    game.add_player(200,7,0,0,0,true);
    game.add_player(201,7,0,0,0,true);
    game.add_player(202,7,0,0,0,true);
    game.add_player(203,7,0,0,0,true);
    game.add_player(203,7,0,0,0,true);
    game.add_player(204,7,0,0,0,true);
    game.add_player(205,7,0,0,0,true);
    game.add_player(206,7,0,0,0,true);
    game.add_player(207,7,0,0,0,true);
    game.add_player(208,7,0,0,0,true);
    game.add_player(209,7,0,0,0,true);
   if(game.play_match(7,4)!=StatusType::FAILURE)
   {cout<<"fail"<<'\n';}
    game.add_player(210,7,0,0,0,true);
    if(game.play_match(7,4)!=StatusType::SUCCESS)
    {
        cout<<"fail<<'\n";
    }
    assert(game.get_team_points(4).ans()==10001);

   game.get_all_players(4, t.p);
   for(int i=0;i<11;i++)
   {
       cout<<t.p[i]<<'\n';
   }*/
    std::cout<<"Success!"<<std::endl;

    return 0;
}
