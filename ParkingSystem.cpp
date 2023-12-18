//////////////////////////////////////__1603__LEETCODE////////////////////////////////////
// EASY
// APPROACH-- If/else nesting

/*
carType is defined by big,medium, small as 1,2,3 resp.
Logic is if that type is zero i.e.
    big/medium/small == 0
    return false ---> no available parking space in the lot
    and decrement the big/small/medium
And  otherwise return true i.e space is available
*/

// class ParkingSystem {
// public:
//     int big,medium,small;
//     ParkingSystem(int big1, int medium1, int small1) {
//         big=big1;
//         small=small1;
//         medium=medium1;
//     }

//     bool addCar(int carType) {
//         if(carType==1)
//         {
//             if(big==0)
//             return false;
//             big--;
//         }else if(carType==2){
//             if(medium==0)
//             return false;
//             medium--;
//         }else{ //carType is small
//             if(small==0)
//             return false;
//             small--;
//         }
//         return true;
//     }

// };

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

// TC---->O(1)
// SC---->O(1)