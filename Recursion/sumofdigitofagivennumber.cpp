class Solution{
public:
	int addDigits(int num){
		//your code goes here
        if(num<=9){
            return num;
        }
        return addDigits(num%10+num/10);

	}
};