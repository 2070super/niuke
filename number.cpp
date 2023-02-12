#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<string> v;
	for (int i = 0; i <num; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	for (int i = 0; i < v.size(); i++)
	{
		auto it = v[i].begin();
		while(it!=v[i].end())
		{
			if (*it >= '0' && *it <= '9')
			{
				it++;
			}
			else if (*it == '-')
			{
				it=v[i].erase(it);
			}
			else
			{
				switch(*it)
				{
				case 'A':v[i].erase(it); v[i].insert(it, '2'); it++; break;
				case 'B':v[i].erase(it); v[i].insert(it, '2'); it++; break;
				case 'C':v[i].erase(it); v[i].insert(it, '2'); it++; break;
				case 'D':v[i].erase(it); v[i].insert(it, '3'); it++; break;
				case 'E':v[i].erase(it); v[i].insert(it, '3'); it++; break;
				case 'F':v[i].erase(it); v[i].insert(it, '3'); it++; break;
				case 'G':v[i].erase(it); v[i].insert(it, '4'); it++; break;
				case 'H':v[i].erase(it); v[i].insert(it, '4'); it++; break;
				case 'I':v[i].erase(it); v[i].insert(it, '4'); it++; break;
				case 'J':v[i].erase(it); v[i].insert(it, '5'); it++; break;
				case 'K':v[i].erase(it); v[i].insert(it, '5'); it++; break;
				case 'L':v[i].erase(it); v[i].insert(it, '5'); it++; break;
				case 'M':v[i].erase(it); v[i].insert(it, '6'); it++; break;
				case 'N':v[i].erase(it); v[i].insert(it, '6'); it++; break;
				case 'O':v[i].erase(it); v[i].insert(it, '6'); it++; break;
				case 'P':v[i].erase(it); v[i].insert(it, '7'); it++; break;
				case 'R':v[i].erase(it); v[i].insert(it, '7'); it++; break;
				case 'S':v[i].erase(it); v[i].insert(it, '7'); it++; break;
				case 'T':v[i].erase(it); v[i].insert(it, '8'); it++; break;
				case 'U':v[i].erase(it); v[i].insert(it, '8'); it++; break;
				case 'V':v[i].erase(it); v[i].insert(it, '8'); it++; break;
				case 'W':v[i].erase(it); v[i].insert(it, '9'); it++; break;
				case 'X':v[i].erase(it); v[i].insert(it, '9'); it++; break;
				case 'Y':v[i].erase(it); v[i].insert(it, '9'); it++; break;
				default:
					cout << "ÊäÈë·Ç·¨×Ö·û" << endl; exit(-1);
				}
			}
		}
	}
	map<string, int>m;
	for (int i = 0; i < v.size(); i++)
	{
		v[i].insert(3, 1, '-');
		m[v[i]] += 1;
	}
	int flag = 0;
	for (auto it=m.begin();it!=m.end();it++)
		if(it->second>1)
	{
		cout <<it->first<<' '<<it->second<< endl;
		flag = 1;
	}
	if (flag == 0)
	{
		cout << "No duplicates" << endl;
	}
		
	return 0;
}