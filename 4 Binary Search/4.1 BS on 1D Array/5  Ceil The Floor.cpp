int findceil(vector<int> &arr, int x, int n) {

  int low = 0;

  int high = n - 1;

  int ans = -1;

  while (low <= high) {

    int mid = (low + high) / 2;

    if (arr[mid] == x) {

      ans = arr[mid];

      return ans;

    }

    else if (arr[mid] >= x) {

      ans = arr[mid];

      high = mid - 1;

    }

    else {

      low = mid + 1;
    }
  }

  return ans;
}

int findfloor(vector<int> &arr, int x, int n) {

  int low = 0;

  int high = n - 1;

  int ans = -1;

  while (low <= high) {

    int mid = (low + high) / 2;

    if (arr[mid] == x) {

      ans = arr[mid];

      return ans;

    }

    else if (arr[mid] <= x) {

      ans = arr[mid];

      low = mid + 1;

    }

    else {

      high = mid - 1;
    }
  }

  return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {

  // Write your code here.

  int f = findfloor(a, x, n);

  int c = findceil(a, x, n);

  return make_pair(f, c);
}