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
