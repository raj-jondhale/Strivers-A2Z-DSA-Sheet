int missingK(vector<int> vec, int n, int k) {
  // Write your code here.
  int l = 0;

  int h = n - 1;

  while (l <= h) {

    int mid = (l + h) / 2;

    int miss = vec[mid] - (mid + 1);

    if (miss < k) {

      l = mid + 1;

    }

    else {

      h = mid - 1;
    }
  }

  return (l + k);

  // return(h+k+1);
}
