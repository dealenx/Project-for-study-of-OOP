#include "vote.h"


using namespace std;

void Vote::Init(int *lVotes) {
    SetVotes(lVotes);
}

Vote::Vote() {
    num = 1;
    votes = new int[num];
    int fVotes[num] = {0};
    Init(fVotes);
}
Vote::Vote(int *fVotes, int fNum) {
    num = fNum;
    votes = new int[num];
    Init(fVotes);
}
Vote::~Vote() {
    delete[] votes;
}

void Vote::SetVotes(int* lVotes) {

    for(int i = 0; i < num; i++) {
        votes[i] = lVotes[i];
    }
}

void Vote::GetVotes(int* lVotes, int& lNum) {
    for(int i = 0; i < num; i++) {
        lVotes[i] = votes[i];
    }
    lNum = num;

}

int Vote::GetRating() {
    int sum = 0;
    for(int i = 0; i < num; i++) {
        sum += votes[i];
    }
    return sum/num;
}
