//
// Created by tseyu on 12/30/22.
//

#ifndef EXERCISE1_STUINFO_HPP
#define EXERCISE1_STUINFO_HPP
struct stuinfo
{
    char name[20];
    double score[3];
    double ave;
};
void inputstu(stuinfo stu[], int n);
void showstu(stuinfo stu[], int n);
void sortstu(stuinfo stu[], int n);
bool findstu(stuinfo stu[], int n, char ch[]);

#endif //EXERCISE1_STUINFO_HPP
