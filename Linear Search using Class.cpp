//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 20

#include <iostream>
#include <vector>

class SearchArray{
    public :
    int linearsearch(const std::vector<int>&arr, int target){
        for(size_t i = 0; i < arr.size(); ++i){
            //size_t is typedef of unsigned long long
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
    }
};
int main() {
    std::vector<int> data = {2,5,6,4,16,22,77,87,65,88,104};
    // Vector - dynamic array
    int target;
    std::cout<<"Enter a number to search :"<<"\t";
    std::cin>>target;
 
    SearchArray searcher;
    int index = searcher.linearsearch(data,target);
 
    if(index != -1){
        std::cout<<"Target "<<target<<" found at index :"<< index;
    }
    else{
        std::cout<<"Target not found!";
    }

    return 0;
}

/*
Sample Output:
Enter a number to search :	55
Target not found!

Enter a number to search :	77
Target 77 found at index :6
*/
