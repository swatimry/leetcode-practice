class KthLargest {
     int k;
     PriorityQueue<Integer> h;
    public KthLargest(int k, int[] nums) {
        this.k=k;
        h=new PriorityQueue<Integer>();
        for(int i=0;i<nums.length;i++){
            if(h.size()<k){
            h.add(nums[i]);
        }
        else{
            if(nums[i]>h.peek()){
                h.poll();
                 h.add(nums[i]);
            }
        }
        }
    }
    
    public int add(int val) {
        
        if(h.size()<k){
            h.add(val);
        }
        else{
            if(val>h.peek()){
                h.poll();
                 h.add(val);
            }
        }
        return h.peek();

    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */