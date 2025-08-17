class Solution {
    class Pair{
        int first;
        int second;
        Pair(int f, int s){
          first=f;
          second=s;
        }
    }
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
      List<Integer>  ans = new ArrayList<>();
      PriorityQueue<Pair> heap = new PriorityQueue<>((a, b) -> (a.first == b.first) ? b.second - a.second : b.first - a.first); 
      for(int i=0;i<arr.length;i++){
        if(heap.size()<k){
            heap.add(new Pair(Math.abs(arr[i]-x),arr[i]));
        }else{
           Pair top =heap.peek();
           if(top.first>Math.abs(arr[i]-x)){
           System.out.println(i);
            heap.poll();
              heap.add(new Pair(Math.abs(arr[i]-x),arr[i]));
           }
        }

      } 
      while(heap.size()>0){
        ans.add(heap.poll().second);
      }
        Collections.sort(ans);
      return ans;
    }
}