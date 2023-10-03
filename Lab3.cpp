#include <iostream> 
#include <cstdlib>  
#include <ctime> 
 
void print_arr(double* arr, const int& n) { 
 for (int i = 0; i < n; ++i) { 
  std::cout << arr[i]<<" "; 
 } 
} 
 
int dashka_ulybashka(int& a, int& b) { 
 a = a + b; 
 b = a - b; 
 a = a - b; 
 return a; 
} 
 
int minimum(double* arr, const int& n) { 
 double min = arr[0]; 
 for (int i = 1; i < n; ++i) 
  if (abs(arr[i]) < min) 
   min = arr[i]; 
 //std::cout << "\n\nMinimum element: " << abs(min) << "\n"; 
 return min; 
} 
int summa(double* arr, const int& n) { 
 
 int sum = 0; 
 for (int i = n - 1; i >= 0; --i) 
 { 
  if (arr[i] == 0) 
   break; 
  sum += arr[i]; 
 } 
 //std::cout << "Sum: " << sum << "\n"; 
 return sum; 
} 
void preobr_arr(double* arr, int& n) { 
 std::cout << "Array (even and odd): "; 
 for (int i = 0; i < n; ++i) { 
  if (i % 2 == 0) 
   std::cout << arr[i] << " "; 
 } 
 
 for (int i = 0; i < n; ++i) 
 { 
  if (i % 2 != 0) 
   std::cout << arr[i] << " "; 
 } 
} 
 
int main() { 
 const int N = 1000; 
 double arr[N]; 
 int n; 
 std::cout << "Input number: "; 
 std::cin >> n; 
 while (n <= 0) { 
  std::cout << "CRINGE!!!!!" << std::endl; 
  std::cin >> n; 
 
 }  
  int oper; 
  std::cout << "Input number 0 - random, 1- keyboard : "; 
  std::cin >> oper; 
  switch (oper) { 
  case 0: 
   srand(time(NULL)); 
   int a, b; 
   std::cout << "Input boarders: "; 
   std::cin >> a >> b; 
   if (a > b) { 
    dashka_ulybashka(a, b); 
   } 
   for (int i = 0; i < n; i++) { 
    arr[i] = rand() % (b - a) + a; 
   } 
   break; 
  case 1: 
   std::cout << "Input elements of array:\n"; 
   for (int i = 0; i < n; ++i) { 
    std::cin >> arr[i]; 
   } 
   break; 
  default: 
   std::cout << "Input incorrect value.Get out of my program!"; 
   return 1; 
 
  } 
 
  std::cout << "\nSource array: "; 
  print_arr(arr, n); 
  std::cout << "\n"; 
 
  auto p =  minimum(arr,n); 
  std::cout << "\n\nMinimum element: " << p << "\n"; 
 
  int sum = summa(arr,n); 
  std::cout << "Sum: " << sum << "\n"; 
  preobr_arr(arr, n); 
 
  std::cout << "\n"; 
 return 0; 
}
