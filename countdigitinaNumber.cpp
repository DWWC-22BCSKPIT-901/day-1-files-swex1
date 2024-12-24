//count digit in a number 
 #include <iostream> 
int countDigits_iterative(long long n) { 
int count = 0; 
if (n == 0) { 
return 1;  
} 
while (n != 0) { 
n /= 10; 
count++; 
} 
return count; 
} 
int main() { 
long long number; 
std::cout << "Enter a number: "; 
std::cin >> number; 
std::cout << "Number of digits (iterative): " << countDigits_iterative(number) << std::endl; 
return 0; 
}