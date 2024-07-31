//Code 2
//Flipping an image
class Solution{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int length=image.size();
        for(int i=0;i<length;i++){
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<length;j++){
                image[i][j]=1-image[i][j];
            }
        }
        return image;
    }
};

