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
05-02-2024
We have a circular LL
if head is null we create an node and do it self point to make circular LL
if data to be inserted is even less than equal data of head :
                                                             we take data of head to temp and create new node of temp ,we put data to be inserted at head and do new node connections
Now sure data will  be greater than head and we will iterate head until we reach start or value become less than equal current pointer.We keep account of prev and current i.e. till which data is greater than current when this is false we create a new node between prev and current.If it was maximum among all then temp would have been to start hence loop teminates and new data will get inserted between last and first
                                                                        
}}


{{
06-02-2024
Will traverse and push and pop in vector according to recursion.
if root->left and root->right both are null so it is leaf and we check from back of vector at k position if exist so put its addrress in set
if root is null we return, as it is not leaf node
                                                                        
}}



{{
07-02-2024
Make child to parent relation 
find the two node position
maintain a distance counter as 0
Will push A node in queue and mark visited in set :  
                         see the size of queue:
                                               pop the element
                                               check if it is  equal to B node:
                                                   return counter 
                                               else:
                                                  see is its children are not null then not in set then push in queue (both left and right one by one)
                                                  check its parent is existing and not in set so push it too in queue
                         increase the counter
                                                                        
}}


{{
08-02-2024
Check the minimum height and maximum height of tree
if both are equal the all leaft node are at same level else not
                                                                        
}}

{{
09-02-2024
Check from root.
if root is null return 1
if leaf node then return 1
Make its left and right as zero and if they exist intitialize them and compare their sum with root value if equal return 1 else 0
}}

{{
10-02-2024
Similar  to DP all path except that sum must be equal to k
At any instant sum exceed k mean no path possible so that return 0
else call for right and down
}}


{{
11-02-2024
indexing from 0
if last element is grater than index value and not in set
                                                we take last element and substract from index
                                                else 
                                                add index value to last element
                                         push in vector 
before moving next index we insert last element in set
}}



{{
12-02-2024
There is val starting from 1
Outer loop works from 1 to n
Inner loop works till outer loop 
   we calculate answer and val is always increased
 add temp answer to final answer
  
}}


{{
13-02-2024
We store map for new nodes created and there new addresses.
Beginning with node give we copy it to ans node and create queue for given graph 
We push the given graph node into queue
   We take element from front of queue see its neighbours 
   if they do not exist in map we create them and mark the key value pair in map.
      we push them in queue as well when we create them for first time
    We push  map[x->val] in map[f->val].neigbours
return ans node 
}}


{{
14-02-2024
TARJAN'S ALGO Used to find the bridges / Critical Edges of a graph. DFS Traversal is used. Here, we have to maintain 3 variables or vectors to store info about each node:-
1) Visitied array for performing DFS.
2) A timer variable denoting the time it takes to reach that particular node while DFSing.
3) A lowestTime variable which indicates that the particular variable can be reached alternatively through some other node instead of its Parent Node. (If it wasn't for the sake of vdo, i would've named it better like alternateAddress smthng.) STEPS: 1) Upon reaching a node, mark it as visited and set it's time and lowestTime to the global timer value and also increment that global timer for next nodes. 2) using a for loop, visit all its children IF they aren't visited yet(just like a normal DFS). After Returning from the DFS call, if(lowestTime[child] < lowestTime[node]) Then set lowestTime[node] = lowestTime[child]; ELSE check if it's a Bridge (if lowestTime[child] > Time[node]) add it to Bridge. 3) If a child is already visited, neither we visit it, nor do we check if it's a Bridge becoz we sure know that if it's already visited, then it has another path by which it was visited earlier. So we'll only fetch it's lowestTime, if(lowestTime[child] < lowestTime[node]) Then set lowestTime[node] = lowestTime[child].        
Complexities: Time O(V + 2E) Space O(3V)
for vis, address, alternateAdd Code: (Note that in place of time, lowestTime i've used variable names as address and alternateAdd respectively; it's just names so doesn't matter anyways)
}}

{{
15-02-2024
Graph is already connected so need not to check it.
If all the vertices of connected graph have even degree then we have euler cicruit possible.
}}

{{
16-02-2024
 We store prev and dummy as a node pointing to a new node -1.
 No we move left and when we reach the one node whose is null we return and connect the right of prev(gobally manipulated) to current node and make left of prev NULL and move prev to right .
 Now we call for right of curr node.
 Th prev is passed as reference as that is manipulated.
 At end prev point to last whose left and right are made NULL to terminate and we return the right of dummy node.
}}


{{
17-02-2024
for every index i check its child that parent i is greater than 2*i+1 and 2*i+2
Maximum index to check is (n-1)/2 
}}


{{
18-02-2024
Look for leaf node and add it to global variable if is leaf node in traveseral
}}


19-02-2024
We have to minimize the frequency of each character so we store freq in priority queue and for k time we take the maximum frequency and reduce by 1
}}


{{
20-02-2024
We search for all the possibility from a index.
From the given index to remaining length possible we check is it possible for any substring so we return true else we return false.
}}


{{
24-02-2024
We need to check that wheather is n maximum or when spilted in (n/2 , n/3 , n/4) is maximum.
For n==0 answer will be 0 
We memoize as common subproblem exist through dp
}}


{{
26-02-2024
Create all possible subsequences and store in multiset.
Take an index value or not take an index value
when take index value append to current string else send same string as it is.
}}

{{
27-02-2024
Every element is equal to XOR of current and next element.
}}


{{
28-02-2024
For size of number less than equal to 3 directly see divisibility else sum of last three number is divisible by 8 then number is completely divisble by 8 so if happen return 1 else -1
}}


{{
29-02-2024
At every bit postition, check for the number of 1 and 0 .There combination which will lead to zero will be ( number of 1 )* (number of 0 ).At the end ans * 2 
}}

04-03-2024
{{
Custom sort on basis of that two string in such a way that two when added is greater 
}}


05-03-2024
{{
Maintain a minimum array from 0 to j and maximum from to j to n.
let m and n point to min and max array
if m<n then move n forward and maintain answer else move m forward.
At end return answer
}}

06-03-2024
{{
Standard Robin Karp (Rolling Hash Problem)
}}

08-03-2024
{{
 Count the frequency of frequency in map
 If map size is 1 means only 1 type frequency is there so return 1
 if greater than 2 no way by deleting one char all frequrncy can be equal
 if size is two and if both do not have count of frequency of frequency 1 return 0
 
 else return abs difference between key is 1 so 1 else 0
}}

09-03-2024
{{
Keep creating new string based on rules but when its size exceed the index we need to break and make it as base string anc continue for new round.
}}

10-03-2024
{{
Maintain a set to have element visited.
While traversing if that char is not visited add it to result and mark it as visited
return result at end
}}


11-03-2024
{{
Traverse from start of matrix 1 and end of matrix 2 utilizing the advantage them being sorted.
Do traversal until rows of both are completely traversed.For columns if end and start are reach and then they move out of bound move the rows.
}}


15-03-2024
{{
Make array from top to bottom and from left to right whose value shows number of continues X from left to right and top to bottom as end point.
Now its minimum will get us the maximum size of square possible.
Check for left and top considering the size and if it is possible to construct a square else for minimum-1 till>0 and update overall answer if construction is possible.
}}



16-03-2024
{{
Copy next element to current and now connect current to address of address stored in next element.
}}


18-03-2024
{{
Breadth first Search
}}

20-03-2024
{{
Take global depth and global answer.If temporary depth is greater than global depth,global answer is updated and if temporary depth and global depth are equal answer will be max of global and temporary answer.
}}

21-03-2024
{{
Taking root level as 0.
Do BFS and and at even level push in res vector as normal else when odd level take values in stack and do normal BFS along but just when you exit this particular level BFS empty stack in res vector.
}}

22-03-2024
{{
make a queue and push the root.
Take the size of queue and for each front move right as much as possible and push left in queue every time if exist and right movement possible.
Every time the size of queue will contain element corresponding to a diagonal ,right being value and left being the next level of diagonal.
}}


23-03-2024
{{
Standard fibonacci series.
}}

24-03-2024
{{
Recursively pop the element of stack and when it beacomes empty push the new element and again push the element just after you called the recurive function.
}}

25-03-2024
{{
Recursively form all the combination of n size.
When a n-size combination is formed go to check function ,counting prefix 0 and prefix 1 from index 0 to size (i.e n) and if any time prefix count of 1<prefixx count 0 return false else after whole size is traversed and false is not returned so return true implying for every prefix count of 1>=0 and include that pattern in our answer.
}}

26-03-2024
{{
Break the string into two part first and second as "123456789" -> 1 234... || 12 34567... || 123 45678.. || 1234 5678.. 
                                                                  1 2 34567 || 1 23 456... || 1 234 567... || 1 2345 678...
                                                                  Now we get first and second make the sum using carry as it may be greater than 2^31 
                                                                  now check if matches the next so call for next part.
}}

27-03-2024
{{
For all near 0 mark as -1
start from 0th col and maintain global step and step for start from i-th row and 0-th column and call helper function if valid i.e 1 at that i,j and try go so go in all possible direction after marking the current as visited and if it will be 1 in help called so will continue as 1+s else not.At end if we reach end column then for sure need to return but if it also 1 so this will be 1+s (add 1f ro current index) and update in global s.Take the minimum as for all possbile path.Need to unvisit the i,jwhen we leave the loop in help function .At then end if answer is INT_MAX so return -1 as not path possible else ans.
}}

29-03-2024
{{
Graph must be connected and all must be even degree.(Graph theory)
}}

30-03-2024
{{
Move left till possible else return root's data.
}}

{{
01-04-2024
 The inorder of BST gives us a sorted array.
 To figure the numbers of pair voilation is actually figuring out the inversion occured with the help of merg sort.
 When merge sort is done and at any instant we have left and right subarray.Now while filling it in acutal array if i< j and a[i]>b[j] will show the voilation along with this i, since left would be sorted so not only this will be pair all i to the end of left (sorted in inc) will have this applicable [a[i]>b[j] => a[i]<a[i+1] < .... <a[n1-1] will all be >b[j]] so take them as n1-i.At the end return the inversion possible with help of all mergeSort and merge done.
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
