//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 20

#include <iostream>

int main() {
    int target;
    int repitition[10];
    int array[10] = {2,3,6,100,4,88,100,78,90,100};
    std::cout<<"Enter a number for search :"<<"\t";
    std::cin>>target;
 
 
    std::cout<<"Index :";
    int flag = 0;
    for(int i = 0; i < 10 ; i++){
        if(array[i] == target){
            repitition[flag] = i;
            flag++;
            continue;
            }
        else{
            continue;
        }
    }
 
        if(flag ==0){
        std::cout<<"not found!";
        }
        else{
            for(int i = 0; i < flag; i++){
                std::cout<<repitition[i]<<"\t";
            }
        }


    return 0;
}

/*
Sample Output :
Enter a number for search :	100
Index :	3	6	9
*/
