#include <iostream>
#include "question.h"
#include <fstream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void question::load()
{
    fstream file;
    file.open("questions.txt", ios::in);

    if(file.good()==false)
    {
        cout<<"!Error";
        exit(0);
    }

    int nr_line=(question_number-1)*6+1;
    int actual_number=1;
    string line;

    while(getline(file, line))
    {
        if(actual_number==nr_line) content=line;
        if(actual_number==nr_line+1) a=line;
        if(actual_number==nr_line+2) b=line;
        if(actual_number==nr_line+3) c=line;
        if(actual_number==nr_line+4) d=line;
        if(actual_number==nr_line+5) correct=line;

        actual_number++;
    }

    file.close();
}

void question::ask()
{
    cout<<endl<<content<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"______________________"<<endl;
    cout<<"Answear :"<<endl;
    cin>>choice;
    transform(choice.begin(),choice.end(),choice.begin(),::tolower);
}

void question::check_answear()
{
    if(choice==correct)
    {
        score=1;
    }
    else score=0;
}
