#include"BMI.h"

float BMI::getValue(){
                        value = weight/((height/100)*(height/100));
                        return value;
                        }

string BMI::getType(float value){
                        string ans;
			if(value<15.0)
                                ans= "Very severely underweight";
			if(15.0<value && value<16.0)
				 ans= "Severely underweight";
                        if(16<value && value<18.5)
                                ans="Underweight";
                        if(18.5<value && value<25.0)
                                ans="Normal";
                        if(25.0<value && value<30.0)
                                ans="Overweight";
                        if(30.0<value && value<35.0)
                                ans="Obese Class I(Moderately obese)";
                        if(35.0<value && value<40.0)
                                ans="Obese Class II (Severely obese)";
			if(value>40.0)
                        	ans="Obese Class III (Very severely obese)";
			return ans;
		}		

void BMI::setHeight(float h){
                        height=h;
                }

void BMI::setWeight(float w){
                        weight=w;
                }


