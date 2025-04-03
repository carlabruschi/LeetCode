/*605. Can Place Flowers
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cont = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                bool Esquerda = (i == 0) || (flowerbed[i - 1] == 0);
                bool Direita = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (Esquerda && Direita) {
                    flowerbed[i] = 1;
                    cont++;
                    if (cont >= n) return true;
                    i++;
                }
            }
        }

        return cont >= n;
    }
};
