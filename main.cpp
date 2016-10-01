#include "movie.h"

using namespace std;


int main(void) {
    int n = 4;
    bool error[n];
    Movie *obj = new Movie("weq","qwe","qwe",10,error[1],true);

    cout<<obj -> GetTitle();


    delete obj; obj = NULL;
}
