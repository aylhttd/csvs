#include <iostream>
#include "/home/noname/CLionProjects/bot/cmake-build-debug/algoritm.h"

using namespace std;

int main() {
    int cot;
    int cog;

    /*fin_count_of_tournaments() >> cot;
    fin_count_of_games() >> cog;*/ //  тут не так, а сначала через функцию надо пропарсить файл

    algoritm bot (cot, cog);
    bot.betting();


    return 0;
}