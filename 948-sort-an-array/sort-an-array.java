class Solution {
    public int[] sortArray(int[] nums) {
        PriorityQueue<Integer> heap= new PriorityQueue<>();
        for(int x :nums){
            heap.add(x);
        }
        int[] ans = new int[nums.length];
        int i = 0;
        while (!heap.isEmpty()) {
            ans[i++] = heap.poll(); 
        }
        return ans;

    }
}