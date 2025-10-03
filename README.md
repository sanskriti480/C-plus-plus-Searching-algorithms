# Experiment 20: Searching Algorithms in C++
 
## Aim
---

To implement and analyze different **search algorithms** in C++, including:  
1. Linear Search  
2. Binary Search  
3. Linear Search handling repeated data  

---

## Objectives
- Understand the concept of **searching** in data structures.  
- Learn different **search algorithms** and their use-cases.  
- Implement **linear and binary search** in C++.  
- Compare search algorithms based on **time complexity, memory usage, and efficiency**.  
- Apply search algorithms in **real-world applications**.

---

## Tools Used
- VS Code  
- C++ Online Compiler  

---

## Theory
---

### Why C++ is More Efficient than C

1. Object-Oriented Programming (OOP):
   - Supports classes, inheritance, and polymorphism.
   - Enables modular, reusable, and maintainable code.
2. Standard Template Library (STL):
   - Prebuilt, highly optimized containers (like vector, map) and algorithms (sort, search).
   - Reduces coding effort and improves runtime efficiency.
3. Better Memory Management:
   - Features like RAII (Resource Acquisition Is Initialization) and smart pointers manage memory safely.
   - Reduces manual memory handling errors common in C.
4. Type Safety and Abstraction:
   - Function overloading, templates, and references provide safer and faster operations.
   - Allows writing generic code without sacrificing performance.
5. High Performance:
   - Combines the low-level control of C with high-level abstractions.
   - Efficient for large-scale, complex applications where performance matters.

### What is a Search Algorithm?
A **search algorithm** is a method used to **locate a specific element** within a data structure like an array, list, or database.  
- Essential for **data retrieval** in databases and applications.  
- Forms the basis for more advanced algorithms like **graph search** and **hashing**.  
- Efficiency of search algorithms affects the **performance** of programs, especially with large datasets.  
- Can be applied to both **static** and **dynamic** data structures.  
- Important in **real-time systems** where quick access to data is required.  

---

### Types of Search Algorithms
1. **Linear Search (Sequential Search)**  
   - Checks each element of the array **one by one** until the target element is found or the end is reached.  
   - Works on both **unsorted** and **sorted** data.  
   - Simple to implement and understand, but **less efficient** for large datasets.  

2. **Binary Search**  
   - Used on **sorted arrays**.  
   - Repeatedly divides the search interval in half.  
   - Compares the target value with the middle element, narrowing down the search range.  
   - More efficient than linear search for large datasets (**O(log n)**).  
   - Requires **sorted data**, and additional care must be taken for dynamic arrays.  

3. **Linear Search for Repeated Data**  
   - Finds **all occurrences** of the target element.  
   - Returns **all indices** where the target appears.  

---

### Advantages and Disadvantages

| Algorithm         | Advantages                                                                 | Disadvantages                                         |
|------------------|---------------------------------------------------------------------------|------------------------------------------------------|
| Linear Search     | - Simple to implement and understand                                       | - Slow for large arrays, O(n) time                   |
|                  | - Works on both sorted and unsorted data                                   | - Inefficient when dataset is large                  |
|                  | - No preprocessing required                                                | - May require checking all elements before finding target |
|                  | - Stable search (preserves order of equal elements)                        | - Higher time complexity for repeated searches      |
| Binary Search     | - Very fast for large sorted datasets (O(log n) time)                      | - Requires sorted data                               |
|                  | - Efficient for repeated searches                                         | - Slightly more complex to implement than linear    |
|                  | - Reduces number of comparisons significantly                             | - Not suitable for small unsorted datasets          |
|                  | - Can be implemented recursively or iteratively                             | - May require additional care for dynamic arrays or insertion/deletion operations |

---

### Differences Between Linear and Binary Search

| Feature            | Linear Search                     | Binary Search                          |
|-------------------|----------------------------------|---------------------------------------|
| Data Requirement   | Works on unsorted arrays          | Works only on sorted arrays           |
| Time Complexity    | O(n)                              | O(log n)                               |
| Method             | Sequentially checks each element | Divides search interval by half       |
| Memory             | O(1)                              | O(1)                                   |
| Use Case           | Small or unsorted datasets        | Large, sorted datasets                 |
| Stability          | Always stable                     | N/A                                    |

---

### Industrial Applications
---

**Linear Search:**  
- Small embedded systems with limited resources  
- Simple lookup operations in unsorted datasets  
- Searching in linked lists where random access is not possible  
- Educational purposes for teaching basic algorithms  
- Real-time systems with small data  
- Debugging tools for small arrays or memory inspection  

**Binary Search:**  
- Database indexing and query optimization (MySQL, Oracle)  
- File system searches, locating files in directories  
- Search engines for sorted datasets  
- Autocomplete and spell-check features  
- Large-scale data retrieval in cloud computing or enterprise systems  
- Searching in sorted arrays, trees, or other sorted data structures  

---

### Why Use a Class in Search Algorithm?
---

1. **Encapsulation:**  
   - Groups the search logic into a single unit (class).  
   - Makes the code **modular and reusable** across different programs.

2. **Object-Oriented Design:**  
   - Enables creating multiple instances if needed.  
   - Allows **future extensions** without modifying existing code.

3. **Cleaner Code:**  
   - Separates the search logic from the main function.  
   - Improves **readability** and maintainability.
   - 
---

## Algorithms
---

### 1. Linear Search (Single Occurrence)
1. Start  
2. Read target value  
3. For i = 0 to n-1:  
   - If arr[i] == target, print index and stop  
4. If not found, print “Number not found”  
5. Stop
```
+---------------------+
|        Start        |
+---------------------+
           |
           v
+---------------------+
| Read target value   |
+---------------------+
           |
           v
+---------------------+
| Initialize i = 0    |
+---------------------+
           |
           v
+--------------------------+
|      Is i < n ?          |
+--------------------------+
       |Yes              |No
       v                 v
+----------------+  +---------------------+
| Is arr[i] ==   |  | Print "Not Found"   |
| target ?       |  +---------------------+
+----------------+       |
       |Yes              |No
       v                 v
+---------------------------+
| Print "Found at i"        |
+---------------------------+
              |
              v
+---------------------+
|        Stop         |
+---------------------+

```

### 2. Binary Search (Sorted Array)
1. Start  
2. Read target value  
3. Set low = 0, high = n-1  
4. While low <= high:  
   - mid = (low + high)/2  
   - If arr[mid] == target, print index and stop  
   - Else if arr[mid] < target, low = mid + 1  
   - Else, high = mid - 1  
5. If not found, print “Number not found”  
6. Stop

```
+---------------------+
|        Start        |
+---------------------+
           |
           v
+---------------------+
| Read target value   |
+---------------------+
           |
           v
+---------------------+
| Initialize low=0,   |
| high=n-1            |
+---------------------+
           |
           v
+---------------------+
| Is low <= high ?    |
+---------------------+
       |No          |Yes
       v             v
+----------------+  +---------------------+
| Print "Not     |  | mid = (low+high)/2  |
| Found"         |  +---------------------+
+----------------+          |
                            v
                +----------------------------+
                | Is arr[mid] == target ?    |
                +----------------------------+
                |Yes                |No         
                v                   v
        +----------------+  +----------------------+
        | Print "Found"  |  | Is arr[mid] < target?|
        +----------------+  +----------------------+
                                |Yes       |No
                                v           v
                         low = mid +1   high = mid -1
                                |
                                v
                      Repeat low <= high?
                                |
                                v
                              Stop

```

### 3. Linear Search (Repeated Data)
1. Start  
2. Read target value  
3. Initialize empty array to store indices  
4. For i = 0 to n-1:  
   - If arr[i] == target, store index  
5. If array of indices is empty, print “Not found”  
6. Else, print all indices where target is found  
7. Stop

```
+---------------------+
|        Start        |
+---------------------+
           |
           v
+---------------------+
| Read target value   |
+---------------------+
           |
           v
+---------------------+
| Initialize i = 0    |
| Initialize index[]  |
| flag = 0            |
+---------------------+
           |
           v
+---------------------------+
|       Is i < n ?          |
+---------------------------+
       |No                 |Yes
       v                   v
+----------------+     Check arr[i] == target?
| Flag = 0 ?     |--Yes--> Store i in index[], flag++
+----------------+        |
       |No                |No
       v                  v
 Print indices          i = i + 1
 of all matches           |
       |                  |
       v                  v
       +------------------+
                |
                v
              Stop

```

### 4. Linear Search Using Class
1. Define class with member function `linearsearch()`  
2. Pass array/vector and target to function  
3. Loop through array to find target  
4. Return index if found, else return -1  
5. In main, call class function and print result  
6. Stop

### 5. Sequential search

1. Start
2. Initialize an array with n elements.
3. Read the target value to search from the user.
4. Set a boolean flag found = false.
5. For each index i from 0 to n-1:
   - If array[i] == target:
      - Print "Number found at index i".
      - Set found = true.
      - Exit the loop.
6. If found is still false after the loop:
   - Print "Number not found!".
7. End

---


### Concepts used
---

- Arrays: Store and access data elements sequentially.
- Loops: Traverse arrays for searching.
- Conditional Statements: Compare elements to the target.
- Functions: Encapsulate search logic for modularity.
- Classes (OOP): Organize search operations (optional).
- Vectors: Store indices for repeated occurrences.
- Time Complexity: Analyze efficiency (O(n) for Linear, O(log n) for Binary).
- Input/Output: cin and cout for user interaction.

---

### Conclusion
- **Linear Search** is simple and versatile.  
- **Binary Search** is faster for sorted data due to logarithmic time complexity.  
- Algorithm choice depends on **dataset size, sorting, and application requirements**.  
- Using **OOP (classes)** improves code organization, readability, and reusability.

---
