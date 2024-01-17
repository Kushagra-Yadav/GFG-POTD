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
