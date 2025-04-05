class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tam = nums.size();
        int i, esquerda=1, direita=1;
        vector<int> answer(tam, 1);
        
        for (int i = 0; i < tam; i++) {
            answer[i] = esquerda;
            esquerda *= nums[i];
        }

        for (int i = tam - 1; i >= 0; i--) {
            answer[i] *= direita;
            direita *= nums[i];
        }

        return answer;
    }
};
