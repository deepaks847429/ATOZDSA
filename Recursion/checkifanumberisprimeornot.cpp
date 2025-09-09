class Solution{	
	public:
		bool checkPrime(int num){
			//your code goes here
            if(num<=1){
                return false;
            }
            return checkPrimeHelper(num, 2);


		}
    private:
         bool checkPrimeHelper(int n, int i){
            if(i*i >n) return true;
         
         if(n%i==0) return false;
         return checkPrimeHelper(n, i+1);
}
};