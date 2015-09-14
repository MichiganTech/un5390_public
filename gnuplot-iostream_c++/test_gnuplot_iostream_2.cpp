//usage: the provided Makefile will compile this file
//output: single_data_set_single_file.eps will be generated
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
    gp << "set output \"single_data_set_single_file.eps\"\n";
    gp << "set size 2.0,2.0\n";
    gp << "set title  \"One set of data points from one file\"\n";
    gp << "set xlabel \"# of processors\"\n";
    gp << "set ylabel \"Time (seconds)\"\n";
    gp << "set xrange [0:18]\n";
    gp << "set grid\n";
    gp << "plot 'single_data_set_single_file.dat' using 1:2 title \"# of atoms = 10\" with linesp lt 1 pt 5\n";
    std::cout << "The output file has been saved in the current folder !" << std::endl;
    return 0;
}
