;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1009: Salary with Bonus
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1009
;;; Summary:  Make a program that reads a seller's name, his/her fixed salary
;;;           and the sale's total made by himself/herself in the month (in
;;;           money). Considering that this seller receives 15% over all
;;;           products sold, write the final salary (total) of this seller at
;;;           the end of the month , with two decimal places.

(defun salario-bonus (nome salario vendas &optional (comissao 0.15))
  (format t "TOTAL = ~a" (+ salario
                            (* vendas comissao))))
