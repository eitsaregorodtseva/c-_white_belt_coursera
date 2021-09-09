#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


/*int Factorial(int x)
{
	int result = 1;
	if (x > 1)
	{ 
		for (int i = 2; i <= x; i++)
			result *= i;
	}
	return result;
}


int main() 
{
	int x;
	cin >> x;
	cout << Factorial(x);
	return 0;
}*/


/*bool IsPalindrom(string s)
{
    if (s.size() == 1)
        return true;
    else
    {
        int i;
        for (i = 0; i < s.size() / 2; i++)
            if (s[i] != s[s.size() - i - 1])
                break;
        if (i == s.size() / 2)
            return true;
        else
            return false;
    }

}


int main()
{
	string s;
	cin >> s;
	cout << IsPalindrom(s);
	return 0;
}*/


/*vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> result;
    for (auto c : words)
        if (c.size() >= minLength)
        {
            int j;
            for (j = 0; j < c.size() / 2; j++)
            {
                if (c[j] != c[c.size() - j - 1])
                    break;
            }
            if (j == c.size() / 2)
                result.push_back(c);
        }
    return result;
}*/


/*int main()
{
    string test_string;
    vector<string> words;
    int i = 0;
    do{
        cin >> test_string;
        words.push_back(test_string);
    }while (i < 100);
    int minLength;
    cin >> minLength;
    vector<string> result;
    result == PalindromFilter(words, minLength);
    for (auto i : result)
        cout << i;
    return 0;
}*/


/*void UpdateIfGreater(int first, int& second)
{
    if (first > second)
        second = first;
}


int main()
{
    int a = 5, b = 4;
    UpdateIfGreater(a, b);
    cout << a << b;
    return 0;
}*/


/*void MoveStrings(vector<string>& source, vector<string>& destination)
{
    for (auto c : source)
        destination.push_back(c);
    source.clear();
}*/


/*void Reverse(vector<int>& v)
{
    for (int i = 0; i < v.size() / 2; i++)
    {
        auto temp = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = temp;
    }
}*/


/*vector<int> Reversed(const vector<int>& v)
{
    vector<int> result;
    for (int i = v.size() - 1; i > -1; i--)
        result.push_back(v[i]);
    return result;
}*/

/*int main()
{
    int n;
    cin >> n;
    vector<int> temp(n);
    int sum = 0;
    for (int& c : temp)
    {
        cin >> c;
        sum += c;
    }
    int average = sum / n;
    int k = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] > average)
            k++;
    }
    cout << k << endl;
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] > average)
            cout << i << ' ';
    }
    return 0;
}*/

/*int main()
{
    int q = 0;
    cin >> q;
    vector<string> type_of_people;
    string command;
    int k = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> command;
        if (command == "COME")
        {
            cin >> k;
            if (k > 0)
            {
                for (int j = 0; j < k; j++)
                    type_of_people.push_back("QUIET");
            }
            else
            {
                for (int j = 0; j < abs(k); j++)
                    type_of_people.pop_back();
            }
        }
        if (command == "WORRY")
        {
            cin >> k;
            type_of_people[k] = "WORRY";
        }
        if (command == "QUIET")
        {
            cin >> k;
            type_of_people[k] = "QUIET";
        }
        int counter = 0;
        if (command == "WORRY_COUNT")
        {
            for (auto type : type_of_people)
            {
                if (type == "WORRY")
                    counter += 1;
            }
            cout << counter << endl;
        }
    }
    return 0;
}*/

/*int main()
{
    int q;
    cin >> q;
    vector<int> month_duration = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month_index = 0;
    vector<vector<string>> plans(month_duration[month_index]);
    string operation_code;
    string deal_name;
    for (int i = 0; i < q; i++)
    {
        cin >> operation_code;
        int date;
        if (operation_code == "ADD")
        {
            cin >> date;
            cin >> deal_name;
            plans[date - 1].push_back(deal_name);
        }
        else if (operation_code == "DUMP")
        {
            cin >> date;
            cout << plans[date - 1].size() << ' ';
            for (auto name : plans[date - 1])
                cout << name << ' ';
            cout << endl;
        }
        else if (operation_code == "NEXT")
        {
            if (month_index == 11)
                month_index = 0;
            else
                month_index++;
            if (month_duration[month_index - 1] > month_duration[month_index])
            {
                for (int j = month_duration[month_index]; j < month_duration[month_index - 1]; j++)
                    plans[month_duration[month_index] - 1].insert(end(plans[month_duration[month_index] - 1]), begin(plans[j]), end(plans[j]));
                plans.resize(month_duration[month_index]);
            }
            else
            {
                plans.resize(plans.size() + month_duration[month_index] - month_duration[month_index - 1]);
            }
        }
    }
    return 0;
}*/


/*map<char, int> BuildCharCounters(const string& word)
{
    map<char, int> char_counter;
    for (char c : word)
        char_counter[c]++;
    return char_counter;
}
int main()
{
    int n;
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (BuildCharCounters(a) == BuildCharCounters(b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
     return 0;
}*/


/*int main()
{
    int q;
    cin >> q;
    string operation_code;
    map<string, string> handbook;
    for (int i = 0; i < q; i++)
    {
        cin >> operation_code;
        string country;
        if (operation_code == "CHANGE_CAPITAL")
        {
            string new_capital;
            cin >> country >> new_capital;
            if (handbook.count(country) == 0)
            {
                handbook[country] = new_capital;
                cout << "Introduce new country " << country << " with capital " << new_capital << endl;
            }
            else if (handbook[country] == new_capital)
                cout << "Country " << country << " hasn't changed its capital" << endl;
            else
                {
                cout << "Country " << country << " has changed its capital from " << handbook[country] << " to " << new_capital << endl;
                handbook[country] = new_capital;
                }
        }
        else if (operation_code == "RENAME")
        {
            string old_country_name, new_country_name;
            cin >> old_country_name >> new_country_name;
            if (old_country_name == new_country_name || handbook.count(old_country_name) == 0 || handbook.count(new_country_name) == 1)
            {
                cout << "Incorrect rename, skip" << endl;
            }
            else if (handbook.count(old_country_name) != 0)
            {
                cout << "Country " << old_country_name << " with capital " << handbook[old_country_name] << " has been renamed to " << new_country_name << endl;
                handbook[new_country_name] = handbook[old_country_name];
                handbook.erase(old_country_name);
            }
        }
        else if (operation_code == "ABOUT")
        {
            cin >> country;
            if (handbook.count(country) == 0)
                cout << "Country " << country << " doesn't exist" << endl;
            else
                cout << "Country " << country << " has capital " << handbook[country] << endl;
        }
        else if (operation_code == "DUMP")
        {
            if (handbook.empty())
                cout << "There are no countries in the world" << endl;
            else
                for (const auto& c : handbook)
                    cout << c.first << "/" << c.second << " " ;
        }
    }
    return 0;
}*/


/*int main()
{
    int q;
    cin >> q;
    string operation_code, bus;
    map<string, vector<string>> buses_for_stops;
    map<string, vector<string>> stops_for_buses;
    for (int i = 0; i < q; i++)
    {
        cin >> operation_code;
        if (operation_code == "NEW_BUS")
        {
            int stop_count;
            cin >> bus >> stop_count;
            buses_for_stops[bus];
            string stop_name;
            for (int j = 0; j < stop_count; j++)
            {
                cin >> stop_name;
                buses_for_stops[bus].push_back(stop_name);
                stops_for_buses[stop_name].push_back(bus);
            }
        }
        else if (operation_code == "BUSES_FOR_STOP")
        {
            string stop;
            cin >> stop;
            if (stops_for_buses.count(stop) == 0)
                cout << "No stop" << endl;
            else
                {
                for (const auto& item : stops_for_buses[stop])
                    {
                        cout << item << " ";
                    }
                    cout << endl;
            }

        }
        else if (operation_code == "STOPS_FOR_BUS")
        {
            cin >> bus;
            if (buses_for_stops.count(bus) != 0)
            {
                for (const auto& item : buses_for_stops[bus])
                {
                    cout << "Stop "<< item << ": ";
                    int counter = 0;
                    for (const auto& name : stops_for_buses[item])
                    {
                        if (name != bus)
                        {
                            cout << name << " ";
                            ++counter;
                        }
                    }
                    if (counter == 0)
                        cout << "no interchange";
                    cout << endl;
                }
            }
            else
                cout << "No bus" << endl;
        }
        else if (operation_code == "ALL_BUSES")
        {
            if (buses_for_stops.empty())
                cout << "No buses" << endl;
            else
            {
                for (const auto& item : buses_for_stops)
                {
                    cout << "Bus " << item.first << ": ";
                    for (const auto& stops : item.second)
                        cout << stops << " ";
                    cout << endl;
                }
            }
        }
    }
    return 0;
}*/


/*int main()
{
    int q;
    cin >> q;
    map<int, vector<string>> buses;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        string stop_name;
        vector<string> test_stops(n);
        for (int j = 0; j < n; j++) {
            cin >> stop_name;
            test_stops[j] = stop_name;
        }
        int count = 0;
        for (const auto &item : buses)
            if (item.second == test_stops)
            {
                cout << "Already exists for " << item.first << endl;
                count = item.first;
            }
        if (count == 0)
        {
            int buses_size = buses.size();
            buses[buses_size + 1] = test_stops;
            cout << "New bus " << buses_size + 1 << endl;
        }
    }
    return 0;
}*/


/*int main()
{
    int n;
    cin >> n;
    set<string> different_words;
    for(int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        different_words.insert(word);
    }
    cout << different_words.size();
    return 0;
}*/


/*set <string> BuildMapValuesSet(const map<int, string>& m)
{
    set<string> values;
    for (const auto& c : m)
        values.insert(c.second);
    return values;
}
int main()
{
    map<int, string> m;
    BuildMapValuesSet(m);
    return 0;
}*/


/*int main()
{
    int q;
    cin >> q;
    map<string, set<string>> synonyms;
    for (int i = 0; i < q; i++)
    {
        string operation_code;
        cin >> operation_code;
        if (operation_code == "ADD")
        {
            string word1, word2;
            cin >> word1 >> word2;
            synonyms[word1].insert(word2);
            synonyms[word2].insert(word1);
        }
        else if (operation_code == "CHECK")
        {
            string word1, word2;
            cin >> word1 >> word2;
            if (synonyms[word1].count(word2) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (operation_code == "COUNT")
        {
            string word;
            cin >> word;
            cout << synonyms[word].size() << endl;
        }
    }
    return 0;
}*/


/*int main() {
    int q;
    cin >> q;
    map<set<string>, int> buses;
    for (int i = 0; i < q; ++i)
    {
        int n;
        cin >> n;
        set<string> test_stops;
        for (int i = 0; i < n; i++)
        {
            string stop;
            cin >> stop;
            test_stops.insert(stop);
        }
        if (buses.count(test_stops) == 0)
        {
            const int new_number = buses.size() + 1;
            buses[test_stops] = new_number;
            cout << "New bus " << new_number << endl;
        }
        else
            {
            cout << "Already exists for " << buses[test_stops] << endl;
            }
    }
    return 0;
}*/