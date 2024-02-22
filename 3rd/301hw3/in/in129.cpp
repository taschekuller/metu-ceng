#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(341)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(438)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->remove(35))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(149)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(176))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 30 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(197)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(44)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->remove(415))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(44)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(116)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 42 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(141)) << std::endl;
*b=*b;
std::cout << "Line no:" << 47 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(443)) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 58 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->remove(161)) << std::endl;
std::cout << "Line no:" << 60 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((b->insert(206))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(206)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(484))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 66 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(254)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(125))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(91)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(353))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(353))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(323)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 89 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(351))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(167))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 94 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->remove(117))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(463)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(445)) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 114 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 115 << " " << ((a->remove(81))==false) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->insert(67))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((b->remove(30))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->remove(489))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(499)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(499))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 127 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(463))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(465)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(445)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(3))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(394)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(470)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 141 << " " << (a->insert(50)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(307))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(280)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(488))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(286)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 153 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(133)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << (b->insert(1)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(147)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(335))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(425)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 163 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getFloor(50) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getCeiling(50) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getNext(50) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->get(50) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 171 << " " << ((b->insert(17))==false) << std::endl;
std::cout << "Line no:" << 172 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->remove(387)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 177 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(149)) << std::endl;
*a=*b;
*a=*b;
std::cout << "Line no:" << 182 << " " << (a->insert(355)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << ((b->insert(278))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(425)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(437)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(286)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(239)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << ((a->remove(39))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(239)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->remove(92))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 200 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(488)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->remove(408))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(147))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(1))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(17)) << std::endl;
*a=*a;
std::cout << "Line no:" << 207 << " " << ((b->insert(488))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(488)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(287)) << std::endl;
*b=*a;
std::cout << "Line no:" << 212 << " " << (b->remove(317)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(1))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(74)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(220)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(220)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(100)) << std::endl;
try{std::cout <<"Line no:" << 221 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getFloor(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getCeiling(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getNext(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->get(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 229 << " " << ((b->insert(147))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
