/*

    1. In this file, and every file created for this class, add comments at the top of the file that include:
        - Exams.cpp
        - For this file is similar to the MPG file, but no I have to use 3 exams to input. Then I have to find the average score for all three at the end 
        - Javaughn Bradford 
        - 1-29-24

*/
#include<iostream>

int main(){
        // input questions 
        std::string desc;
        int exam1;
        int exam2;
        int exam3;
        float avg;


        std::cout<<"Enter your name : ";
        std::getline(std::cin, desc);
        std::cout<<"Score for Exam 1 : ";
        std::cin>>exam1;
        std::cout<<"Score for Exam 2 : ";
        std::cin>>exam2;
        std::cout<<"Score for Exam 3 : ";
        std::cin>>exam3;

        // calculate the average for all scores 
        avg = (exam1 + exam2 + exam3) / 3;

        std::cout<<"\n";
        std::cout<<"Here are the exams points for " + desc + ":"<<std::endl;
        std::cout<<"For exam 1: " << exam1 << " out of 100 "<<std::endl;
        std::cout<<"For exam 2: " << exam2 << " out of 100 "<<std::endl;
        std::cout<<"For exam 3: " << exam3 << " out of 100 "<<std::endl;
        std::cout<<"Your average score for all three is " << avg << " out of 100 points!"<<std::endl;


        return 0;
}
