class Solution {
    class SumPair {
        int i;      // index in nums1
        int j;      // index in nums2
        int sum;    // sum of nums1[i] + nums2[j]

        SumPair(int i, int j, int sum) {
            this.i = i;
            this.j = j;
            this.sum = sum;
        }
    }

    public List<List<Integer>> kSmallestPairs(int[] nums1, int[] nums2, int k) {
        int m = nums1.length;
        int n = nums2.length;
        List<List<Integer>> ans = new ArrayList<>();
        if (m == 0 || n == 0 || k == 0) return ans;

        // Min-heap to get smallest sum first
        PriorityQueue<SumPair> heap = new PriorityQueue<>((a, b) -> a.sum - b.sum);
        Set<String> visited = new HashSet<>();

        // Start with (0,0)
        heap.offer(new SumPair(0, 0, nums1[0] + nums2[0]));
        visited.add("0,0");

        while (k-- > 0 && !heap.isEmpty()) {
            SumPair top = heap.poll();
            int i = top.i, j = top.j;
            ans.add(Arrays.asList(nums1[i], nums2[j]));

            // Next pair in nums1
            if (i + 1 < m && !visited.contains((i + 1) + "," + j)) {
                heap.offer(new SumPair(i + 1, j, nums1[i + 1] + nums2[j]));
                visited.add((i + 1) + "," + j);
            }

            // Next pair in nums2
            if (j + 1 < n && !visited.contains(i + "," + (j + 1))) {
                heap.offer(new SumPair(i, j + 1, nums1[i] + nums2[j + 1]));
                visited.add(i + "," + (j + 1));
            }
        }

        return ans;
    }
}
