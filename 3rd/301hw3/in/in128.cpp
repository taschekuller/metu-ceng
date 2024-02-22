#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(185)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 10 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((b->insert(286))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 20 << " " << (b->remove(286)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(438))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 27 << " " << ((b->remove(374))==false) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 30 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(438)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << (b->remove(215)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(208)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(78)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(438)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->insert(78))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(171)) << std::endl;
try{std::cout <<"Line no:" << 45 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 46 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 47 << " " << a->getFloor(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getCeiling(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getNext(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->get(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 53 << " " << ((a->remove(237))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->remove(116)) << std::endl;
std::cout << "Line no:" << 55 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 56 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 57 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((b->insert(171))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(190)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 61 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(263)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(174)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(438)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(465)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 68 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(190)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 73 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(181)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(212)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(8))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(171)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(439))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(477))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->remove(484))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(280)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << ((a->insert(410))==false) << std::endl;
try{std::cout <<"Line no:" << 101 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getFloor(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getCeiling(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getNext(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->get(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 109 << " " << (b->insert(247)) << std::endl;
*b=*b;
std::cout << "Line no:" << 111 << " " << ((b->insert(133))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((a->remove(237))==false) << std::endl;
std::cout << "Line no:" << 114 << " " << ((a->remove(218))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << (b->insert(90)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 117 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->remove(494)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(78))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(184)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(410))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(133))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(280))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(53)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (b->remove(294)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(326)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(247))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(286)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(78)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(267)) << std::endl;
*a=*a;
std::cout << "Line no:" << 142 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->remove(431))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(57)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(267))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(8)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(7)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(57))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(341)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(29)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(122)) << std::endl;
try{std::cout <<"Line no:" << 160 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getFloor(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getCeiling(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getNext(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->get(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 168 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->remove(387))==false) << std::endl;
std::cout << "Line no:" << 171 << " " << ((b->remove(40))==false) << std::endl;
std::cout << "Line no:" << 172 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->insert(280))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(469)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(14)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 186 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(416)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->insert(13))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(90)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(4))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(376))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(393))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(221)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(267)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(13))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(115)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(12)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(464)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(13))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(392)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(174))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(376))==false) << std::endl;
try{std::cout <<"Line no:" << 218 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getFloor(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getCeiling(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getNext(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->get(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
