class Solution {
    class TaskFreq {
        int freq;
        char task;
        int time;
        TaskFreq(char t, int f, int td) {
            this.task = t;
            this.freq = f;
            this.time = td;
        }
    }

    public int leastInterval(char[] tasks, int n) {
        PriorityQueue<TaskFreq> h = new PriorityQueue<>(
            (a, b) -> {
                if (a.freq != b.freq) return Integer.compare(b.freq, a.freq); // higher freq first
                return Character.compare(a.task, b.task); // lexicographic tie
            }
        );

        Map<Character, Integer> map = new HashMap<>();
        for (char x : tasks) {
            map.put(x, map.getOrDefault(x, 0) + 1);
        }

        // push tasks into max-heap
        for (Map.Entry<Character, Integer> x : map.entrySet()) {
            h.add(new TaskFreq(x.getKey(), x.getValue(), 0));
        }

        Queue<TaskFreq> q = new LinkedList<>();
        int t = 0;

        while (!h.isEmpty() || !q.isEmpty()) {
            t++;

            if (!h.isEmpty()) {
                TaskFreq curr = h.poll();
                curr.freq--;
                if (curr.freq > 0) {
                    curr.time = t + n; // next time we can schedule this
                    q.offer(curr);
                }
            }

            // if cooling finished, add back to heap
            if (!q.isEmpty() && q.peek().time == t) {
                h.add(q.poll());
            }
        }
        return t;
    }
}
