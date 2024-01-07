/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    var currentCount = 0;
    var largestCount = 0;
    
    for(var i=0; i < nums.length; i++){
        if (nums[i]===0) { 
        currentCount = 0;
    }
    else {
        currentCount++;
    }
    largestCount = Math.max(currentCount, largestCount);
    }
    return largestCount ; 
};
