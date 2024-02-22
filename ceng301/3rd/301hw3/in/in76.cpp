#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(351)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 10 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(25)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 14 << " " << ((a->insert(25))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->remove(206)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(56)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(25))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->remove(47)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((b->insert(346))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(25)) << std::endl;
*b=*a;
std::cout << "Line no:" << 25 << " " << ((a->remove(11))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->insert(168))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->remove(351)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(168)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(351)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((b->insert(435))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(260)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 43 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(496))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(135))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(321)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(358))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 49 << " " << (b->remove(435)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(86)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->remove(75))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(354)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(135)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 73 << " " << (a->insert(77)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->remove(101))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(40))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(263))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(468))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(494)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << ((b->remove(455))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(94)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(354))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(375)) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 99 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(365))==false) << std::endl;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 106 << " " << (a->remove(331)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(277)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(94)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(137) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(137) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(137) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(137) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(439)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 128 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(137)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(291))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(373)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(127))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(162)) << std::endl;
*a=*b;
std::cout << "Line no:" << 141 << " " << ((a->remove(86))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(263)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(496)) << std::endl;
*b=*a;
std::cout << "Line no:" << 146 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(265)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 152 << " " << (b->remove(110)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(450))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(402)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 159 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->insert(207))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 165 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(132)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(98) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(98) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(98) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(98) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->remove(125))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(394)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(439)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(182)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(402)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(110))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(298)) << std::endl;
*a=*b;
std::cout << "Line no:" << 196 << " " << ((a->remove(148))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(162)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->remove(378))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(123)) << std::endl;
*b=*b;
std::cout << "Line no:" << 202 << " " << (b->remove(45)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->remove(370))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(384)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 206 << " " << ((a->remove(245))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(480)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << ((a->remove(425))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(109)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(314)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(459))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(2)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(260)) << std::endl;
a->printPretty();
a->printPretty();
*b=*a;
std::cout << "Line no:" << 221 << " " << (b->remove(207)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 223 << " " << (b->remove(195)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 226 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->insert(109))==false) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(314) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(314) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(314) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(314) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << ((a->insert(439))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
