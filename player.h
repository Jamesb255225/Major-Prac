#ifndef PLAYER_H
#define PLAYER_H
#inlcude <iostream>
#inlcude <string>
using namespace std;

class player
{
		public:
			string player_position;

			int tackle_stat;
			int mark_stat;
			int def_awareness_stat;
			int spoil_stat;
			int goal_kick_stat;
			int handball_stat;
			int kick_stat;
			int speed_stat;
			int stamina_stat;

			int get_attk_stat(int mark_stat, int goal_kick_stat, int handball_stat, int kick_stat, int speed_stat, int stamina_stat);
			int get_def_stat(int tackle_stat, int mark_stat, int def_awareness_stat, int spoil_stat, int speed_stat, int stamina_stat);
			int get_player_overall(int get_attk_stat, int get_def_stat);
}
#endif