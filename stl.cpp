#include <iostream>
#include <vector>
using namespace std;

vector<float> vect(int number){
  float q;
  vector<float> v;
  for (int i=0; i<number; ++i){
    cout<<"["<<i<<"]= ";
    while (true) {
          cin >> q;
          if (!cin){
              cout<<"not number, please repeat:\n";
              cin.clear();
              while(cin.get() != '\n');
          }
          else break;
      }
    v.push_back(q);
    }
  return v;
  }

int main()
{
  int number;
    cout<<"Количество элементов в массиве:";
    while (true) {
        cin >> number;
        if (!cin){
            cout<<"not number, please repeat:\n";
            cin.clear();
            while(cin.get() != '\n');
        }
        else break;
    }
  vector<float> vector1_input;
  vector<float> vector2_input;
  vector<float> vector_output;
  cout<<"первый вектор:"<<endl;
  vector1_input = vect(number);
  cout<<"второй вектор:"<<endl;
  vector2_input=vect(number);
  cout<<endl;//отступ на консоли

  for (int i=0; i<number; ++i){
    vector_output.push_back(vector1_input[i]+vector2_input[i]);
  }
  cout<<"cумма векторов:"<<endl;
  for (int i=0; i<vector_output.size(); ++i)
    cout<<vector_output[i]<<' ';
  return 0;

}
