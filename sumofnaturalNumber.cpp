 //sum of natural Number up to N 
 #include <iostream> 
int main() { 
int n; 
std::cout << "Enter the value of N: "; 
std::cin >> n; 
int sum = 0; 
for (int i = 1; i <= n; ++i) { 
sum += i; 
} 
std::cout << "Sum of natural numbers up to " << n << " is: " << sum << std::endl; 
return 0; 
}