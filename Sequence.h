#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <iostream>
using namespace std;


class Sequence
{
    public:
        Sequence();
        void set_seq(char* seq1);
        char* get_seq();
        Sequence ( Sequence&rhs);
        friend istream& operator>>(istream& in,Sequence *seq2);
         friend char* Align(Sequence * s1, Sequence * s2);
        virtual ~Sequence();

    protected:
        char* seq;

    private:
};

#endif // SEQUENCE_H
