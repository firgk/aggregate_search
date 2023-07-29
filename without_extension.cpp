


#include <iostream>
#include <string>
#include <Windows.h> // 引入Windows API头文件

using namespace std;

const int N = 444;

// 对URL中的特殊字符进行转义
string escapeURL(string url) {
	string escapedURL;
	for (char c : url) {
		if (c == ' ')
			escapedURL += "%20";
		else if (c == '&')
			escapedURL += "%26";
		else
			escapedURL += c;
	}
	return escapedURL;
}

// 使用Windows API打开链接
void opener(string url) {
	ShellExecute(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main() {
	while(1){
		string message;
		cout << "请输入搜索关键词：";
		cin >> message;
		
		system("start chrome");
		// 拼接并打开链接
		// 下方优先级高，在右侧
		
		
		
		opener("https://github.com/search?q=" + escapeURL(message));
		opener("https://www.google.com.hk/search?q=" + escapeURL(message));
		opener("https://www.douyin.com/search/" + escapeURL(message));
		opener("https://www.xiaohongshu.com/search_result/?keyword=" + escapeURL(message));
		/* 在此添加或者删除*/
		
	
		opener("https://so.csdn.net/so/search?spm=1000.2115.3001.4498&q=" + escapeURL(message));
		opener("https://www.zhihu.com/search?type=content&q=" + escapeURL(message));
		opener("https://search.bilibili.com/all?keyword=" + escapeURL(message));
		opener("https://www.baidu.com/s?ie=UTF-8&wd=" + escapeURL(message));
		

		
		
	}
	return 0;
}



