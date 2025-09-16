class Solution {
public:
    // Function to count primes up to n
    int primeUptoN(int n) {
        int count = 0;
        
        for (int i = 2; i <= n; i++) {   // start from 2, since 1 is not prime
            if (isPrime(i)) {
                count++;
            }
        }
        return count;
    }

private:
    // Helper function to check if a number is prime
    bool isPrime(int x) {
        if (x < 2) return false;
        if (x == 2) return true;
        if (x % 2 == 0) return false;
        
        for (int i = 3; i * i <= x; i += 2) {
            if (x % i == 0) return false;
        }
        return true;
    }
};
