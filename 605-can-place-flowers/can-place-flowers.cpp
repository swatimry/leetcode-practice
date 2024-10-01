class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1){
            if(flowerbed[0]==0 && n<=1){
                return true;
            }
            else{
                return false;
            }
        }
        for(int i=0;i<flowerbed.size();i++){
          if(i==0){
             if(flowerbed[0]==0 && flowerbed[1]==0){
                n--;
                if(n==0){
                    return true;
                }
                flowerbed[0]=1;
             }

          }else if(i==flowerbed.size()-1){
            if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
                n--;
                if(n==0){
                    return true;
                }
                flowerbed[flowerbed.size()-1]=1;
             }
          }else{
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
                if(n==0){
                    return true;
                }
            }
          }
        }
        return n<=0;
    }
};