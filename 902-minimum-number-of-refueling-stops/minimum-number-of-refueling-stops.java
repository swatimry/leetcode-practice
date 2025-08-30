class Solution {
    class GasPair{
        int gas;
        int dis;
        GasPair(int g,int d){
            this.gas=g;
            this.dis=d;
        }
    }
    public int minRefuelStops(int target, int startFuel, int[][] stations) {
        int stops=0;
        PriorityQueue<GasPair> pq= new PriorityQueue<>((a,b)->b.gas-a.gas);
        int currdis=0;
        int currfuel=startFuel;
        for(int i=0;i<stations.length;i++){
            
            currfuel-=stations[i][0]-currdis;
            while(!pq.isEmpty() && currfuel<0){
                currfuel+=pq.poll().gas;
                stops++;

            }
            if(currfuel<0){
                return -1;
            }
            
            pq.add(new GasPair(stations[i][1],stations[i][0]));
             currdis=stations[i][0];
        }
        currfuel-=target-currdis;
        while(!pq.isEmpty() && currfuel<0){
                currfuel+=pq.poll().gas;
                stops++;

            }
            if(currfuel<0){
                return -1;
            }
            return stops;

        

    }
}