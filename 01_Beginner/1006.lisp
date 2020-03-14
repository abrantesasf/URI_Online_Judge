;;;; URI Online Judge: Problems & Contests
;;;; https://www.urionlinejudge.com.br/
;;;;
;;;; Abrantes Araújo Silva Filho (abrantesasf@gmail.com)

;;; Category: Beginner (1)
;;; Problem:  1006: Average 2
;;; URL:      https://www.urionlinejudge.com.br/judge/en/problems/view/1006
;;; Summary:  Read three values (variables A, B and C), which are the three
;;;           student's grades. Then, calculate the average, considering that
;;;           grade A has weight 2, grade B has weight 3 and the grade C has
;;;           weight 5. Consider that each grade can go from 0 to 10.0, always
;;;           with one decimal place.

(defun media2 (a b c &optional (pa 2) (pb 3) (pc 5))
  "Calcula a média ponderada entre três números. Os respectivos pesos
   podem ser informados através de parâmetros opcionais."
  (format t "MEDIA = ~a~%" (/ (+ (* a pa)
                                 (* b pb)
                                 (* c pc))
                              (+ pa pb pc))))
