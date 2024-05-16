#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;
};

bool operator==(const Point& first, const Point& second) {
    return (first.x == second.x && first.y == second.y);
}

ostream& operator<<(ostream& stream, const Point& point) {
    return stream << "(" << point.x << ", " << point.y << ")";
}

struct Date {
    int year = 1900;
    int month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date release_date;
    bool is_popular = false;
};

bool operator==(const Movie& first, const Movie& second) {
    return (
        first.title == second.title &&
        first.release_date.year == second.release_date.year &&
        first.release_date.month == second.release_date.month &&
        first.release_date.day == second.release_date.day 
    );
}

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream << movie.title;
    return stream;
}

Movie getMovie() {
    return { "Terminator", 1984 };
}

void showMovie(Movie* movie) {
    cout << movie->title;
}

struct Address {
    string street;
    string city;
    int zip_code;
};

struct Customer {
    int id;
    string name;
    string email;
    Address address;
};

int main() {
    auto movie3 = getMovie();
    showMovie(&movie3);

    Point x = {1, 2};
    Point y = {1, 2};
    cout << (x == y);

    Date date {1984, 6, 1};
    Movie movie = {"Terminator", date};
    // movie.title = "Terminator";
    // movie.release_year = 1984;
    // cout << "Title: " << movie.title << endl;
    // cout << "Release Year: " << movie.release_year << endl;

    // Destructuring
    auto [title, release_year, is_popular] { movie };
    
    // Vector
    vector<Movie> movies;
    movies.push_back({ "Terminator 1", 1984 });
    movies.push_back({ "Terminator 2", 1991 });

    for (const auto& movie : movies) {
        cout << movie.title << endl;
    }

    Customer customer = {
        1, 
        "Mosh", 
        "mosh@example.com",
        {
            "24 Santa",
            "Lost Angeles",
            40
        }
    };

    Movie movie1 = {
        "Terminator 1",
        { 1984, 6, 1 }
    };

    Movie movie2 = {
        "Terminator 2",
        { 1991, 6, 1 }
    };

    if (movie1 == movie2) {
        cout << "Equal";
    }

    cout << movie1;
    
    return 0;
}