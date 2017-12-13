#include <iostream>

using namespace std;

int main (){
   int m_inicio = 0, h_termino = 0, m_termino, total_minutos, total_horas, h_inicio;

   cin >> h_inicio >> m_inicio >> h_termino >> m_termino;

      if(h_inicio >= 0 && m_inicio >= 0 && h_termino >= 0 && m_termino >= 0 && h_inicio < 24 && h_termino < 24 && m_inicio < 60 && m_termino < 60){
      total_minutos = m_termino - m_inicio;
      total_horas = h_termino - h_inicio;

      if(h_termino == h_inicio && total_minutos < 0){
         total_horas = 23;
         total_minutos = 60 + total_minutos;
      }
      if(total_minutos < 0 ){
         total_minutos = 60 + total_minutos;
         total_horas--;
      }
      if(h_termino < h_inicio){
         total_horas = 24 + total_horas;
      }

      if(h_termino == h_inicio && m_inicio == m_termino){
         total_horas = 24;
         total_minutos = 0;
      }

       if(total_minutos >= 0){
         if(total_horas <= 24){
            cout <<"O JOGO DUROU " <<total_horas <<" HORA(S) E "<<total_minutos<<" MINUTO(S)"<<endl;
      }
      }

}

}
