#include"BMI.h"

float BMI::getValue(){
                        value = weight/((height/100)*(height/100));
                        return value;
                        }

string BMI::getType(){
                        if(value<15.0)
                                return "Very severely underweight";
                        else if(15.0<value && value<16.0)
                                return "Severely underweight";
                        else if(16<value && value<18.5)
                                return "Underweight";
                        else if(18.5<value && value<25.0)
                                return "Normal";
                        else if(25.0<value && value<30.0)
                                return "Overweight";
                        else if(30.0<value && value<35.0)
                                return "Obese Class I(Moderately obese)";
                        else if(35.0<value && value<40.0)
                                return "Obese Class II (Severely obese)";
                        else
                                return "Obese Class III (Very severely obese)";
                }

void BMI::setHeight(float h){
                        height=h;
                }

void BMI::setWeight(float w){
                        weight=w;
                }


