#include "movie.h"

using namespace std;


int main(int argc, char const *argv[]) {


    int n = 4;
    bool error[n];
    int *votes = new int[n];
    votes[0] = 6;
    votes[1] = 10;
    votes[2] = 6;
    votes[3] = 10;

    Serials * obj = new Serials();

    obj -> SetVoteRating(votes, n);
    cout << obj -> GetVoteRating() << endl;

    cout << endl << obj -> GetAbout() << endl << endl;

    delete obj; obj = NULL;

    return 0;
}
