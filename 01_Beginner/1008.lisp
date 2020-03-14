;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1008: Salary
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1008
;;; Summary:  Write a program that reads an employee's number, his/her worked
;;;           hours number in a month and the amount he received per hour. Print
;;;           the employee's number and salary that he/she will receive at end
;;;           of the month, with two decimal places.

(defun salario (id horas pag-por-hora)
  (format t "~{NUMBER = ~a~%SALARY = US$ ~a~}~%" (list id (* horas pag-por-hora))))
