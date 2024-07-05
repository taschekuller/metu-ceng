#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(115))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(19)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(148)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(30)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(363))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(482))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(343)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
b->printPretty();
std::cout << "Line no:" << 24 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(9))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(362)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 28 << " " << (a->remove(362)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->insert(302))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(29))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((b->insert(331))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(60)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(336))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(212))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(416))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (a->remove(416)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 54 << " " << ((a->remove(226))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 56 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 57 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 58 << " " << (b->remove(344)) << std::endl;
std::cout << "Line no:" << 59 << " " << ((b->insert(224))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->remove(224)) << std::endl;
*a=*b;
std::cout << "Line no:" << 63 << " " << (a->insert(459)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->insert(180))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 68 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->insert(390))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(232)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(208))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(396)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(23)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(23)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(401))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(314))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(249)) << std::endl;
try{std::cout <<"Line no:" << 100 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 101 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getFloor(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getCeiling(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getNext(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->get(459) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 108 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->remove(379))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->remove(55)) << std::endl;
std::cout << "Line no:" << 114 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 115 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 116 << " " << (b->insert(112)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 118 << " " << (b->remove(401)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(375)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->remove(61))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(390)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(375)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((b->insert(396))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(459)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(475))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(483))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(151)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(396)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 137 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(156))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(301))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(400)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 142 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->remove(158))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(437)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(437))==false) << std::endl;
b->printPretty();
*a=*b;
std::cout << "Line no:" << 148 << " " << ((a->insert(339))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(400)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 154 << " " << (a->remove(301)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(339))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(339)) << std::endl;
try{std::cout <<"Line no:" << 159 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getFloor(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getCeiling(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getNext(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->get(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 168 << " " << (b->remove(112)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(301)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((b->remove(196))==false) << std::endl;
std::cout << "Line no:" << 172 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->remove(437)) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 176 << " " << ((a->remove(9))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 178 << " " << (b->remove(184)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->remove(475))==false) << std::endl;
b->printPretty();
*b=*b;
std::cout << "Line no:" << 184 << " " << ((a->remove(14))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 186 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(468))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->remove(228))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(445))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(500)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(296)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(9)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(9)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(21)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 203 << " " << (a->insert(104)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 206 << " " << (a->insert(39)) << std::endl;
try{std::cout <<"Line no:" << 207 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 208 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 209 << " " << a->getFloor(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 210 << " " << a->getCeiling(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 211 << " " << a->getNext(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 212 << " " << a->get(431) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 213 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 214 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 215 << " " << (a->insert(220)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
