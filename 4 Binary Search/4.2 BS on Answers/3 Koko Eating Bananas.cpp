#include <bits/stdc++.h>

int findMax(vector<int> v) {

  int ans = v[0];

  for (int i = 0; i < v.size(); i++) {

    ans = max(ans, v[i]);
  }

  return ans;
}

int calToH(vector<int> v, int hour, int givenH) {

  int ans = 0;

  for (auto i : v) {

    // to avoid adding more like if 5/3

    // then it must be 2 not 3 so this will check and

    // convert to 1 if i%hour is not equals to 0

    ans += i / hour + (i % hour != 0);

    if (ans > givenH) {

      break;
    }
  }

  return ans;
}

int minimumRateToEatBananas(vector<int> v, int h) {

  // since it must eat something not 0

  int l = 1;

  // finding maximum since it can be the highest it can eat anytime

  int r = findMax(v);

  while (l <= r) {

    int mid = (l + r) / 2;

    // calculating total hours

    int totHrs = calToH(v, mid, h);

    if (totHrs <= h) {

      r = mid - 1;

    } else {

      l = mid + 1;
    }
  }

  return l;
}