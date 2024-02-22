#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(427)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(351))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(497)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 13 << " " << ((a->remove(397))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(492)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(99)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << ((a->insert(492))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(29)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 25 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(292)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << ((a->remove(345))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(60)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << ((a->insert(34))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 34 << " " << (b->remove(34)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(60)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(345))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 38 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(165)) << std::endl;
*a=*b;
std::cout << "Line no:" << 42 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(165)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->insert(320))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->insert(320))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->remove(320)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(242) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(88)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 68 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(291)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (b->remove(453)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 74 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(225))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(452))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(250)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(177)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->remove(369))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(323))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(47)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(180)) << std::endl;
*a=*b;
std::cout << "Line no:" << 88 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->remove(238))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(179)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 92 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(286)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(203))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(491)) << std::endl;
*a=*a;
std::cout << "Line no:" << 100 << " " << ((b->insert(110))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(177))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->remove(110)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(179)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(4)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 110 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(231)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(463))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(239))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->insert(342))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(474)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (a->remove(426)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(45))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(426)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(25)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(463))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(367)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(141)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 159 << " " << ((a->remove(76))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(223))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 164 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->remove(469))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(463)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(491) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(491) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(491) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(491) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->remove(473)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(484)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 181 << " " << (b->remove(250)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(177))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(239)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(494))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(45)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(486)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(481)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(89)) << std::endl;
a->printPretty();
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 199 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(109)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 203 << " " << (a->remove(494)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(268)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(314)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(25))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(25)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(65))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->insert(49))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(491)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(133))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(112)) << std::endl;
*a=*b;
std::cout << "Line no:" << 223 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(92)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(205)) << std::endl;
*a=*a;
std::cout << "Line no:" << 227 << " " << (b->insert(310)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->remove(203)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
