;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1005: Average 1
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1005
;;; Summary:  Read two floating points' values of double precision A and B,
;;;           corresponding to two student's grades. After this, calculate
;;;           the student's average, considering that grade A has weight 3.5
;;;           and B has weight 7.5. Each grade can be from zero to ten, always
;;;           with one digit after the decimal point.

(defun media1 (a b &optional (pa 3.5) (pb 7.5))
  "Calcula a média ponderada entre dois números. Os respectivos pesos
   podem ser informados através de parâmetros opcionais."
  (format t "MEDIA = ~a~%" (/ (+ (* a pa)
                                 (* b pb))
                              (+ pa pb))))
