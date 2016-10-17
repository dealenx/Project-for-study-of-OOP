#include "movie.h"

using namespace std;


int main(int argc, char const *argv[]) {


    int n = 4;
    bool error[n];
    int *votes = new int[n];
    int votes2[4];
    votes[0] = 6;
    votes[1] = 12;
    votes[2] = 6;
    votes[3] = 12;
    /*
    Movie * obj = new Movie();

    cout << obj -> GetDirectedBy();
    delete obj; obj = NULL;*/
    Vote * obj = new Vote(votes, n);

    cout << obj -> GetRating();

    delete obj; obj = NULL;

    return 0;
}
