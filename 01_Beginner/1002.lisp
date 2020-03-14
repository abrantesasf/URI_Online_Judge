;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1002: Area of a Circle
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1002
;;; Summary:  The formula to calculate the area of a circumference is defined
;;;           as A = pi . R^2. Considering to this problem that pi = 3.14159:
;;;           Calculate the area using the formula given in the problem
;;;           description.

(defun area (r)
  "Calcula a área de uma circunferência de raio 'r'."
  (format t "A=~a~%" (* pi (* r r))))
