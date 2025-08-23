class Solution {
    class Distance{
        int dis;
        int[] point;
        Distance(int dis,int[] point){
            this.dis=dis;
            this.point=point;
        }
    }
    public int[][] kClosest(int[][] points, int k) {
         int[][] ans= new int[k][2];
         PriorityQueue<Distance> heap= new PriorityQueue<Distance>((a,b)->{
            return b.dis-a.dis;
         });
         for(int[] x: points){
            int a=x[0];
            int b=x[1];
             int diff = a * a + b * b;
            if(heap.size()<k){
                heap.add(new Distance(diff,x));
            }
            else{
                Distance d=heap.peek();
                if(d.dis>diff){
                    heap.poll();
                     heap.add(new Distance(diff,x));
                }
            }
         }
         int i=0;
         while(!heap.isEmpty()){
            Distance top=heap.poll();
           ans[i++]=top.point;
         }
         return ans;
    }
}