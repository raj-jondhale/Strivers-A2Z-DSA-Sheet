int search(vector<int> &arr, int n, int k) {
  // Write your code here.
  // Return the position of K in ARR else return -1.
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;

    // if mid points the target
    if (arr[mid] == k)
      return mid;

    // if left part is sorted:
    if (arr[low] <= arr[mid]) {
      if (arr[low] <= k && k <= arr[mid])
        high = mid - 1;
      else
        low = mid + 1;
    }
    // else -> left part is sorted
    else {
      if (arr[mid] <= k && k <= arr[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1;
}