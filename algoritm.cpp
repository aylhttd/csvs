//
// Created by noname on 07.08.2019.
//

#include "algoritm.h"

int algoritm::getCountOfTournaments() const {
    return count_of_tournaments;
}

void algoritm::setCountOfTournaments(int countOfTournaments) {
    count_of_tournaments = countOfTournaments;
}

int algoritm::getCountOfGames() const {
    return count_of_games;
}

void algoritm::setCountOfGames(int countOfGames) {
    count_of_games = countOfGames;
}

int algoritm::getBetSumm() const {
    return bet_summ;
}

void algoritm::setBetSumm(int betSumm) {
    bet_summ = betSumm;
}

algoritm::algoritm(int countOfTournaments, int countOfGames) {
    count_of_tournaments = countOfTournaments;
    count_of_games = countOfGames;
}

void algoritm::betting() {
    for (int i = 0; i < this->getCountOfTournaments(); i++)
    {
        fout_tournament_number() << i+1;
        for (int j = 0; j < this->getCountOfGames(); j++)
        {
            fout_game_number() << j+1;
            //вывод единицы для выбора основной игры а не конкретной четверти(неплохо бы проверять)
            //функция которая в файле fin_game_line найдет чет/нечет
            //если возвращаемное число отрицательное, то следующий матч, если положительное, то ставка

        }
    }
}
