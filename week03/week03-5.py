#��h�O:�p�G�ѳ\�h�p�������ƲզX���ܡA����Ӧrs+s���_�ӡA�]�@�w�O����
#�󥩪��O�A�p�G�Y���U��@�Ӧr���A�]�������ƪ������b�����A�ҥH�٬O�䪺��s�b�̭�
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2 = s + s #��r�� s+s�ܨ⭿����
        s2 =s2[1:len(s2)- 1] #����1�A�k��1
        #print(s2)
        if s in s2:return True
        else: return False
