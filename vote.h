#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED

#include "movie.h"

class Vote{
    private:
        int *votes;
        int num;

        void Init(int* );
        void SetVotes(int* );
    public:
        Vote();
        Vote(int* ,int);
        ~Vote();


        void GetVotes(int *, int& );

        int GetRating();

};

#endif // VOTE_H_INCLUDED
