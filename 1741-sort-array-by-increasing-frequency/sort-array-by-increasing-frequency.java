class Solution {
     class Pair{
        int first;
        int second;
        Pair(int f, int s){
          first=f;
          second=s;
        }}
    public int[] frequencySort(int[] nums) {
        int k= nums.length;
        Map<Integer,Integer> m=new HashMap<>();
       PriorityQueue<Pair> heap = new PriorityQueue<>(
    (a, b) -> {
        if (a.first == b.first) {
            return b.second - a.second; // Compare by value if frequencies are same
        }
        return a.first - b.first;       // Compare by frequency first
    }
);
        for(int x: nums){
            m.put(x, m.getOrDefault(x, 0) + 1);
        }
         m.forEach((key,value)->{
         
                    heap.add(new Pair(value,key));

               
        });
        int[] ans=new int[k];
        int i = 0;
        while (!heap.isEmpty()) {
            Pair top=heap.poll();
            for(int j=0;j<top.first;j++)
            ans[i++] = top.second;
        }
        return ans;    
    }
}