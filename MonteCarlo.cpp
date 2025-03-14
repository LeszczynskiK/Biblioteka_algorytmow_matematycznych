#include "MonteCarlo.hpp"

MonteCarlo::MonteCarlo(int val) : num_trials(val),sim_result(0.0)//put val to num_trials and set pi value(so far) to zero
{
    
}//constructor

MonteCarlo::~MonteCarlo()
{

}//destructor

void MonteCarlo::runSimulation()
{
    /*                          Idea of this algorithm
    this is all about circle with radius r, and square whoch is on this circle(back of square is equal to 2*r)
    so we have circle inside of square. 
    Area of circle is: Pi*r*r
    //Area of square is 2r*2r = 4*r*r
    compare square and circle: Area(circle/square) = pi/4
    its the same like: pi =4*(circle/square area)
    this algorytm is about generating points in area of square(some of them will also be inside circle!)
    to estimate Pi we need to compare points inside circle and square
    equation is: pi = 4* (points inside circle/all points)
    */

    sim_result =0.0;//start pi value

    for(int i=0;i<num_trials;i++)//iterate throw all of the generation trials
    {
        sim_result +=singleTrial();//add to variable results from sigle trial method(there will be 1 point generated)
    }
    sim_result /= num_trials;//divide by number of trials (to get average value)
    sim_result*=4;//multiply by 4 ( becouse we have in equation 4* area1/area2)
}

void MonteCarlo::displayResult()//Pi value from simulation
{
    cout<<"Po "<<num_trials<<" probach, Pi jest rowne: "<<sim_result<<endl;
    
}

double MonteCarlo::singleTrial()
{
    //the idea is to have square with back equal to 2*1 (so radius is equal to 1)
    //my points will base on (x,y) starts from (0,0) and go on + values axis and - values
    //square is based on: (-1,-1), (-1,1), (1,-1), (1,1)

    //initialise generator
    random_device generator;
    mt19937 gen(generator());//with the grain of 19937 - more random than classin generator from srand(time(NULL))
    uniform_real_distribution<> dist(-1.0, 1.0);//get random points inside square
    //and later check is they are inside circle

    double x = dist(gen);//random x point
    double y =dist(gen);//random y point

    //square is like -r +r on both axis
    //from geometry: if radius of circle is equal to r, then its equation is: x^2 + y^2 <=r^2 , where r=1

    //here i will check if point is inside circle
    double distance=x*x + y*y;//(geometry equation)

    //check is point is inside circle
    return (distance <=1) ? 1.0 : 0.0;//if point inside circle, return 1, if not return 0


}
