class Solution:
def findTheDifference(self, s: str, t: str) -> str:
d = {}
for c in s:
if c in d:
d[c] = d[c] + 1
else:
d[c] = 1
print(d) #�i�H�L�ݬ�, �r���X�{�b���Ʋέp���G

for c in t:
if c not in d: #���b�r���,�N�O�ʥ�,���N�O�h�X�Ӫ�
return c
if d[c]<=0: #����
return c #���h�X�Ӫ��r��
else:
d[c] = d[c] -1
return ""
