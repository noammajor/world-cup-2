#include <iostream>
#include "AVL_tree.h"
#include "worldcup23a1.h"
#include <cstdlib>
#include <set>

using namespace std;


int main() {
    world_cup_t test;
    int ar[1000]={0};
    for (int i = 0; i < 1000; ++i)
    {
    ar[i]=i+1;
    }
    for(int i=0;i<1407;i++) {
        if (i == 1406) {
            test.add_team(i + 2, i + 1);
            test.add_player(ar[i], i + 1, i + 1, i + 1, i + 1, true);

        }
        test.add_team(i + 2, i + 1);
        test.add_player(ar[i], i + 1, i + 1, i + 1, i + 1, true);
        test.print();
    }
return 0;


}
