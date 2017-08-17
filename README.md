# Guess and Check Algorithms 
C++ implementation of Guess &amp; Check Algorithms.
# Installation Guide
3rd party library:
Number Theory Library (NTL) by Victor Shoup http://www.shoup.net/ntl/:
This is a wonderful library that effectively deals with calculations in finite field.
Some of the helpful features include performing basic mathematical calculations in finite field; abitrary size numbers, and matrix manipulations in finite field. 
Detailed installation guide can be found in Shoup's website. However, below are some tips to successfully download and install NTL.
1. Use Unix: this library works well with G++ compiler. However, i have not been able to compile it using Visual Studio's complier. If you must use G++ compiler in Windows give MinGW or Cygwin a try.
2. It can easily be install with many Unix pakage manager such as brew: brew install ntl (make sure your IDE know where to search for the ntl files in your local machine)
3. One quick way to compile the code in terminal is:
cd to the folder containing the GC codes and type the following (replace foo with your main.cpp)
% g++ -g -O2 foo.cpp -o foo -lntl -lgmp -lm
4. Add additional linking flags to your linker setting of you IDE: -lntl -lgmp -lm

