#include<iostream>
#include<string>
using namespace std;
class BMI{
	public:
		float getValue();
		string getType(float value);

		void setHeight(float h);
		void setWeight(float w);
	private:
		float height;
                float weight;
                float value;
};




