//usage: the provided Makefile will compile this file
//output: plot_sine.eps will be generated
//tested on: Linux Ubuntu 14.04 and Mac OS Yosemite

#include <stdio.h>
#include <iostream>
// Give the absolute location where the gnuplot-iostream.h file is,
// or copy the header in the same folder as the code source file.
#include </Users/Anuj/Documents/Research/gnuplot-iostream/gnuplot-iostream.h>
int main()
{
    std::cout << "Hello World" << std::endl;
    // Create an instance of the Gnuplot class
    Gnuplot gp;
    // Gnuplot script commands
    // Note the subtle changes: \"Helvetica\" instead of "Helvetica"
    // and the \n newline at the end.
    gp << "set terminal postscript eps enhanced color \"Helvetica\" 24\n";
    gp << "set output \"plot_sine.eps\"\n";
    gp << "plot sin(x)\n";
    std::cout << "The output file has been saved in the current folder !" << std::endl;
    return 0;
}
