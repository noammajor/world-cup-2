#include <iostream>
#include "AVL_tree.h"
#include "worldcup23a1.h"
#include <cstdlib>
#include "assert.h"
struct test
{
    int p[22];
    output_t<int> get_p(int k)
    {
        return output_t<int>(p[k]);
    }
};
int main()
{
    world_cup_t *obj = new world_cup_t();
    StatusType res = obj->add_team(1, 10000);
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

    res = obj->add_player(3001, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3002, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3003, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3004, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3005, 3, 30, 2, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3006, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3007, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3008, 3, 30, 0, 0, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3009, 3, 30, 0, 2, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3010, 3, 30, 0, 0, true);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(3011, 3, 30, 0, 0, true);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3011);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3008);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3002);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3010);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3009);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3005);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3004);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3006);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3007);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3001);
    assert(res == StatusType::SUCCESS);
    res = obj->remove_player(3003);
   assert(res == StatusType::SUCCESS);

    res = obj->add_player(4001, 4, 2, 1, 2, false);
    assert(res == StatusType::SUCCESS);
    res = obj->add_player(4002, 4, 2, 2, 2, false);
    assert(res == StatusType::SUCCESS);

    delete obj;
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
    //assert(game.(2).ans()==5);
   test t;
    game.get_all_players(-1, t.p);
    if(game.update_player_stats(90,100,5,10000)!=StatusType::SUCCESS)
    {
        cout<<"fail"<<'\n';
    }
    if(game.update_player_stats(91,100,5,10000)!=StatusType::FAILURE)
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
    game.add_player(135, 3, 1, 11, 7, false);
    assert(game. knockout_winner(2,6).ans()==2);
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
   }
    std::cout<<"Success!"<<std::endl;

    return 0;
}
