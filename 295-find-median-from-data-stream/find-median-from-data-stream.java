class MedianFinder {
PriorityQueue<Integer>  minh;
PriorityQueue<Integer>  maxh;
boolean even=true;
    public MedianFinder() {
        this.minh= new PriorityQueue<>();
         this.maxh= new PriorityQueue<>((a,b)->b-a);

    }
    
    public void addNum(int num) {
      if(even){
              minh.add(num);
              maxh.add(minh.poll());
      }else{
            maxh.add(num);
            minh.add(maxh.poll());
      }
        even=!even;
    }
    
    public double findMedian() {
       if(even){

    return (minh.peek()+maxh.peek())/2.0;
       }else{
        return maxh.peek();
       }
    }
        
    
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */