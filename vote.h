#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED

class Movie;
class Vote{
    private:
        Movie * objMovie;
        int *votes;
        int num;
        bool viewVar = true;

        void Init(int* , int);
    public:
        Vote();
        Vote(Movie *);
        Vote(int* ,int);
        ~Vote();

        void SetVotes(int* , int);
        void GetVotes(int *, int& );

        float GetRating();

};

#endif // VOTE_H_INCLUDED
