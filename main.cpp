#include <iostream>
#include "question.h"

using namespace std;

int main()
{
    question p[5];
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        p[i].question_number=i+1;
        p[i].load();
        p[i].ask();
        p[i].check_answear();
        sum+=p[i].score;
    }

    cout<<"Quiz End, score: "<<sum;
}
