{{
16-01-2024
 arr[i+1]>=2*arr[i] && arr[i]>0
 int index and value
 Begin with index=0 and value=1 we can either :
 Take the value,move to next index and twice the value
 Not take the value,be on same index and increase the value by 1
 if index reaches last (that is out of bound) return 1 
 if value is strictly greater than limit at any point return 0
}}

{{
17-01-2024
 We have n space for perumtation that is size of array.
 At each index starting from zero we can have insert any element from array
 If any element is taken (we will be knowing which index value of array is taken) than will move next index but will mark the element previously taken as true and insert in temp vector
 Will repeat same and if index reaches out of bound we check such that temp vector created is not in set so will push in result
 In order to achieve permutation we bracktrack by popping element from temp and mark taken as not taken so for that index we can take other values and value used previously by current index 
 can be used by proceeding indexes.
}}


{{
18-01-2024
For all elements of gallery find the min and max range.If g[i]==-1 insert 1e9 as max and min as it is out of range than input size.
Now sort the vector of pair 
take is next position to be sprinkled ,index is traversing in vector of pair and ans for answer
nas is the last sprinkled
we need to move till take<n as when take is n so all position are sprinkled
we take all those for which first value of vector is less than take and nas keeps the maximum of second value of vector
if condition fails to match so till nas(maximum values for right)  is reached and nas+1 will be new_take 
if nas+1 (new_take) <=take (old) we will not be able to sprinkle complete else  take=nas+1;

}}


{{
19-01-2024
when reaches a particular index
map store the element and frequency of it
Traverse vector of pair and store the element and frequency if not exist  else update the frequncy
sort with custom function that first sort on basis of frequency if not equal else on basis of value
Now check minimum of vector of pair size and K element we want to take and push them in temp vector
push temp vector in result vector
}}

{{
30-01-2024
Similar to LCS of two string.
If index at i,j,k of a,b,c are same then 1+call for next indexes of all three
else three possibilties will be there that is either increase i and keep j,k same Similarly for other two.
}}
