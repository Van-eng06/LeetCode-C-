class ParkingSystem {
public:
    vector<int> ans;
    ParkingSystem(int big, int medium, int small) {
        ans.push_back(big); //at 0
        ans.push_back(medium); // at 1
        ans.push_back(small); // at 2
    }
    
    bool addCar(int carType) {
        if(ans[carType-1]!=0){
            ans[carType-1]--;
            return true;
        }
        else
            return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
