#include "movie.h"

using namespace std;


int main(int argc, char const *argv[]) {

    int n = 4;
    bool error[n];
    Movie * obj = new Movie();

    cout << obj -> GetDirectedBy();
    delete obj; obj = NULL;
    return 0;
}
