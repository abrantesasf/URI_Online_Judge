;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1003: Simple Sum
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1003
;;; Summary:  Read two integer values, in this case, the variables A and B.
;;;           After this, calculate the sum between them and assign it to the
;;;           variable SOMA. Write the value of this variable.

(defun soma (a b)
  "Soma os dois números recebidos como parâmetros."
  (format t "SOMA = ~a~%" (+ a b)))
