#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(370)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(476)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(23)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(425)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->remove(91)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(425))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 25 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(206))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(324)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << ((a->remove(191))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(132))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 37 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(141)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (b->insert(410)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(446)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 48 << " " << (b->insert(495)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(496) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(496) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(496) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(496) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (b->remove(495)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(302)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->remove(125))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(7)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 70 << " " << ((b->insert(141))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << ((b->insert(302))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(59)) << std::endl;
*a=*a;
b->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(344)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(408))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 87 << " " << (b->insert(84)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (a->insert(3)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 91 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(446)) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 95 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(455))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(384)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(218))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(139))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(16)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 104 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(216)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(417))==false) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(425))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(496)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(411))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(66)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(259)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(7)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 147 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(252)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(81)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(455)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 158 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(54))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(482)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 162 << " " << (a->remove(218)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << ((b->insert(218))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(422)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(111) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 175 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(164)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(408)) << std::endl;
*a=*a;
std::cout << "Line no:" << 181 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(230)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 185 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(100)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 188 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(389)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 193 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(257)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(111))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 199 << " " << (a->remove(154)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (b->remove(59)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(81)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(228)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(67))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(154)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(247))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(302)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(244)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(193)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(440)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 224 << " " << (a->remove(259)) << std::endl;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 233 << " " << (a->insert(51)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
