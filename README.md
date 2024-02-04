{{
01-02-2024
 O(1) space == O(26)
We create vector of 26 size and intial value 0 .Each index corresponding to alphabet (A or a both to index 0)
We traverse string and see char and if index value is 0 then only add 1
At end we traverse 26 element of vector and now if sum==26 then there would have been all alphabet no matter capital or small it would be solved by index and ans is true else false
}}
{{
02-02-2024
At index 0 we may have - for negative apart from that all indexes in string must have 0 to 9 numbers else we return -1
power of 10 to m(total length-1) is multiplied to value at 0 then index increase and m decrease by 1 (In case 0 index is - we increase index and decrease m by 1 and start from increased index
At answer return if 0 index has - so return negative naswer else positive i.e exact answer
}}

{{
03-02-2024
We have an answer already (started from 0)
Now when head is traversed and we reach a particular head now we left shift the ans by 1 and then add the data of head for shifted position  and continue the process till NULL is reached.
}}


{{
04-02-2024
First remove the leading zeroes in both LL
Now calculate the length of both
We will keep h1 as larger number
if first LL length is greater than second LL this is what we wanted
else if first LL is less than second LL we swap them 
else it will be equal length :
                               Now we traverse the head until both pointer are equal
                               when WHEN loop break and both pointer point to NULL means both num are equal
                                else there will be diffence in values :
                                                                        Again if first LL value is less than second LL value we swap
 Now we reverse both LL
 Now traverse from beginning of 1st LL and store its start in prev_start and if 2nd LL is not null so x=value else x=0
   if value of 1st LL pointer is less than x than value+10-x will be stored in 1st LL pointer value and we move to next 1st LL and subtract its value by 1
   else we just subtract 1st LL pointer - 2nd LL pointer and store in first LL pointer and next 1st LL pointer 
   if 2nd LL pointer is not null we move next 
 when h1 is traversed now answer is stored in reverse fashion from prev_start;
 we reverse the prev_start and remove leading zeroes
 if new head point NULL so return new Node(0) else new head
                                                                        
                               
}}

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

31-01-2024
In trie there is a root node which contain path for a to z similar to Linked List.
For insertion we check traversing from root that is there any path from root to that char so move there else create node to it from inital position and when all element are inserted mark leafNode field true.

For search move from root and keep checking that at i th height i th character is present from root if it is not then false and if all element of search are checked we also check its leafNode field true else
it will be prefix not the entire text.
}}
