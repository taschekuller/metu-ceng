#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(377))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(177)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(393)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 21 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(152)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 28 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(95))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(38))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(396)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 41 << " " << ((a->insert(192))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << ((b->remove(72))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(181)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 47 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(152)) << std::endl;
*b=*b;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(126)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(428))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(168)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(71)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 68 << " " << (a->insert(461)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(35)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(162)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(26)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(363)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(396)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 79 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(253)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 82 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(42)) << std::endl;
*a=*b;
*a=*a;
std::cout << "Line no:" << 86 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(463)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (a->remove(389)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(389))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(295)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->insert(389))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(253)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(35))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(225))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(295)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(437)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(25)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(118))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(438)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 121 << " " << (b->remove(389)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(35))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(430)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 127 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(35))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(35)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(225)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->remove(269))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(225)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(51)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(94)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (a->insert(44)) << std::endl;
*a=*a;
std::cout << "Line no:" << 148 << " " << (b->remove(35)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(205)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(307))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->remove(299))==false) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 161 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(470)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(205)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(25)) << std::endl;
*a=*b;
std::cout << "Line no:" << 167 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(326)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(340)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 181 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(496)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->remove(292))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(353)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 188 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(77))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 191 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(326)) << std::endl;
*b=*b;
std::cout << "Line no:" << 195 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(25)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->remove(339))==false) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 202 << " " << ((b->insert(395))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->insert(312))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(74)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 207 << " " << ((b->remove(453))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(475))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(360)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->insert(380))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(6)) << std::endl;
*b=*a;
std::cout << "Line no:" << 222 << " " << (b->remove(74)) << std::endl;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 225 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(51)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
