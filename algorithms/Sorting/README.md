# Sorting

Sorting is commonly used as the introductory problem.

In order to test each of the algorithms the file
[data_generator.cpp](data_generator.cpp) can be used to generate a file with a
list of random numbers. The generated file called file.txt must be placed at the same
directory of each of the algorithms to test 

Example of usage:
```
g++ data_generator.cpp -o data_generator
./data_generator
mv file.txt 01_selection_sort
```

[01_selection_sort](01_selection_sort/selection_sort.cpp)  
[02_bubble_sort](02_bubble_sort/bubble_sort.cpp)  
[03_insertion_sort](03_insertion_sort/insertion_sort.cpp)  
[04_merge_sort](04_merge_sort/merge_sort.cpp)  
[05_quick_sort](05_quick_sort/quick_sort.cpp)  
