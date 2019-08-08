//
// Created by noname on 07.08.2019.
//

#ifndef BOT_ALGORITM_H
#define BOT_ALGORITM_H

#include "includes.h"


class algoritm
        {
private:
            int count_of_tournaments;
            int count_of_games;
            int bet_summ=10;

public:
    algoritm(int countOfTournaments, int countOfGames);

    int getCountOfTournaments() const;

    void setCountOfTournaments(int countOfTournaments);

    int getCountOfGames() const;

    void setCountOfGames(int countOfGames);

    int getBetSumm() const;

    void setBetSumm(int betSumm);

    void betting ();


};


#endif //BOT_ALGORITM_H
