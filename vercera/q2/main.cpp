#include <iostream>
using namespace std;

void findOverlap(int x1ll, int y1ll, int x1ur, int y1ur, int x2ll, int y2ll, int x2ur, int y2ur) {
    if (x1ll >= x2ur || x2ll >= x1ur || y1ll >= y2ur || y2ll >= y1ur) {
        cout << "NO" <<endl;
        return;
    }

    int xOverlapLL = max(x1ll, x2ll);
    int yOverlapLL = max(y1ll, y2ll);
    int xOverlapUR = min(x1ur, x2ur);
    int yOverlapUR = min(y1ur, y2ur);

    cout << xOverlapLL << " " << yOverlapLL << " " << xOverlapUR << " " << yOverlapUR <<endl;
}

int main()
{
    int x1ll, y1ll, x1ur, y1ur; cin >> x1ll >> y1ll >> x1ur >> y1ur;
    int x2ll, y2ll, x2ur, y2ur; cin >> x2ll >> y2ll >> x2ur >> y2ur;

    findOverlap(x1ll, y1ll, x1ur, y1ur, x2ll, y2ll, x2ur, y2ur);

    return 0;
}