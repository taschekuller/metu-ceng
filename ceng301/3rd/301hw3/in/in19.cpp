#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->remove(224))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(248)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(193))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(343))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(363))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(83))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(117))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(343))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(184))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(373))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(103)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(83)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(193))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(15))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(402)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << ((a->remove(22))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(363))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(243)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(193))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->remove(286))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->remove(465))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(402)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(109)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(363)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(457)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(373))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->insert(496))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->insert(412))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(111)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 91 << " " << ((a->insert(111))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(22))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(22))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(102)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(427)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 103 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(249)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 107 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(3)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << ((a->insert(346))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(111)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(427)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(86)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(373)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(205))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((a->remove(316))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(127)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(496)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(457))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(462))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->remove(64))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 145 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(259)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(420))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << (a->remove(408)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 154 << " " << (b->insert(466)) << std::endl;
*a=*b;
std::cout << "Line no:" << 156 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(466)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(466))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(145)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(372)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(109)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(297)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(204) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(204) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(204) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(204) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->remove(204)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(96)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(354)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << ((a->remove(18))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(371)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(58))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(354)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(102)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 206 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(329))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->insert(324))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(280)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 217 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(324))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->remove(373))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(327)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 223 << " " << (a->remove(145)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(324)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->remove(445)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(288)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->insert(151)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
