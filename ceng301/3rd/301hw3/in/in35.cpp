#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(111)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << ((a->remove(281))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 12 << " " << ((b->remove(364))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(392)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 17 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->insert(260)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(460))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(286)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->remove(364)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(390))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(67)) << std::endl;
*a=*a;
*a=*b;
std::cout << "Line no:" << 35 << " " << ((b->insert(486))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->insert(260))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(452))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(79)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(168)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->remove(26))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 47 << " " << (b->insert(98)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->remove(390))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->remove(415))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->remove(265))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->remove(31))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(286))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(438)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(56)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(349)) << std::endl;
*a=*a;
std::cout << "Line no:" << 73 << " " << ((a->remove(398))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(452)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(188)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(92))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(286))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(260)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (a->insert(464)) << std::endl;
*b=*a;
std::cout << "Line no:" << 85 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(130))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(184))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(228)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << (b->remove(260)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(286))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(99))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->remove(338))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(143)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(406)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(464))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(282))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(184)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((b->remove(98))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(99)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << ((b->insert(20))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(406)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(66)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(220))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(290)) << std::endl;
*b=*b;
std::cout << "Line no:" << 141 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->remove(7))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(286))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(232)) << std::endl;
*a=*a;
std::cout << "Line no:" << 150 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(464)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(66))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(286)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 158 << " " << (b->remove(453)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(139))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(31)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 162 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(388))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(405))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(419)) << std::endl;
*b=*b;
std::cout << "Line no:" << 167 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->insert(349))==false) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((a->insert(260))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(389))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(260))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 192 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(32)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(182)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(110)) << std::endl;
*a=*a;
std::cout << "Line no:" << 198 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(228)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->insert(31))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(164)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->remove(102))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(66)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(473)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 219 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(391)) << std::endl;
*b=*a;
std::cout << "Line no:" << 222 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->insert(357))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(378)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(106) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
