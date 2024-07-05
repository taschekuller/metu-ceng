#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(75)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(90)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(447))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(447)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->remove(399))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(216))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(380))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(346))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(141)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << (a->insert(379)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(316))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(70)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->remove(216)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->remove(1))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(234))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->insert(227))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(38)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 53 << " " << (a->insert(74)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(499)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 67 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(466)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << (a->insert(391)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(3))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(160)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(38))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 80 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(161)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(160)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(38)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 86 << " " << ((a->remove(457))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(390)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(291))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(448)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 100 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(227)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(408)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 104 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(223)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->remove(314))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(316))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(450)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(53)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 132 << " " << (b->insert(57)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->remove(6))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(53))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(408)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(45)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(48))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(374))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(291)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << (b->insert(401)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 158 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(5)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(379))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->remove(216))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(406))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(447)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 175 << " " << (b->remove(138)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(246)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(184))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->insert(379))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << (b->insert(107)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(316)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(491)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->remove(188))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(367)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(209)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(476)) << std::endl;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(386))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(323)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 220 << " " << (a->insert(231)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 222 << " " << (b->insert(284)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 224 << " " << (a->insert(85)) << std::endl;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 233 << " " << ((a->insert(4))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
