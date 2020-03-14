;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1001: Extremely Basic
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1001
;;; Summary:  Read 2 variables, named A and B and make the sum of these two
;;;           variables, assigning its result to the variable X.

(defun soma (a b)
  (format t "X = ~a~%" (+ a b)))

(soma 10 9)

(soma -10 4)

(soma 15 -7)
