//
// Created by noname on 08.08.2019.
//

#ifndef BOT_INCLUDES_H
#define BOT_INCLUDES_H

#include <fstream>

std::ifstream fin_count_of_tournaments (/*filename*/);
std::ifstream fin_count_of_games (/*filename*/);
std::ifstream fin_game_line(/*filename*/);

std::ofstream fout_tournament_number (/*filename*/);
std::ofstream fout_game_number (/*filename*/);

#endif //BOT_INCLUDES_H
