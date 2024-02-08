int lowerbound(vector<int> &arr, int n, int x)

{

  int low = 0;

  int high = n - 1;

  int ans = n;

  while (low <= high)

  {

    int mid = (low + high) / 2;

    if (arr[mid] >= x)

    {

      ans = mid;

      high = mid - 1;

    }

    else

    {

      low = mid + 1;
    }
  }

  return ans;
}

int upperbound(vector<int> &arr, int n, int x)

{

  int low = 0;

  int high = n - 1;

  int ans = n;

  while (low <= high)

  {

    int mid = (low + high) / 2;

    if (arr[mid] > x)

    {

      ans = mid;

      high = mid - 1;

    }

    else

    {

      low = mid + 1;
    }
  }

  return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)

{

  // Write your code here

  int lb = lowerbound(arr, n, k);

  if (lb == n || arr[lb] != k)

  {

    return {-1, -1};
  }

  int up = upperbound(arr, n, k);

  return {lb, up - 1};
}