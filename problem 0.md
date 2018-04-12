#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    int n=10;

    double sum = 0.0;
    double sum2 = 0.0;
    double mean = 0.0;
    double variance = 0.0;
    double standard = 0.0;


    int count6[6] = {0, 0, 0, 0, 0, 0} ;
    int x;
    int min = 1;
    int max = 6;
    srand( (unsigned)time(NULL) );


    for(int i=1;i<=5;i++)
    {
        cout<<"number of trial = "<<n<<endl;
        int count6[n] = {0};


    for(int j=0;j<n;j++)
    {

        x = rand() % (max - min + 1) + min;
        if (x==1)
        {
            count6[0]++;
        }
        if (x==2)
        {
            count6[1]++;
        }
        if (x==3)
        {
            count6[2]++;
        }
        if (x==4)
        {
            count6[3]++;
        }
        if (x==5)
        {
            count6[4]++;
        }
        if (x==6)
        {
            count6[5]++;
        }

    }




    cout << "histogram = {" << count6 [0] <<" , "<< count6 [1]<<" , "<< count6 [2]<<" , "<< count6 [3]<<" , "<< count6 [4]<<" , "<< count6 [5]<<"}"<< endl;
    cout << "frequency = {" << (double)count6 [0]/n <<" , "<< (double)count6 [1]/n<<" , "<< (double)count6 [2]/n<<" , "<< (double)count6 [3]/n<<" , "<< (double)count6 [4]/n<<" , "<< (double)count6 [5]/n<<"}"<< endl;
    cout << "deviation = {" << (double)count6 [0]/n-1.0/6 <<" , "<< (double)count6 [1]/n-1.0/6<<" , "<< (double)count6 [2]/n-1.0/6<<" , "<< (double)count6 [3]/n-1.0/6<<" , "<< (double)count6 [4]/n-1.0/6<<" , "<< (double)count6 [5]/n-1.0/6<<"}"<< endl;

    n=n*10;
    }
    return 0;
}
