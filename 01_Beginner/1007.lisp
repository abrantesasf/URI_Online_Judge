;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1007: Difference
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1007
;;; Summary:  Read four integer values named A, B, C and D. Calculate and print
;;;           the difference of product A and B by the product of C and D
;;;           (A * B - C * D).

(defun diferenca (a b c d)
  (format t "DIFERENÇA = ~a~%" (- (* a b)
                                  (* c d))))
