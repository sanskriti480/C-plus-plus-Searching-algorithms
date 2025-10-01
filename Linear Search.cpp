//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 20

#include <iostream>

int main() {
    int target;
    int array[10] = {2,3,6,77,4,88,22,78,90,100};
    std::cout<<"Enter a number for search :"<<"\t";
    std::cin>>target;
 
    for(int i = 0; i < 10 ; i++){
        if(array[i] == target){
            std::cout<<"Number found at "<<i<<" index"<<std::endl;
            exit(0);
        }
        else{
            continue;
        }
    }
 
    std::cout<<"Number not found!";
 

    return 0;
}

/*Sample Output:
Enter a number for search :	100
Number found at 9 index
Enter a number for search :	55
Number not found!
*/
