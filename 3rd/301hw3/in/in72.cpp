#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(177)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
*a=*a;
std::cout << "Line no:" << 10 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(388)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((b->remove(62))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->remove(198))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(37))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 25 << " " << (b->insert(152)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(152))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(367))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(313))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(181))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(152)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->remove(473))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 45 << " " << ((a->insert(485))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(493))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 48 << " " << (b->insert(120)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 50 << " " << ((a->remove(209))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->insert(37))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->insert(181))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 62 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(353))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 65 << " " << (b->remove(252)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(217)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(120)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 70 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(181)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(485))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(340)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->remove(337))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->remove(86))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(396))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 88 << " " << ((a->remove(319))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(177)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 91 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(340)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(153))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(478))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(37))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(221)) << std::endl;
*a=*a;
std::cout << "Line no:" << 103 << " " << (b->remove(221)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(107)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(234)) << std::endl;
*b=*a;
std::cout << "Line no:" << 108 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->insert(411))==false) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(485))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(375)) << std::endl;
*b=*a;
std::cout << "Line no:" << 132 << " " << ((b->insert(353))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(6)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(252)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(417)) << std::endl;
*a=*b;
std::cout << "Line no:" << 142 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(177)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(387))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->remove(293))==false) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 149 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(186)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(148)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << ((a->insert(353))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(4)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(129))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << (b->remove(395)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(485)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 169 << " " << (b->insert(107)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(269) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(112)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(458)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 184 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(186))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(227)) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 191 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(464)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(112))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(227)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(493)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 202 << " " << (b->insert(391)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << ((b->remove(395))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(130)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << (a->remove(227)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(369))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(486)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(375)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(153)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 216 << " " << (b->insert(445)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << (a->insert(462)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 220 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(310)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 224 << " " << (b->remove(321)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(166)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->remove(319))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(255)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->insert(170)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
