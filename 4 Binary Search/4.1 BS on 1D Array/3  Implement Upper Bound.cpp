int upperBound(vector<int> &arr, int x, int n) {

  // Write your code here.

  int low = 0;

  int high = n - 1;

  int ans = n;

  int mid = low + (high - low) / 2;

  while (low <= high) {

    if (arr[mid] > x) {

      ans = mid;

      high = mid - 1;

    }

    else {

      low = mid + 1;
    }

    mid = low + (high - low) / 2;
  }

  return ans;
}