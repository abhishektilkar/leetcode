class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big1, int medium1, int small1) {
        big = big1;
        medium = medium1;
        small = small1;
        // cout << big << " " << medium << " " << small;
    }
    
    bool addCar(int carType) {
        if (carType == 1) {
            big--;
            return big >= 0;
        }
        else if (carType == 2) {
            medium--;
            return medium >= 0;
        }
        else if (carType == 3) {
            small--;
            return small >= 0;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */