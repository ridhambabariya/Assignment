/*Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 ------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include <stdio.h>
#define p printf
#define s scanf
int main()
{
    int marksMaths,marksPhysics,marksChemistry,totalMarks,totalMathsPhysics;
    p("\nInput the Physics marks = ");
    s("%d",&marksPhysics);
    p("\nInput the Chemistry marks = ");
    s("%d",&marksChemistry);
    p("\nInput the Mathematics marks = ");
    s("%d",&marksMaths);
    totalMarks = marksMaths+marksPhysics+marksChemistry;
    totalMathsPhysics = marksMaths+marksPhysics;
    p("\nTotal marks of Maths, Physics and Chemistry = %d",totalMarks);
    p("\nTotal marks of Maths and Physics = %d",totalMathsPhysics);
    if(marksMaths>=65 && marksPhysics>=55 && marksChemistry>=50 && (totalMarks>=190 || totalMathsPhysics>=140))
    {
        p("\nThe candidate is eligible");
    }
    else
    {
        p("\nThe candidate is not eligible");
    }
    return 0;
}