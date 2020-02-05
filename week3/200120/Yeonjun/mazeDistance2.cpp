//#include <iostream>
//#include <string>
//#include <queue>
//#include <set>
//#include <cmath>
//using namespace std;
//
//int path_finder(string maze)
//
//{
//	// TODO: Return the minimal number of steps required to reach the exit located at
//	// (n - 1, n - 1) from the initial position (0, 0) in an n �� n maze if possible an
//	// -1 otherwise
//
//	int N = sqrt(maze.size()); //N*N �̷��� N
//
//	if (N == 1) //(0, 0)�� �ִٸ� 0�� �ȴ´�
//		return 0;
//
//	set<int> visited; //�湮�� �� ǥ��
//	visited.insert(0); //0, 0 �湮
//
//	queue<pair<int, int>> curStatus; //���� ��Ȳ
//
//	curStatus.push(pair<int, int>(0, 0));
//
//
//
//	while (!curStatus.empty())
//
//	{
//		pair<int, int> current = curStatus.front();
//
//		//�� ��ġ ���� + ���� ������
//
//		int place = current.first;
//		int steps = current.second;
//		curStatus.pop();
//
//		int up = place - N - 1; //��
//		int down = place + N + 1; //��
//		int left = place - 1; //��
//		int right = place + 1; //��
//
//		//���� ��ġ
//		int nextIdx[] = { up, down, left, right };
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (nextIdx[i] < 0) //������ ����ٸ�
//				continue;
//
//			if (nextIdx[i] >= maze.size()) //���������� ������ ����ٸ�
//				continue;
//
//			if (visited.count(nextIdx[i])) //�̹� �湮�ߴٸ�
//				continue;
//
//			if (maze[nextIdx[i]] != '.') //�湮�� �� �ִ� ���� �ƴ϶��
//				continue;
//
//			visited.insert(nextIdx[i]); //�湮�ߴٰ� ǥ��
//			curStatus.push(pair<int, int>(nextIdx[i], steps + 1)); //���� ��ġ, ���� ������
//
//			if (nextIdx[i] == maze.size() - 1) //�������� �����ҽ�
//				return steps + 1;
//		}
//	}
//	return -1;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//int main(void)
//
//{
//
//	cout << path_finder(".W.\n.W.\n...") << endl;
//
//	cout << path_finder(".W.\n.W.\nW..") << endl;
//
//	cout << path_finder("......\n......\n......\n......\n......\n......") << endl;
//
//	cout << path_finder("......\n......\n......\n......\n.....W\n....W.") << endl;
//
//	return 0;
//
//}
//
