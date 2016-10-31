#ifndef DOCMOVIE_H_INCLUDED
#define DOCMOVIE_H_INCLUDED

#include "movie.h"

class DocMovie: public Movie {
    private:
        char subject[256];

    public:
        void Init(char fSubject[256],bool&errorVar);;
        DocMovie();
        DocMovie(char fTitle[256],char fSubject[256], char fCountry[256], char fDirectedBy[256], int fYear,bool&errorVar);

        void SetSubject(char lSubject[256], bool&errorVar);
        char * GetSubject();

};


#endif // DOCMOVIE_H_INCLUDED
