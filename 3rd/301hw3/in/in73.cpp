#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(422))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(13)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 9 << " " << (a->insert(12)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(13))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(207))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 16 << " " << (b->insert(63)) << std::endl;
*a=*b;
std::cout << "Line no:" << 18 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(186)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 23 << " " << ((a->insert(186))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->remove(63)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(474)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 29 << " " << ((a->insert(186))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(474)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(312)) << std::endl;
*b=*b;
std::cout << "Line no:" << 33 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(312)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(95))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(444))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(120))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(306)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(181)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 46 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->remove(355)) << std::endl;
try{std::cout <<"Line no:" << 48 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getFloor(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getCeiling(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getNext(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->get(306) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 56 << " " << (b->remove(34)) << std::endl;
std::cout << "Line no:" << 57 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 58 << " " << (a->insert(259)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 60 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(96))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(181))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(63))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(57)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(76))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(63)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 78 << " " << (b->remove(76)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(467)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 82 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(488))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(59))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(96)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(180)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (a->remove(306)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(12))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->remove(159))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(415)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(59)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->remove(116))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->insert(467))==false) << std::endl;
try{std::cout <<"Line no:" << 106 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getFloor(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getCeiling(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getNext(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->get(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 114 << " " << ((b->remove(9))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->remove(386)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->insert(377))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->remove(97))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(327)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->insert(214))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(159))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(406)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 131 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(406))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(177)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(484))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(214)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(12))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(428))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->remove(266))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(57)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(315))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(467))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(73)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << (b->remove(321)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(215)) << std::endl;
try{std::cout <<"Line no:" << 164 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getFloor(368) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getCeiling(368) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getNext(368) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->get(368) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 172 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 174 << " " << ((b->remove(441))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 176 << " " << ((a->insert(133))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << ((a->remove(333))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(197))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(459)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(16)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 184 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(188)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(442))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 189 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(404)) << std::endl;
*a=*a;
std::cout << "Line no:" << 196 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(49))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->remove(255))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->remove(151))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(160)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(216)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(10)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(467)) << std::endl;
*a=*b;
std::cout << "Line no:" << 219 << " " << (b->insert(374)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 221 << " " << ((a->remove(418))==false) << std::endl;
try{std::cout <<"Line no:" << 222 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getFloor(335) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getCeiling(335) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getNext(335) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->get(335) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*b;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
