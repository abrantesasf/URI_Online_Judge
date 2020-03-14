;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1004: Simple Product
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1004
;;; Summary:  Read two integer values. After this, calculate the product between
;;;           them and store the result in a variable named PROD.

(defun produto (a b)
  "Produto entre dois números."
  (format t "PROD = ~a~%" (* a b)))
