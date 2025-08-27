class Solution {
    public int nthUglyNumber(int n) {
        if(n==1){
            return 1;
        }
        PriorityQueue<Long> h= new PriorityQueue<>();
        h.add(1L);
        Set<Long> s = new HashSet<>();
       s.add(1L);
       long t=1L;
        for(int i=0;i<n;i++){
        
            t= h.poll();
          // System.out.println(t);
           if(!s.contains(t*2)){
                 h.add(t*2);
                  s.add(t*2);

           } 
              if(!s.contains(t*3)){
                 h.add(t*3);
                  s.add(t*3);

           }   if(!s.contains(t*5)){
                 h.add(t*5);
                  s.add(t*5);

           } 
          }
        
        return (int) t;
    }
}