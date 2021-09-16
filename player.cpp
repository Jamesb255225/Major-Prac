#include <iostream>
#include <string>
#include <"player.h">
using namespace std;

int get_attk_stat(int mark_stat, int goal_kick_stat, int handball_stat, int kick_stat, int speed_stat, int stamina_stat)
{
	return ((mark_stat+goal_kick_stat+handball_stat+kick_stat+speed_stat+stamina_stat)/6)
}