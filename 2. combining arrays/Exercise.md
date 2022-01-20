## EXERCISE COMBINING ARRAYS

#### Description: 

Given two arrays A and B, both of size en, your task is to obtain a series of arrays of size 2n 
using the elements of the aforementioned arrays. Taking into account that the elements of A are 
a0, a1, ..., an-1 and the elements of B are b0, b1, ..., bn-1, the desired arrays are obtained as
follows:

- Array C is obtained by interleaving arrays A and B in the following way: a0, b0, a1, b1, ... an-1, bn-1.

- Array D is obtained in a similar way to array C only in reverse: an-1, bn-1, an-2, bn-2 ..., a0, b0.

 **Input:**

An integer 4 <= n <= 100, the size of the arrays. Then, in another line, integers corresponding to 
array A are provided. Finally, in another line, integers corresponding to array B are provided.

 **Ouput:**

Two lines, the first contains array C, the second array D.

#### Example:

| Meessage                       | Input |   
|--------------------------------|-------| 
| Enter the size N of the array: | 4     |

| Ouput meessage    | Input                           |   
|-------------------|---------------------------------| 
| Original array A: | [1 - 2 - 3 - 4]                 |
| Original array B: | [2 - 3 - 4 - 5]                 |
| Array C:          | [1 - 5 - 2 - 6 - 3 - 7 - 4 - 8] |
| Array D:          | [4 - 8 - 3 - 7 - 2 - 6 - 1 - 5] |

The console display will be something like this:

**Input:**

Enter size of array:  4    

Enter array A an B: 

Original array A: [1 - 2 - 3 - 4]               

Original array B: [2 - 3 - 4 - 5]                

**Output:**

Array C: [1 - 5 - 2 - 6 - 3 - 7 - 4 - 8] 

Array D: [4 - 8 - 3 - 7 - 2 - 6 - 1 - 5] 

