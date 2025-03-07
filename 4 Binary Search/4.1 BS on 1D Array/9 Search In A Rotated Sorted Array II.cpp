bool searchInARotatedSortedArrayII(vector<int> nums, int target) {

  // Write your code here.

  int n = nums.size();

  int low = 0;

  int high = n - 1;

  while (low <= high) {

    int mid = (low + high) / 2;

    if (nums[mid] == target)
      return true;

    else if (nums[mid] == nums[low] && nums[mid] == nums[high])

    {

      low++;

      high--;

    }

    else if (nums[low] <= nums[mid]) {

      if (nums[low] <= target && target <= nums[mid])

        high = mid - 1;

      else
        low = mid + 1;

    }

    else {

      if (nums[mid] <= target && target <= nums[high])

        low = mid + 1;

      else
        high = mid - 1;
    }
  }

  return false;
}