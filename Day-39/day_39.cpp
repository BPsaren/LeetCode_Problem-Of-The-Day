class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
       queue<int> qdeck;
        vector<int> ans(deck.size()); // Initialize ans with correct size
        int n = deck.size();

        for(int i = 0; i < n; i++) {
            qdeck.push(i);
        }

        sort(deck.begin(), deck.end());

        for (int i = 0; i < n; i++) {
            int front = qdeck.front();
            qdeck.pop();
            ans[front] = deck[i];
            if (!qdeck.empty()) {
                qdeck.push(qdeck.front());
                qdeck.pop();
            }
        }
        return ans;
    }
};