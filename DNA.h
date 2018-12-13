#ifndef DNA_H
#define DNA_H
#include "Sequence.h"
#include "RNA.h"
enum DNA_Type{promoter, motif, tail, noncoding};
class RNA;
class DNA;

class DNA : public Sequence
{;
    public:
        DNA();
        DNA(char * seq, DNA_Type atype);
        DNA(DNA& rhs);
        const char* detect_DNA_type(const char*&);
             void Print();
            void set_SI(int startindex1);
             void set_EI(int endindex1);
             int get_SI();
             int get_EI();
        RNA ConvertToRNA();
        void BuildComplementaryStrand();
        DNA ConvertToDNA();

        virtual ~DNA();


    protected:

    private:
         DNA_Type type;
        DNA * complementary_strand;
                int startIndex;
        int endIndex;

};

#endif // DNA_H
