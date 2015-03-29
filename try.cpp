#include<iostream>
#include<string>
#include<fstream>
#include "BMI.h"
using namespace std;

int main(void){

        BMI A;
        float height;
        float weight;

        ifstream inFile("file.in",ios::in);
        ofstream outFile("file.out",ios::out);

        while(inFile>>height>>weight){
                A.setHeight(height);
                A.setWeight(weight);
                outFile<<A.getValue()<<"\t"<<A.getType()<<endl;
        }



        return 0;
}
