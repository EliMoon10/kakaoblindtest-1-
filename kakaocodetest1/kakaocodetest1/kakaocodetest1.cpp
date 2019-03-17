/*
code by Eli Moon (Gijun Moon)
2019/03/17 (sun) code practice.
kakao Blind Adoption Test : 카카오 블라인드 채용 테스트
*/

#include <iostream>
#include <bitset>

using namespace std;
//n의 값이 6인 경우를 기준으로 작성하였습니다. n이 5인경우는 코드가 다를 수 있습니다.

std::string ReplaceAll(std::string &str, const std::string& from, const std::string& to) { //ReplaceAll을 이용하여 숫자를 #과 공백 조합으로 바꿈
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return str;
}

int main()
{
	int arr1[] = { 46, 33, 33 ,22, 31, 50 }; //정수 배열 1
	int arr2[] = { 27 ,56, 19, 14, 14, 10 };//정수 배열 2
	//입출력 예제 ["######", "### #", "## ##", " #### ", " #####", "### # "]
	int n = 6; //n
	string result;//결과값 스트링

	for (int i = 0; i < n; i++) {
		int a = arr1[i] | arr2[i]; //OR연산
		result = bitset< 6 >(a).to_string(); //자바의 tobinary와 동일 기능

		result = ReplaceAll(result, string("0"), string(" ")); //0을 공백으로
		result = ReplaceAll(result, string("1"), string("#")); //1을 #으로
		cout << result << '\n'; //츨력
	}
	return 0;

	/*
	학교에서 짠 코드라 불가피하게 Wandbox에서 컴파일함.
	Output

	Start
      ######
      ###  #
      ##  ##
       ####
      #####
      ### # 
     Finish
*/
}

