#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Em03_move
// Address: 0x2c4400 - 0x2c4c3c
void Em03_move_0x2c4400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_move_0x2c4400");
#endif

    switch (ctx->pc) {
        case 0x2c4400u: goto label_2c4400;
        case 0x2c4404u: goto label_2c4404;
        case 0x2c4408u: goto label_2c4408;
        case 0x2c440cu: goto label_2c440c;
        case 0x2c4410u: goto label_2c4410;
        case 0x2c4414u: goto label_2c4414;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c441cu: goto label_2c441c;
        case 0x2c4420u: goto label_2c4420;
        case 0x2c4424u: goto label_2c4424;
        case 0x2c4428u: goto label_2c4428;
        case 0x2c442cu: goto label_2c442c;
        case 0x2c4430u: goto label_2c4430;
        case 0x2c4434u: goto label_2c4434;
        case 0x2c4438u: goto label_2c4438;
        case 0x2c443cu: goto label_2c443c;
        case 0x2c4440u: goto label_2c4440;
        case 0x2c4444u: goto label_2c4444;
        case 0x2c4448u: goto label_2c4448;
        case 0x2c444cu: goto label_2c444c;
        case 0x2c4450u: goto label_2c4450;
        case 0x2c4454u: goto label_2c4454;
        case 0x2c4458u: goto label_2c4458;
        case 0x2c445cu: goto label_2c445c;
        case 0x2c4460u: goto label_2c4460;
        case 0x2c4464u: goto label_2c4464;
        case 0x2c4468u: goto label_2c4468;
        case 0x2c446cu: goto label_2c446c;
        case 0x2c4470u: goto label_2c4470;
        case 0x2c4474u: goto label_2c4474;
        case 0x2c4478u: goto label_2c4478;
        case 0x2c447cu: goto label_2c447c;
        case 0x2c4480u: goto label_2c4480;
        case 0x2c4484u: goto label_2c4484;
        case 0x2c4488u: goto label_2c4488;
        case 0x2c448cu: goto label_2c448c;
        case 0x2c4490u: goto label_2c4490;
        case 0x2c4494u: goto label_2c4494;
        case 0x2c4498u: goto label_2c4498;
        case 0x2c449cu: goto label_2c449c;
        case 0x2c44a0u: goto label_2c44a0;
        case 0x2c44a4u: goto label_2c44a4;
        case 0x2c44a8u: goto label_2c44a8;
        case 0x2c44acu: goto label_2c44ac;
        case 0x2c44b0u: goto label_2c44b0;
        case 0x2c44b4u: goto label_2c44b4;
        case 0x2c44b8u: goto label_2c44b8;
        case 0x2c44bcu: goto label_2c44bc;
        case 0x2c44c0u: goto label_2c44c0;
        case 0x2c44c4u: goto label_2c44c4;
        case 0x2c44c8u: goto label_2c44c8;
        case 0x2c44ccu: goto label_2c44cc;
        case 0x2c44d0u: goto label_2c44d0;
        case 0x2c44d4u: goto label_2c44d4;
        case 0x2c44d8u: goto label_2c44d8;
        case 0x2c44dcu: goto label_2c44dc;
        case 0x2c44e0u: goto label_2c44e0;
        case 0x2c44e4u: goto label_2c44e4;
        case 0x2c44e8u: goto label_2c44e8;
        case 0x2c44ecu: goto label_2c44ec;
        case 0x2c44f0u: goto label_2c44f0;
        case 0x2c44f4u: goto label_2c44f4;
        case 0x2c44f8u: goto label_2c44f8;
        case 0x2c44fcu: goto label_2c44fc;
        case 0x2c4500u: goto label_2c4500;
        case 0x2c4504u: goto label_2c4504;
        case 0x2c4508u: goto label_2c4508;
        case 0x2c450cu: goto label_2c450c;
        case 0x2c4510u: goto label_2c4510;
        case 0x2c4514u: goto label_2c4514;
        case 0x2c4518u: goto label_2c4518;
        case 0x2c451cu: goto label_2c451c;
        case 0x2c4520u: goto label_2c4520;
        case 0x2c4524u: goto label_2c4524;
        case 0x2c4528u: goto label_2c4528;
        case 0x2c452cu: goto label_2c452c;
        case 0x2c4530u: goto label_2c4530;
        case 0x2c4534u: goto label_2c4534;
        case 0x2c4538u: goto label_2c4538;
        case 0x2c453cu: goto label_2c453c;
        case 0x2c4540u: goto label_2c4540;
        case 0x2c4544u: goto label_2c4544;
        case 0x2c4548u: goto label_2c4548;
        case 0x2c454cu: goto label_2c454c;
        case 0x2c4550u: goto label_2c4550;
        case 0x2c4554u: goto label_2c4554;
        case 0x2c4558u: goto label_2c4558;
        case 0x2c455cu: goto label_2c455c;
        case 0x2c4560u: goto label_2c4560;
        case 0x2c4564u: goto label_2c4564;
        case 0x2c4568u: goto label_2c4568;
        case 0x2c456cu: goto label_2c456c;
        case 0x2c4570u: goto label_2c4570;
        case 0x2c4574u: goto label_2c4574;
        case 0x2c4578u: goto label_2c4578;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c4580u: goto label_2c4580;
        case 0x2c4584u: goto label_2c4584;
        case 0x2c4588u: goto label_2c4588;
        case 0x2c458cu: goto label_2c458c;
        case 0x2c4590u: goto label_2c4590;
        case 0x2c4594u: goto label_2c4594;
        case 0x2c4598u: goto label_2c4598;
        case 0x2c459cu: goto label_2c459c;
        case 0x2c45a0u: goto label_2c45a0;
        case 0x2c45a4u: goto label_2c45a4;
        case 0x2c45a8u: goto label_2c45a8;
        case 0x2c45acu: goto label_2c45ac;
        case 0x2c45b0u: goto label_2c45b0;
        case 0x2c45b4u: goto label_2c45b4;
        case 0x2c45b8u: goto label_2c45b8;
        case 0x2c45bcu: goto label_2c45bc;
        case 0x2c45c0u: goto label_2c45c0;
        case 0x2c45c4u: goto label_2c45c4;
        case 0x2c45c8u: goto label_2c45c8;
        case 0x2c45ccu: goto label_2c45cc;
        case 0x2c45d0u: goto label_2c45d0;
        case 0x2c45d4u: goto label_2c45d4;
        case 0x2c45d8u: goto label_2c45d8;
        case 0x2c45dcu: goto label_2c45dc;
        case 0x2c45e0u: goto label_2c45e0;
        case 0x2c45e4u: goto label_2c45e4;
        case 0x2c45e8u: goto label_2c45e8;
        case 0x2c45ecu: goto label_2c45ec;
        case 0x2c45f0u: goto label_2c45f0;
        case 0x2c45f4u: goto label_2c45f4;
        case 0x2c45f8u: goto label_2c45f8;
        case 0x2c45fcu: goto label_2c45fc;
        case 0x2c4600u: goto label_2c4600;
        case 0x2c4604u: goto label_2c4604;
        case 0x2c4608u: goto label_2c4608;
        case 0x2c460cu: goto label_2c460c;
        case 0x2c4610u: goto label_2c4610;
        case 0x2c4614u: goto label_2c4614;
        case 0x2c4618u: goto label_2c4618;
        case 0x2c461cu: goto label_2c461c;
        case 0x2c4620u: goto label_2c4620;
        case 0x2c4624u: goto label_2c4624;
        case 0x2c4628u: goto label_2c4628;
        case 0x2c462cu: goto label_2c462c;
        case 0x2c4630u: goto label_2c4630;
        case 0x2c4634u: goto label_2c4634;
        case 0x2c4638u: goto label_2c4638;
        case 0x2c463cu: goto label_2c463c;
        case 0x2c4640u: goto label_2c4640;
        case 0x2c4644u: goto label_2c4644;
        case 0x2c4648u: goto label_2c4648;
        case 0x2c464cu: goto label_2c464c;
        case 0x2c4650u: goto label_2c4650;
        case 0x2c4654u: goto label_2c4654;
        case 0x2c4658u: goto label_2c4658;
        case 0x2c465cu: goto label_2c465c;
        case 0x2c4660u: goto label_2c4660;
        case 0x2c4664u: goto label_2c4664;
        case 0x2c4668u: goto label_2c4668;
        case 0x2c466cu: goto label_2c466c;
        case 0x2c4670u: goto label_2c4670;
        case 0x2c4674u: goto label_2c4674;
        case 0x2c4678u: goto label_2c4678;
        case 0x2c467cu: goto label_2c467c;
        case 0x2c4680u: goto label_2c4680;
        case 0x2c4684u: goto label_2c4684;
        case 0x2c4688u: goto label_2c4688;
        case 0x2c468cu: goto label_2c468c;
        case 0x2c4690u: goto label_2c4690;
        case 0x2c4694u: goto label_2c4694;
        case 0x2c4698u: goto label_2c4698;
        case 0x2c469cu: goto label_2c469c;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46a4u: goto label_2c46a4;
        case 0x2c46a8u: goto label_2c46a8;
        case 0x2c46acu: goto label_2c46ac;
        case 0x2c46b0u: goto label_2c46b0;
        case 0x2c46b4u: goto label_2c46b4;
        case 0x2c46b8u: goto label_2c46b8;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46c0u: goto label_2c46c0;
        case 0x2c46c4u: goto label_2c46c4;
        case 0x2c46c8u: goto label_2c46c8;
        case 0x2c46ccu: goto label_2c46cc;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c46d4u: goto label_2c46d4;
        case 0x2c46d8u: goto label_2c46d8;
        case 0x2c46dcu: goto label_2c46dc;
        case 0x2c46e0u: goto label_2c46e0;
        case 0x2c46e4u: goto label_2c46e4;
        case 0x2c46e8u: goto label_2c46e8;
        case 0x2c46ecu: goto label_2c46ec;
        case 0x2c46f0u: goto label_2c46f0;
        case 0x2c46f4u: goto label_2c46f4;
        case 0x2c46f8u: goto label_2c46f8;
        case 0x2c46fcu: goto label_2c46fc;
        case 0x2c4700u: goto label_2c4700;
        case 0x2c4704u: goto label_2c4704;
        case 0x2c4708u: goto label_2c4708;
        case 0x2c470cu: goto label_2c470c;
        case 0x2c4710u: goto label_2c4710;
        case 0x2c4714u: goto label_2c4714;
        case 0x2c4718u: goto label_2c4718;
        case 0x2c471cu: goto label_2c471c;
        case 0x2c4720u: goto label_2c4720;
        case 0x2c4724u: goto label_2c4724;
        case 0x2c4728u: goto label_2c4728;
        case 0x2c472cu: goto label_2c472c;
        case 0x2c4730u: goto label_2c4730;
        case 0x2c4734u: goto label_2c4734;
        case 0x2c4738u: goto label_2c4738;
        case 0x2c473cu: goto label_2c473c;
        case 0x2c4740u: goto label_2c4740;
        case 0x2c4744u: goto label_2c4744;
        case 0x2c4748u: goto label_2c4748;
        case 0x2c474cu: goto label_2c474c;
        case 0x2c4750u: goto label_2c4750;
        case 0x2c4754u: goto label_2c4754;
        case 0x2c4758u: goto label_2c4758;
        case 0x2c475cu: goto label_2c475c;
        case 0x2c4760u: goto label_2c4760;
        case 0x2c4764u: goto label_2c4764;
        case 0x2c4768u: goto label_2c4768;
        case 0x2c476cu: goto label_2c476c;
        case 0x2c4770u: goto label_2c4770;
        case 0x2c4774u: goto label_2c4774;
        case 0x2c4778u: goto label_2c4778;
        case 0x2c477cu: goto label_2c477c;
        case 0x2c4780u: goto label_2c4780;
        case 0x2c4784u: goto label_2c4784;
        case 0x2c4788u: goto label_2c4788;
        case 0x2c478cu: goto label_2c478c;
        case 0x2c4790u: goto label_2c4790;
        case 0x2c4794u: goto label_2c4794;
        case 0x2c4798u: goto label_2c4798;
        case 0x2c479cu: goto label_2c479c;
        case 0x2c47a0u: goto label_2c47a0;
        case 0x2c47a4u: goto label_2c47a4;
        case 0x2c47a8u: goto label_2c47a8;
        case 0x2c47acu: goto label_2c47ac;
        case 0x2c47b0u: goto label_2c47b0;
        case 0x2c47b4u: goto label_2c47b4;
        case 0x2c47b8u: goto label_2c47b8;
        case 0x2c47bcu: goto label_2c47bc;
        case 0x2c47c0u: goto label_2c47c0;
        case 0x2c47c4u: goto label_2c47c4;
        case 0x2c47c8u: goto label_2c47c8;
        case 0x2c47ccu: goto label_2c47cc;
        case 0x2c47d0u: goto label_2c47d0;
        case 0x2c47d4u: goto label_2c47d4;
        case 0x2c47d8u: goto label_2c47d8;
        case 0x2c47dcu: goto label_2c47dc;
        case 0x2c47e0u: goto label_2c47e0;
        case 0x2c47e4u: goto label_2c47e4;
        case 0x2c47e8u: goto label_2c47e8;
        case 0x2c47ecu: goto label_2c47ec;
        case 0x2c47f0u: goto label_2c47f0;
        case 0x2c47f4u: goto label_2c47f4;
        case 0x2c47f8u: goto label_2c47f8;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4800u: goto label_2c4800;
        case 0x2c4804u: goto label_2c4804;
        case 0x2c4808u: goto label_2c4808;
        case 0x2c480cu: goto label_2c480c;
        case 0x2c4810u: goto label_2c4810;
        case 0x2c4814u: goto label_2c4814;
        case 0x2c4818u: goto label_2c4818;
        case 0x2c481cu: goto label_2c481c;
        case 0x2c4820u: goto label_2c4820;
        case 0x2c4824u: goto label_2c4824;
        case 0x2c4828u: goto label_2c4828;
        case 0x2c482cu: goto label_2c482c;
        case 0x2c4830u: goto label_2c4830;
        case 0x2c4834u: goto label_2c4834;
        case 0x2c4838u: goto label_2c4838;
        case 0x2c483cu: goto label_2c483c;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4844u: goto label_2c4844;
        case 0x2c4848u: goto label_2c4848;
        case 0x2c484cu: goto label_2c484c;
        case 0x2c4850u: goto label_2c4850;
        case 0x2c4854u: goto label_2c4854;
        case 0x2c4858u: goto label_2c4858;
        case 0x2c485cu: goto label_2c485c;
        case 0x2c4860u: goto label_2c4860;
        case 0x2c4864u: goto label_2c4864;
        case 0x2c4868u: goto label_2c4868;
        case 0x2c486cu: goto label_2c486c;
        case 0x2c4870u: goto label_2c4870;
        case 0x2c4874u: goto label_2c4874;
        case 0x2c4878u: goto label_2c4878;
        case 0x2c487cu: goto label_2c487c;
        case 0x2c4880u: goto label_2c4880;
        case 0x2c4884u: goto label_2c4884;
        case 0x2c4888u: goto label_2c4888;
        case 0x2c488cu: goto label_2c488c;
        case 0x2c4890u: goto label_2c4890;
        case 0x2c4894u: goto label_2c4894;
        case 0x2c4898u: goto label_2c4898;
        case 0x2c489cu: goto label_2c489c;
        case 0x2c48a0u: goto label_2c48a0;
        case 0x2c48a4u: goto label_2c48a4;
        case 0x2c48a8u: goto label_2c48a8;
        case 0x2c48acu: goto label_2c48ac;
        case 0x2c48b0u: goto label_2c48b0;
        case 0x2c48b4u: goto label_2c48b4;
        case 0x2c48b8u: goto label_2c48b8;
        case 0x2c48bcu: goto label_2c48bc;
        case 0x2c48c0u: goto label_2c48c0;
        case 0x2c48c4u: goto label_2c48c4;
        case 0x2c48c8u: goto label_2c48c8;
        case 0x2c48ccu: goto label_2c48cc;
        case 0x2c48d0u: goto label_2c48d0;
        case 0x2c48d4u: goto label_2c48d4;
        case 0x2c48d8u: goto label_2c48d8;
        case 0x2c48dcu: goto label_2c48dc;
        case 0x2c48e0u: goto label_2c48e0;
        case 0x2c48e4u: goto label_2c48e4;
        case 0x2c48e8u: goto label_2c48e8;
        case 0x2c48ecu: goto label_2c48ec;
        case 0x2c48f0u: goto label_2c48f0;
        case 0x2c48f4u: goto label_2c48f4;
        case 0x2c48f8u: goto label_2c48f8;
        case 0x2c48fcu: goto label_2c48fc;
        case 0x2c4900u: goto label_2c4900;
        case 0x2c4904u: goto label_2c4904;
        case 0x2c4908u: goto label_2c4908;
        case 0x2c490cu: goto label_2c490c;
        case 0x2c4910u: goto label_2c4910;
        case 0x2c4914u: goto label_2c4914;
        case 0x2c4918u: goto label_2c4918;
        case 0x2c491cu: goto label_2c491c;
        case 0x2c4920u: goto label_2c4920;
        case 0x2c4924u: goto label_2c4924;
        case 0x2c4928u: goto label_2c4928;
        case 0x2c492cu: goto label_2c492c;
        case 0x2c4930u: goto label_2c4930;
        case 0x2c4934u: goto label_2c4934;
        case 0x2c4938u: goto label_2c4938;
        case 0x2c493cu: goto label_2c493c;
        case 0x2c4940u: goto label_2c4940;
        case 0x2c4944u: goto label_2c4944;
        case 0x2c4948u: goto label_2c4948;
        case 0x2c494cu: goto label_2c494c;
        case 0x2c4950u: goto label_2c4950;
        case 0x2c4954u: goto label_2c4954;
        case 0x2c4958u: goto label_2c4958;
        case 0x2c495cu: goto label_2c495c;
        case 0x2c4960u: goto label_2c4960;
        case 0x2c4964u: goto label_2c4964;
        case 0x2c4968u: goto label_2c4968;
        case 0x2c496cu: goto label_2c496c;
        case 0x2c4970u: goto label_2c4970;
        case 0x2c4974u: goto label_2c4974;
        case 0x2c4978u: goto label_2c4978;
        case 0x2c497cu: goto label_2c497c;
        case 0x2c4980u: goto label_2c4980;
        case 0x2c4984u: goto label_2c4984;
        case 0x2c4988u: goto label_2c4988;
        case 0x2c498cu: goto label_2c498c;
        case 0x2c4990u: goto label_2c4990;
        case 0x2c4994u: goto label_2c4994;
        case 0x2c4998u: goto label_2c4998;
        case 0x2c499cu: goto label_2c499c;
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49a8u: goto label_2c49a8;
        case 0x2c49acu: goto label_2c49ac;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49b8u: goto label_2c49b8;
        case 0x2c49bcu: goto label_2c49bc;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c49c4u: goto label_2c49c4;
        case 0x2c49c8u: goto label_2c49c8;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49d0u: goto label_2c49d0;
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49d8u: goto label_2c49d8;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49e0u: goto label_2c49e0;
        case 0x2c49e4u: goto label_2c49e4;
        case 0x2c49e8u: goto label_2c49e8;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c49f0u: goto label_2c49f0;
        case 0x2c49f4u: goto label_2c49f4;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c49fcu: goto label_2c49fc;
        case 0x2c4a00u: goto label_2c4a00;
        case 0x2c4a04u: goto label_2c4a04;
        case 0x2c4a08u: goto label_2c4a08;
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a10u: goto label_2c4a10;
        case 0x2c4a14u: goto label_2c4a14;
        case 0x2c4a18u: goto label_2c4a18;
        case 0x2c4a1cu: goto label_2c4a1c;
        case 0x2c4a20u: goto label_2c4a20;
        case 0x2c4a24u: goto label_2c4a24;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a2cu: goto label_2c4a2c;
        case 0x2c4a30u: goto label_2c4a30;
        case 0x2c4a34u: goto label_2c4a34;
        case 0x2c4a38u: goto label_2c4a38;
        case 0x2c4a3cu: goto label_2c4a3c;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a44u: goto label_2c4a44;
        case 0x2c4a48u: goto label_2c4a48;
        case 0x2c4a4cu: goto label_2c4a4c;
        case 0x2c4a50u: goto label_2c4a50;
        case 0x2c4a54u: goto label_2c4a54;
        case 0x2c4a58u: goto label_2c4a58;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4a60u: goto label_2c4a60;
        case 0x2c4a64u: goto label_2c4a64;
        case 0x2c4a68u: goto label_2c4a68;
        case 0x2c4a6cu: goto label_2c4a6c;
        case 0x2c4a70u: goto label_2c4a70;
        case 0x2c4a74u: goto label_2c4a74;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4a7cu: goto label_2c4a7c;
        case 0x2c4a80u: goto label_2c4a80;
        case 0x2c4a84u: goto label_2c4a84;
        case 0x2c4a88u: goto label_2c4a88;
        case 0x2c4a8cu: goto label_2c4a8c;
        case 0x2c4a90u: goto label_2c4a90;
        case 0x2c4a94u: goto label_2c4a94;
        case 0x2c4a98u: goto label_2c4a98;
        case 0x2c4a9cu: goto label_2c4a9c;
        case 0x2c4aa0u: goto label_2c4aa0;
        case 0x2c4aa4u: goto label_2c4aa4;
        case 0x2c4aa8u: goto label_2c4aa8;
        case 0x2c4aacu: goto label_2c4aac;
        case 0x2c4ab0u: goto label_2c4ab0;
        case 0x2c4ab4u: goto label_2c4ab4;
        case 0x2c4ab8u: goto label_2c4ab8;
        case 0x2c4abcu: goto label_2c4abc;
        case 0x2c4ac0u: goto label_2c4ac0;
        case 0x2c4ac4u: goto label_2c4ac4;
        case 0x2c4ac8u: goto label_2c4ac8;
        case 0x2c4accu: goto label_2c4acc;
        case 0x2c4ad0u: goto label_2c4ad0;
        case 0x2c4ad4u: goto label_2c4ad4;
        case 0x2c4ad8u: goto label_2c4ad8;
        case 0x2c4adcu: goto label_2c4adc;
        case 0x2c4ae0u: goto label_2c4ae0;
        case 0x2c4ae4u: goto label_2c4ae4;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4aecu: goto label_2c4aec;
        case 0x2c4af0u: goto label_2c4af0;
        case 0x2c4af4u: goto label_2c4af4;
        case 0x2c4af8u: goto label_2c4af8;
        case 0x2c4afcu: goto label_2c4afc;
        case 0x2c4b00u: goto label_2c4b00;
        case 0x2c4b04u: goto label_2c4b04;
        case 0x2c4b08u: goto label_2c4b08;
        case 0x2c4b0cu: goto label_2c4b0c;
        case 0x2c4b10u: goto label_2c4b10;
        case 0x2c4b14u: goto label_2c4b14;
        case 0x2c4b18u: goto label_2c4b18;
        case 0x2c4b1cu: goto label_2c4b1c;
        case 0x2c4b20u: goto label_2c4b20;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b28u: goto label_2c4b28;
        case 0x2c4b2cu: goto label_2c4b2c;
        case 0x2c4b30u: goto label_2c4b30;
        case 0x2c4b34u: goto label_2c4b34;
        case 0x2c4b38u: goto label_2c4b38;
        case 0x2c4b3cu: goto label_2c4b3c;
        case 0x2c4b40u: goto label_2c4b40;
        case 0x2c4b44u: goto label_2c4b44;
        case 0x2c4b48u: goto label_2c4b48;
        case 0x2c4b4cu: goto label_2c4b4c;
        case 0x2c4b50u: goto label_2c4b50;
        case 0x2c4b54u: goto label_2c4b54;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4b5cu: goto label_2c4b5c;
        case 0x2c4b60u: goto label_2c4b60;
        case 0x2c4b64u: goto label_2c4b64;
        case 0x2c4b68u: goto label_2c4b68;
        case 0x2c4b6cu: goto label_2c4b6c;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b74u: goto label_2c4b74;
        case 0x2c4b78u: goto label_2c4b78;
        case 0x2c4b7cu: goto label_2c4b7c;
        case 0x2c4b80u: goto label_2c4b80;
        case 0x2c4b84u: goto label_2c4b84;
        case 0x2c4b88u: goto label_2c4b88;
        case 0x2c4b8cu: goto label_2c4b8c;
        case 0x2c4b90u: goto label_2c4b90;
        case 0x2c4b94u: goto label_2c4b94;
        case 0x2c4b98u: goto label_2c4b98;
        case 0x2c4b9cu: goto label_2c4b9c;
        case 0x2c4ba0u: goto label_2c4ba0;
        case 0x2c4ba4u: goto label_2c4ba4;
        case 0x2c4ba8u: goto label_2c4ba8;
        case 0x2c4bacu: goto label_2c4bac;
        case 0x2c4bb0u: goto label_2c4bb0;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bb8u: goto label_2c4bb8;
        case 0x2c4bbcu: goto label_2c4bbc;
        case 0x2c4bc0u: goto label_2c4bc0;
        case 0x2c4bc4u: goto label_2c4bc4;
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4bccu: goto label_2c4bcc;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bd4u: goto label_2c4bd4;
        case 0x2c4bd8u: goto label_2c4bd8;
        case 0x2c4bdcu: goto label_2c4bdc;
        case 0x2c4be0u: goto label_2c4be0;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4be8u: goto label_2c4be8;
        case 0x2c4becu: goto label_2c4bec;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4bf4u: goto label_2c4bf4;
        case 0x2c4bf8u: goto label_2c4bf8;
        case 0x2c4bfcu: goto label_2c4bfc;
        case 0x2c4c00u: goto label_2c4c00;
        case 0x2c4c04u: goto label_2c4c04;
        case 0x2c4c08u: goto label_2c4c08;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c10u: goto label_2c4c10;
        case 0x2c4c14u: goto label_2c4c14;
        case 0x2c4c18u: goto label_2c4c18;
        case 0x2c4c1cu: goto label_2c4c1c;
        case 0x2c4c20u: goto label_2c4c20;
        case 0x2c4c24u: goto label_2c4c24;
        case 0x2c4c28u: goto label_2c4c28;
        case 0x2c4c2cu: goto label_2c4c2c;
        case 0x2c4c30u: goto label_2c4c30;
        case 0x2c4c34u: goto label_2c4c34;
        case 0x2c4c38u: goto label_2c4c38;
        default: break;
    }

    ctx->pc = 0x2c4400u;

label_2c4400:
    // 0x2c4400: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2c4404:
    // 0x2c4404: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2c4404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_2c4408:
    // 0x2c4408: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c4408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2c440c:
    // 0x2c440c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c4410:
    // 0x2c4410: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c4410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2c4414:
    // 0x2c4414: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c4414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c4418:
    // 0x2c4418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c4418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c441c:
    // 0x2c441c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c4420:
    // 0x2c4420: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c4420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c4424:
    // 0x2c4424: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_2c4428:
    // 0x2c4428: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2c4428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2c442c:
    // 0x2c442c: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x2c442cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2c4430:
    // 0x2c4430: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4434:
    // 0x2c4434: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c4434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2c4438:
    // 0x2c4438: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2c4438u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c443c:
    // 0x2c443c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c443cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4440:
    // 0x2c4440: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4444:
    // 0x2c4444: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2c4444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2c4448:
    // 0x2c4448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c444c:
    // 0x2c444c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c444cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4450:
    // 0x2c4450: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c4450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2c4454:
    // 0x2c4454: 0x24528060  addiu       $s2, $v0, -0x7FA0
    ctx->pc = 0x2c4454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934624));
label_2c4458:
    // 0x2c4458: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2c4458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2c445c:
    // 0x2c445c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c4460:
    // 0x2c4460: 0x40f809  jalr        $v0
label_2c4464:
    if (ctx->pc == 0x2C4464u) {
        ctx->pc = 0x2C4468u;
        goto label_2c4468;
    }
    ctx->pc = 0x2C4460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C4468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4460u, 0x2C4468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4468u;
label_2c4468:
    // 0x2c4468: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c446c:
    // 0x2c446c: 0xc0b3950  jal         func_2CE540
label_2c4470:
    if (ctx->pc == 0x2C4470u) {
        ctx->pc = 0x2C4474u;
        goto label_2c4474;
    }
    ctx->pc = 0x2C446Cu;
    SET_GPR_U32(ctx, 31, 0x2C4474u);
    ctx->pc = 0x2CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE540u, 0x2C446Cu, 0x2C4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4474u;
label_2c4474:
    // 0x2c4474: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4478:
    // 0x2c4478: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c447c:
    // 0x2c447c: 0x84420058  lh          $v0, 0x58($v0)
    ctx->pc = 0x2c447cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2c4480:
    // 0x2c4480: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c4484:
    if (ctx->pc == 0x2C4484u) {
        ctx->pc = 0x2C4488u;
        goto label_2c4488;
    }
    ctx->pc = 0x2C4480u;
    {
        const bool branch_taken_0x2c4480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4480) {
            ctx->pc = 0x2C449Cu;
            goto label_2c449c;
        }
    }
    ctx->pc = 0x2C4488u;
label_2c4488:
    // 0x2c4488: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c448c:
    // 0x2c448c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4490:
    // 0x2c4490: 0x84620058  lh          $v0, 0x58($v1)
    ctx->pc = 0x2c4490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_2c4494:
    // 0x2c4494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c4494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c4498:
    // 0x2c4498: 0xa4620058  sh          $v0, 0x58($v1)
    ctx->pc = 0x2c4498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 2));
label_2c449c:
    // 0x2c449c: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x2c449cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c44a0:
    // 0x2c44a0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
label_2c44a4:
    // 0x2c44a4: 0x9462005a  lhu         $v0, 0x5A($v1)
    ctx->pc = 0x2c44a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
label_2c44a8:
    // 0x2c44a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c44ac:
    if (ctx->pc == 0x2C44ACu) {
        ctx->pc = 0x2C44B0u;
        goto label_2c44b0;
    }
    ctx->pc = 0x2C44A8u;
    {
        const bool branch_taken_0x2c44a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44a8) {
            ctx->pc = 0x2C44C4u;
            goto label_2c44c4;
        }
    }
    ctx->pc = 0x2C44B0u;
label_2c44b0:
    // 0x2c44b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c44b4:
    // 0x2c44b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c44b8:
    // 0x2c44b8: 0x9462005a  lhu         $v0, 0x5A($v1)
    ctx->pc = 0x2c44b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
label_2c44bc:
    // 0x2c44bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c44c0:
    // 0x2c44c0: 0xa462005a  sh          $v0, 0x5A($v1)
    ctx->pc = 0x2c44c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 2));
label_2c44c4:
    // 0x2c44c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c44c8:
    // 0x2c44c8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2c44cc:
    // 0x2c44cc: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x2c44ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2c44d0:
    // 0x2c44d0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_2c44d4:
    if (ctx->pc == 0x2C44D4u) {
        ctx->pc = 0x2C44D8u;
        goto label_2c44d8;
    }
    ctx->pc = 0x2C44D0u;
    {
        const bool branch_taken_0x2c44d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44d0) {
            ctx->pc = 0x2C44ECu;
            goto label_2c44ec;
        }
    }
    ctx->pc = 0x2C44D8u;
label_2c44d8:
    // 0x2c44d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c44dc:
    // 0x2c44dc: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x2c44dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c44e0:
    // 0x2c44e0: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_2c44e4:
    // 0x2c44e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c44e8:
    // 0x2c44e8: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x2c44e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
label_2c44ec:
    // 0x2c44ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c44f0:
    // 0x2c44f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c44f4:
    // 0x2c44f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c44f8:
    // 0x2c44f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2c44fc:
    if (ctx->pc == 0x2C44FCu) {
        ctx->pc = 0x2C4500u;
        goto label_2c4500;
    }
    ctx->pc = 0x2C44F8u;
    {
        const bool branch_taken_0x2c44f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44f8) {
            ctx->pc = 0x2C4528u;
            goto label_2c4528;
        }
    }
    ctx->pc = 0x2C4500u;
label_2c4500:
    // 0x2c4500: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4504:
    // 0x2c4504: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4508:
    // 0x2c4508: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x2c4508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2c450c:
    // 0x2c450c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c4510:
    if (ctx->pc == 0x2C4510u) {
        ctx->pc = 0x2C4514u;
        goto label_2c4514;
    }
    ctx->pc = 0x2C450Cu;
    {
        const bool branch_taken_0x2c450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c450c) {
            ctx->pc = 0x2C4528u;
            goto label_2c4528;
        }
    }
    ctx->pc = 0x2C4514u;
label_2c4514:
    // 0x2c4514: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x2c4514u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4518:
    // 0x2c4518: 0x26061330  addiu       $a2, $s0, 0x1330
    ctx->pc = 0x2c4518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
label_2c451c:
    // 0x2c451c: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x2c451cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_2c4520:
    // 0x2c4520: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c4524:
    // 0x2c4524: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x2c4524u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
label_2c4528:
    // 0x2c4528: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c452c:
    // 0x2c452c: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x2c452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4530:
    // 0x2c4530: 0x8cc7001c  lw          $a3, 0x1C($a2)
    ctx->pc = 0x2c4530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_2c4534:
    // 0x2c4534: 0x30e80004  andi        $t0, $a3, 0x4
    ctx->pc = 0x2c4534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_2c4538:
    // 0x2c4538: 0x15000047  bnez        $t0, . + 4 + (0x47 << 2)
label_2c453c:
    if (ctx->pc == 0x2C453Cu) {
        ctx->pc = 0x2C4540u;
        goto label_2c4540;
    }
    ctx->pc = 0x2C4538u;
    {
        const bool branch_taken_0x2c4538 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4538) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C4540u;
label_2c4540:
    // 0x2c4540: 0x8fa900b8  lw          $t1, 0xB8($sp)
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4544:
    // 0x2c4544: 0x25221330  addiu       $v0, $t1, 0x1330
    ctx->pc = 0x2c4544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4912));
label_2c4548:
    // 0x2c4548: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c454c:
    // 0x2c454c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4550:
    // 0x2c4550: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c4550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2c4554:
    // 0x2c4554: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c4554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4558:
    // 0x2c4558: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c4558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c455c:
    // 0x2c455c: 0x0  nop
    ctx->pc = 0x2c455cu;
    // NOP
label_2c4560:
    // 0x2c4560: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_2c4564:
    if (ctx->pc == 0x2C4564u) {
        ctx->pc = 0x2C4568u;
        goto label_2c4568;
    }
    ctx->pc = 0x2C4560u;
    {
        const bool branch_taken_0x2c4560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4560) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C4568u;
label_2c4568:
    // 0x2c4568: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c456c:
    // 0x2c456c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4570:
    // 0x2c4570: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2c4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4574:
    // 0x2c4574: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4578:
    // 0x2c4578: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c457c:
    // 0x2c457c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4580:
    // 0x2c4580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4584:
    // 0x2c4584: 0x0  nop
    ctx->pc = 0x2c4584u;
    // NOP
label_2c4588:
    // 0x2c4588: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_2c458c:
    if (ctx->pc == 0x2C458Cu) {
        ctx->pc = 0x2C4590u;
        goto label_2c4590;
    }
    ctx->pc = 0x2C4588u;
    {
        const bool branch_taken_0x2c4588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4588) {
            ctx->pc = 0x2C45F8u;
            goto label_2c45f8;
        }
    }
    ctx->pc = 0x2C4590u;
label_2c4590:
    // 0x2c4590: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4594:
    // 0x2c4594: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4598:
    // 0x2c4598: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2c4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c459c:
    // 0x2c459c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c45a0:
    // 0x2c45a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c45a4:
    // 0x2c45a4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c45a8:
    // 0x2c45a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c45a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c45ac:
    // 0x2c45ac: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2c45b0:
    // 0x2c45b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c45b4:
    // 0x2c45b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c45b8:
    // 0x2c45b8: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c45bc:
    // 0x2c45bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c45c0:
    // 0x2c45c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c45c4:
    // 0x2c45c4: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c45c8:
    // 0x2c45c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c45c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c45cc:
    // 0x2c45cc: 0x0  nop
    ctx->pc = 0x2c45ccu;
    // NOP
label_2c45d0:
    // 0x2c45d0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_2c45d4:
    if (ctx->pc == 0x2C45D4u) {
        ctx->pc = 0x2C45D8u;
        goto label_2c45d8;
    }
    ctx->pc = 0x2C45D0u;
    {
        const bool branch_taken_0x2c45d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c45d0) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C45D8u;
label_2c45d8:
    // 0x2c45d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c45dc:
    // 0x2c45dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c45e0:
    // 0x2c45e0: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c45e4:
    // 0x2c45e4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c45e8:
    // 0x2c45e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c45ec:
    // 0x2c45ec: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c45ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2c45f0:
    // 0x2c45f0: 0x10000019  b           . + 4 + (0x19 << 2)
label_2c45f4:
    if (ctx->pc == 0x2C45F4u) {
        ctx->pc = 0x2C45F8u;
        goto label_2c45f8;
    }
    ctx->pc = 0x2C45F0u;
    {
        const bool branch_taken_0x2c45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c45f0) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C45F8u;
label_2c45f8:
    // 0x2c45f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c45fc:
    // 0x2c45fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4600:
    // 0x2c4600: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2c4600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4604:
    // 0x2c4604: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4608:
    // 0x2c4608: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c460c:
    // 0x2c460c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4610:
    // 0x2c4610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c4614:
    // 0x2c4614: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c4614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2c4618:
    // 0x2c4618: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c461c:
    // 0x2c461c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4620:
    // 0x2c4620: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c4620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4624:
    // 0x2c4624: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4628:
    // 0x2c4628: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c462c:
    // 0x2c462c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4630:
    // 0x2c4630: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4634:
    // 0x2c4634: 0x0  nop
    ctx->pc = 0x2c4634u;
    // NOP
label_2c4638:
    // 0x2c4638: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2c463c:
    if (ctx->pc == 0x2C463Cu) {
        ctx->pc = 0x2C4640u;
        goto label_2c4640;
    }
    ctx->pc = 0x2C4638u;
    {
        const bool branch_taken_0x2c4638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4638) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C4640u;
label_2c4640:
    // 0x2c4640: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4644:
    // 0x2c4644: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4648:
    // 0x2c4648: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c464c:
    // 0x2c464c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4650:
    // 0x2c4650: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4654:
    // 0x2c4654: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c4654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2c4658:
    // 0x2c4658: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c465c:
    // 0x2c465c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4660:
    // 0x2c4660: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2c4660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2c4664:
    // 0x2c4664: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2c4664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2c4668:
    // 0x2c4668: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_2c466c:
    if (ctx->pc == 0x2C466Cu) {
        ctx->pc = 0x2C4670u;
        goto label_2c4670;
    }
    ctx->pc = 0x2C4668u;
    {
        const bool branch_taken_0x2c4668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4668) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4670u;
label_2c4670:
    // 0x2c4670: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4674:
    // 0x2c4674: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4678:
    // 0x2c4678: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c467c:
    // 0x2c467c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4680:
    // 0x2c4680: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4684:
    // 0x2c4684: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4688:
    // 0x2c4688: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c4688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c468c:
    // 0x2c468c: 0x0  nop
    ctx->pc = 0x2c468cu;
    // NOP
label_2c4690:
    // 0x2c4690: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_2c4694:
    if (ctx->pc == 0x2C4694u) {
        ctx->pc = 0x2C4698u;
        goto label_2c4698;
    }
    ctx->pc = 0x2C4690u;
    {
        const bool branch_taken_0x2c4690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4690) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4698u;
label_2c4698:
    // 0x2c4698: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c469c:
    // 0x2c469c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c46a0:
    // 0x2c46a0: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c46a4:
    // 0x2c46a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c46a8:
    // 0x2c46a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c46ac:
    // 0x2c46ac: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c46acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c46b0:
    // 0x2c46b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c46b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c46b4:
    // 0x2c46b4: 0x0  nop
    ctx->pc = 0x2c46b4u;
    // NOP
label_2c46b8:
    // 0x2c46b8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_2c46bc:
    if (ctx->pc == 0x2C46BCu) {
        ctx->pc = 0x2C46C0u;
        goto label_2c46c0;
    }
    ctx->pc = 0x2C46B8u;
    {
        const bool branch_taken_0x2c46b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c46b8) {
            ctx->pc = 0x2C4728u;
            goto label_2c4728;
        }
    }
    ctx->pc = 0x2C46C0u;
label_2c46c0:
    // 0x2c46c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c46c4:
    // 0x2c46c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c46c8:
    // 0x2c46c8: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2c46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c46cc:
    // 0x2c46cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c46d0:
    // 0x2c46d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c46d4:
    // 0x2c46d4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c46d8:
    // 0x2c46d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c46d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c46dc:
    // 0x2c46dc: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c46dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_2c46e0:
    // 0x2c46e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c46e4:
    // 0x2c46e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c46e8:
    // 0x2c46e8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c46e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c46ec:
    // 0x2c46ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c46f0:
    // 0x2c46f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c46f4:
    // 0x2c46f4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c46f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c46f8:
    // 0x2c46f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c46f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c46fc:
    // 0x2c46fc: 0x0  nop
    ctx->pc = 0x2c46fcu;
    // NOP
label_2c4700:
    // 0x2c4700: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_2c4704:
    if (ctx->pc == 0x2C4704u) {
        ctx->pc = 0x2C4708u;
        goto label_2c4708;
    }
    ctx->pc = 0x2C4700u;
    {
        const bool branch_taken_0x2c4700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4700) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4708u;
label_2c4708:
    // 0x2c4708: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c470c:
    // 0x2c470c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4710:
    // 0x2c4710: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4714:
    // 0x2c4714: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4718:
    // 0x2c4718: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c471c:
    // 0x2c471c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c471cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_2c4720:
    // 0x2c4720: 0x10000019  b           . + 4 + (0x19 << 2)
label_2c4724:
    if (ctx->pc == 0x2C4724u) {
        ctx->pc = 0x2C4728u;
        goto label_2c4728;
    }
    ctx->pc = 0x2C4720u;
    {
        const bool branch_taken_0x2c4720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4720) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4728u;
label_2c4728:
    // 0x2c4728: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c472c:
    // 0x2c472c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4730:
    // 0x2c4730: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2c4730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4734:
    // 0x2c4734: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4738:
    // 0x2c4738: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c473c:
    // 0x2c473c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4740:
    // 0x2c4740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c4744:
    // 0x2c4744: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c4744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_2c4748:
    // 0x2c4748: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c474c:
    // 0x2c474c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4750:
    // 0x2c4750: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c4750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4754:
    // 0x2c4754: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4758:
    // 0x2c4758: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c475c:
    // 0x2c475c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4760:
    // 0x2c4760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4764:
    // 0x2c4764: 0x0  nop
    ctx->pc = 0x2c4764u;
    // NOP
label_2c4768:
    // 0x2c4768: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2c476c:
    if (ctx->pc == 0x2C476Cu) {
        ctx->pc = 0x2C4770u;
        goto label_2c4770;
    }
    ctx->pc = 0x2C4768u;
    {
        const bool branch_taken_0x2c4768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4768) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4770u;
label_2c4770:
    // 0x2c4770: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4774:
    // 0x2c4774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4778:
    // 0x2c4778: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c477c:
    // 0x2c477c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4780:
    // 0x2c4780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4784:
    // 0x2c4784: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c4784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_2c4788:
    // 0x2c4788: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c478c:
    // 0x2c478c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4790:
    // 0x2c4790: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x2c4790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c4794:
    // 0x2c4794: 0xc047fe2  jal         func_11FF88
label_2c4798:
    if (ctx->pc == 0x2C4798u) {
        ctx->pc = 0x2C479Cu;
        goto label_2c479c;
    }
    ctx->pc = 0x2C4794u;
    SET_GPR_U32(ctx, 31, 0x2C479Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C4794u, 0x2C479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C479Cu;
label_2c479c:
    // 0x2c479c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x2c479cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c47a0:
    // 0x2c47a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c47a4:
    // 0x2c47a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c47a8:
    // 0x2c47a8: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x2c47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c47ac:
    // 0x2c47ac: 0xc047fe2  jal         func_11FF88
label_2c47b0:
    if (ctx->pc == 0x2C47B0u) {
        ctx->pc = 0x2C47B4u;
        goto label_2c47b4;
    }
    ctx->pc = 0x2C47ACu;
    SET_GPR_U32(ctx, 31, 0x2C47B4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C47ACu, 0x2C47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47B4u;
label_2c47b4:
    // 0x2c47b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2c47b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c47b8:
    // 0x2c47b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c47bc:
    // 0x2c47bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c47c0:
    // 0x2c47c0: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x2c47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c47c4:
    // 0x2c47c4: 0xc047fe2  jal         func_11FF88
label_2c47c8:
    if (ctx->pc == 0x2C47C8u) {
        ctx->pc = 0x2C47CCu;
        goto label_2c47cc;
    }
    ctx->pc = 0x2C47C4u;
    SET_GPR_U32(ctx, 31, 0x2C47CCu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C47C4u, 0x2C47CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47CCu;
label_2c47cc:
    // 0x2c47cc: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2c47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2c47d0:
    // 0x2c47d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c47d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2c47d4:
    // 0x2c47d4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2c47d8:
    // 0x2c47d8: 0x34630308  ori         $v1, $v1, 0x308
    ctx->pc = 0x2c47d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)776);
label_2c47dc:
    // 0x2c47dc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c47dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2c47e0:
    // 0x2c47e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c47e4:
    // 0x2c47e4: 0x246518c0  addiu       $a1, $v1, 0x18C0
    ctx->pc = 0x2c47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6336));
label_2c47e8:
    // 0x2c47e8: 0x72a03628  paddub      $a2, $s5, $zero
    ctx->pc = 0x2c47e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2c47ec:
    // 0x2c47ec: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x2c47ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_2c47f0:
    // 0x2c47f0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2c47f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c47f4:
    // 0x2c47f4: 0xc059b14  jal         func_166C50
label_2c47f8:
    if (ctx->pc == 0x2C47F8u) {
        ctx->pc = 0x2C47FCu;
        goto label_2c47fc;
    }
    ctx->pc = 0x2C47F4u;
    SET_GPR_U32(ctx, 31, 0x2C47FCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C47F4u, 0x2C47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47FCu;
label_2c47fc:
    // 0x2c47fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4800:
    // 0x2c4800: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4804:
    // 0x2c4804: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x2c4804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_2c4808:
    // 0x2c4808: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_2c480c:
    if (ctx->pc == 0x2C480Cu) {
        ctx->pc = 0x2C4810u;
        goto label_2c4810;
    }
    ctx->pc = 0x2C4808u;
    {
        const bool branch_taken_0x2c4808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4808) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C4810u;
label_2c4810:
    // 0x2c4810: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4814:
    // 0x2c4814: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c4814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4818:
    // 0x2c4818: 0x8462000e  lh          $v0, 0xE($v1)
    ctx->pc = 0x2c4818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2c481c:
    // 0x2c481c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c4820:
    // 0x2c4820: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c4820u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_2c4824:
    // 0x2c4824: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4828:
    // 0x2c4828: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c482c:
    // 0x2c482c: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x2c482cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_2c4830:
    // 0x2c4830: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
label_2c4834:
    if (ctx->pc == 0x2C4834u) {
        ctx->pc = 0x2C4838u;
        goto label_2c4838;
    }
    ctx->pc = 0x2C4830u;
    {
        const bool branch_taken_0x2c4830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4830) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C4838u;
label_2c4838:
    // 0x2c4838: 0xc067694  jal         func_19DA50
label_2c483c:
    if (ctx->pc == 0x2C483Cu) {
        ctx->pc = 0x2C4840u;
        goto label_2c4840;
    }
    ctx->pc = 0x2C4838u;
    SET_GPR_U32(ctx, 31, 0x2C4840u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4838u, 0x2C4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4840u;
label_2c4840:
    // 0x2c4840: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4844:
    // 0x2c4844: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c4844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2c4848:
    // 0x2c4848: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2c4848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2c484c:
    // 0x2c484c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_2c4850:
    // 0x2c4850: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c4850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2c4854:
    // 0x2c4854: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4858:
    // 0x2c4858: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c485c:
    // 0x2c485c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c485cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_2c4860:
    // 0x2c4860: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4864:
    // 0x2c4864: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4868:
    // 0x2c4868: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c486c:
    // 0x2c486c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2c486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2c4870:
    // 0x2c4870: 0xc067648  jal         func_19D920
label_2c4874:
    if (ctx->pc == 0x2C4874u) {
        ctx->pc = 0x2C4878u;
        goto label_2c4878;
    }
    ctx->pc = 0x2C4870u;
    SET_GPR_U32(ctx, 31, 0x2C4878u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C4870u, 0x2C4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4878u;
label_2c4878:
    // 0x2c4878: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c4878u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c487c:
    // 0x2c487c: 0xc067648  jal         func_19D920
label_2c4880:
    if (ctx->pc == 0x2C4880u) {
        ctx->pc = 0x2C4884u;
        goto label_2c4884;
    }
    ctx->pc = 0x2C487Cu;
    SET_GPR_U32(ctx, 31, 0x2C4884u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C487Cu, 0x2C4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4884u;
label_2c4884:
    // 0x2c4884: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2c4884u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2c4888:
    // 0x2c4888: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2c488c:
    // 0x2c488c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4890:
    // 0x2c4890: 0x0  nop
    ctx->pc = 0x2c4890u;
    // NOP
label_2c4894:
    // 0x2c4894: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2c4894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c4898:
    // 0x2c4898: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2c4898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_2c489c:
    // 0x2c489c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2c489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2c48a0:
    // 0x2c48a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c48a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c48a4:
    // 0x2c48a4: 0x0  nop
    ctx->pc = 0x2c48a4u;
    // NOP
label_2c48a8:
    // 0x2c48a8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c48a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c48ac:
    // 0x2c48ac: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c48acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2c48b0:
    // 0x2c48b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c48b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c48b4:
    // 0x2c48b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2c48b8:
    // 0x2c48b8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c48b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c48bc:
    // 0x2c48bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c48bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2c48c0:
    // 0x2c48c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c48c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2c48c4:
    // 0x2c48c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c48c8:
    // 0x2c48c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c48cc:
    // 0x2c48cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c48ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c48d0:
    // 0x2c48d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c48d4:
    // 0x2c48d4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c48d8:
    // 0x2c48d8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2c48dc:
    // 0x2c48dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2c48e0:
    // 0x2c48e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c48e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c48e4:
    // 0x2c48e4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2c48e8:
    // 0x2c48e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c48ec:
    // 0x2c48ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c48f0:
    // 0x2c48f0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c48f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c48f4:
    // 0x2c48f4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2c48f8:
    // 0x2c48f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c48f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c48fc:
    // 0x2c48fc: 0x0  nop
    ctx->pc = 0x2c48fcu;
    // NOP
label_2c4900:
    // 0x2c4900: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c4900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c4904:
    // 0x2c4904: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4908:
    // 0x2c4908: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c490c:
    // 0x2c490c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4910:
    // 0x2c4910: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4914:
    // 0x2c4914: 0x0  nop
    ctx->pc = 0x2c4914u;
    // NOP
label_2c4918:
    // 0x2c4918: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_2c491c:
    if (ctx->pc == 0x2C491Cu) {
        ctx->pc = 0x2C4920u;
        goto label_2c4920;
    }
    ctx->pc = 0x2C4918u;
    {
        const bool branch_taken_0x2c4918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4918) {
            ctx->pc = 0x2C4954u;
            goto label_2c4954;
        }
    }
    ctx->pc = 0x2C4920u;
label_2c4920:
    // 0x2c4920: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2c4920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4924:
    // 0x2c4924: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4928:
    // 0x2c4928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c492c:
    // 0x2c492c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c492cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c4930:
    // 0x2c4930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4934:
    // 0x2c4934: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4938:
    // 0x2c4938: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c493c:
    // 0x2c493c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c493cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_2c4940:
    // 0x2c4940: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4944:
    // 0x2c4944: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4948:
    // 0x2c4948: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c494c:
    // 0x2c494c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2c4950:
    // 0x2c4950: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c4950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2c4954:
    // 0x2c4954: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2c4958:
    // 0x2c4958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c495c:
    // 0x2c495c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4960:
    // 0x2c4960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4964:
    // 0x2c4964: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2c4964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2c4968:
    // 0x2c4968: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c496c:
    // 0x2c496c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2c496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4970:
    // 0x2c4970: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2c4974:
    // 0x2c4974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4978:
    // 0x2c4978: 0x0  nop
    ctx->pc = 0x2c4978u;
    // NOP
label_2c497c:
    // 0x2c497c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c497cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4980:
    // 0x2c4980: 0x0  nop
    ctx->pc = 0x2c4980u;
    // NOP
label_2c4984:
    // 0x2c4984: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2c4988:
    if (ctx->pc == 0x2C4988u) {
        ctx->pc = 0x2C498Cu;
        goto label_2c498c;
    }
    ctx->pc = 0x2C4984u;
    {
        const bool branch_taken_0x2c4984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4984) {
            ctx->pc = 0x2C49A0u;
            goto label_2c49a0;
        }
    }
    ctx->pc = 0x2C498Cu;
label_2c498c:
    // 0x2c498c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c498cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2c4990:
    // 0x2c4990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4994:
    // 0x2c4994: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4998:
    // 0x2c4998: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c499c:
    // 0x2c499c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2c499cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2c49a0:
    // 0x2c49a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c49a4:
    // 0x2c49a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c49a8:
    // 0x2c49a8: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
label_2c49ac:
    // 0x2c49ac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c49acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2c49b0:
    // 0x2c49b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c49b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2c49b4:
    // 0x2c49b4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c49b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_2c49b8:
    // 0x2c49b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c49bc:
    if (ctx->pc == 0x2C49BCu) {
        ctx->pc = 0x2C49C0u;
        goto label_2c49c0;
    }
    ctx->pc = 0x2C49B8u;
    {
        const bool branch_taken_0x2c49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c49b8) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C49C0u;
label_2c49c0:
    // 0x2c49c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2c49c4:
    // 0x2c49c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c49c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c49c8:
    // 0x2c49c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c49cc:
    // 0x2c49cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c49d0:
    // 0x2c49d0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2c49d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2c49d4:
    // 0x2c49d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c49d8:
    // 0x2c49d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c49dc:
    // 0x2c49dc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c49e0:
    // 0x2c49e0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2c49e4:
    // 0x2c49e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c49e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c49e8:
    // 0x2c49e8: 0x0  nop
    ctx->pc = 0x2c49e8u;
    // NOP
label_2c49ec:
    // 0x2c49ec: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c49ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c49f0:
    // 0x2c49f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c49f4:
    // 0x2c49f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c49f8:
    // 0x2c49f8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2c49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c49fc:
    // 0x2c49fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c49fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4a00:
    // 0x2c4a00: 0x0  nop
    ctx->pc = 0x2c4a00u;
    // NOP
label_2c4a04:
    // 0x2c4a04: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_2c4a08:
    if (ctx->pc == 0x2C4A08u) {
        ctx->pc = 0x2C4A0Cu;
        goto label_2c4a0c;
    }
    ctx->pc = 0x2C4A04u;
    {
        const bool branch_taken_0x2c4a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4a04) {
            ctx->pc = 0x2C4A4Cu;
            goto label_2c4a4c;
        }
    }
    ctx->pc = 0x2C4A0Cu;
label_2c4a0c:
    // 0x2c4a0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4a10:
    // 0x2c4a10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4a14:
    // 0x2c4a14: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2c4a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4a18:
    // 0x2c4a18: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2c4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2c4a1c:
    // 0x2c4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4a20:
    // 0x2c4a20: 0x0  nop
    ctx->pc = 0x2c4a20u;
    // NOP
label_2c4a24:
    // 0x2c4a24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c4a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c4a28:
    // 0x2c4a28: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4a2c:
    // 0x2c4a2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4a30:
    // 0x2c4a30: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c4a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c4a34:
    // 0x2c4a34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4a38:
    // 0x2c4a38: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4a3c:
    // 0x2c4a3c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2c4a40:
    // 0x2c4a40: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2c4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2c4a44:
    // 0x2c4a44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c4a48:
    // 0x2c4a48: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2c4a4c:
    // 0x2c4a4c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4a50:
    // 0x2c4a50: 0xc0b379c  jal         func_2CDE70
label_2c4a54:
    if (ctx->pc == 0x2C4A54u) {
        ctx->pc = 0x2C4A58u;
        goto label_2c4a58;
    }
    ctx->pc = 0x2C4A50u;
    SET_GPR_U32(ctx, 31, 0x2C4A58u);
    ctx->pc = 0x2CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE70u, 0x2C4A50u, 0x2C4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A58u;
label_2c4a58:
    // 0x2c4a58: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4a5c:
    // 0x2c4a5c: 0xc0b37f0  jal         func_2CDFC0
label_2c4a60:
    if (ctx->pc == 0x2C4A60u) {
        ctx->pc = 0x2C4A64u;
        goto label_2c4a64;
    }
    ctx->pc = 0x2C4A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A64u);
    ctx->pc = 0x2CDFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDFC0u, 0x2C4A5Cu, 0x2C4A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A64u;
label_2c4a64:
    // 0x2c4a64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4a68:
    // 0x2c4a68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c4a6c:
    // 0x2c4a6c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x2c4a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c4a70:
    // 0x2c4a70: 0xc047fe2  jal         func_11FF88
label_2c4a74:
    if (ctx->pc == 0x2C4A74u) {
        ctx->pc = 0x2C4A78u;
        goto label_2c4a78;
    }
    ctx->pc = 0x2C4A70u;
    SET_GPR_U32(ctx, 31, 0x2C4A78u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C4A70u, 0x2C4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A78u;
label_2c4a78:
    // 0x2c4a78: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2c4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2c4a7c:
    // 0x2c4a7c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c4a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2c4a80:
    // 0x2c4a80: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2c4a84:
    // 0x2c4a84: 0x34630307  ori         $v1, $v1, 0x307
    ctx->pc = 0x2c4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)775);
label_2c4a88:
    // 0x2c4a88: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c4a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2c4a8c:
    // 0x2c4a8c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c4a90:
    // 0x2c4a90: 0x246518d0  addiu       $a1, $v1, 0x18D0
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6352));
label_2c4a94:
    // 0x2c4a94: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2c4a94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c4a98:
    // 0x2c4a98: 0xc059b14  jal         func_166C50
label_2c4a9c:
    if (ctx->pc == 0x2C4A9Cu) {
        ctx->pc = 0x2C4AA0u;
        goto label_2c4aa0;
    }
    ctx->pc = 0x2C4A98u;
    SET_GPR_U32(ctx, 31, 0x2C4AA0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C4A98u, 0x2C4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AA0u;
label_2c4aa0:
    // 0x2c4aa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4aa4:
    // 0x2c4aa4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2c4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4aa8:
    // 0x2c4aa8: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x2c4aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2c4aac:
    // 0x2c4aac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2c4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2c4ab0:
    // 0x2c4ab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4ab4:
    // 0x2c4ab4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4ab8:
    // 0x2c4ab8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c4abc:
    // 0x2c4abc: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2c4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2c4ac0:
    // 0x2c4ac0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4ac4:
    // 0x2c4ac4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2c4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4ac8:
    // 0x2c4ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4acc:
    // 0x2c4acc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c4accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4ad0:
    // 0x2c4ad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c4ad4:
    // 0x2c4ad4: 0x8c520234  lw          $s2, 0x234($v0)
    ctx->pc = 0x2c4ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_2c4ad8:
    // 0x2c4ad8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4adc:
    // 0x2c4adc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2c4adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4ae0:
    // 0x2c4ae0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2c4ae4:
    // 0x2c4ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c4ae8:
    // 0x2c4ae8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4aec:
    // 0x2c4aec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4af0:
    // 0x2c4af0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c4af4:
    // 0x2c4af4: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x2c4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2c4af8:
    // 0x2c4af8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4af8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c4afc:
    // 0x2c4afc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x2c4afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_2c4b00:
    // 0x2c4b00: 0xc06b06c  jal         func_1AC1B0
label_2c4b04:
    if (ctx->pc == 0x2C4B04u) {
        ctx->pc = 0x2C4B08u;
        goto label_2c4b08;
    }
    ctx->pc = 0x2C4B00u;
    SET_GPR_U32(ctx, 31, 0x2C4B08u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2C4B00u, 0x2C4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B08u;
label_2c4b08:
    // 0x2c4b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4b0c:
    // 0x2c4b0c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2c4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4b10:
    // 0x2c4b10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4b14:
    // 0x2c4b14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4b18:
    // 0x2c4b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c4b1c:
    // 0x2c4b1c: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x2c4b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_2c4b20:
    // 0x2c4b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4b24:
    // 0x2c4b24: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2c4b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4b28:
    // 0x2c4b28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2c4b2c:
    // 0x2c4b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c4b30:
    // 0x2c4b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4b34:
    // 0x2c4b34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4b38:
    // 0x2c4b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c4b3c:
    // 0x2c4b3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c4b40:
    // 0x2c4b40: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x2c4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2c4b44:
    // 0x2c4b44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c4b48:
    // 0x2c4b48: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2c4b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2c4b4c:
    // 0x2c4b4c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2c4b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c4b50:
    // 0x2c4b50: 0xc06b07c  jal         func_1AC1F0
label_2c4b54:
    if (ctx->pc == 0x2C4B54u) {
        ctx->pc = 0x2C4B58u;
        goto label_2c4b58;
    }
    ctx->pc = 0x2C4B50u;
    SET_GPR_U32(ctx, 31, 0x2C4B58u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2C4B50u, 0x2C4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B58u;
label_2c4b58:
    // 0x2c4b58: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2c4b5c:
    // 0x2c4b5c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2c4b5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2c4b60:
    // 0x2c4b60: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2c4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c4b64:
    // 0x2c4b64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2c4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2c4b68:
    // 0x2c4b68: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x2c4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2c4b6c:
    // 0x2c4b6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c4b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c4b70:
    // 0x2c4b70: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2c4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2c4b74:
    // 0x2c4b74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2c4b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2c4b78:
    // 0x2c4b78: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2c4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4b7c:
    // 0x2c4b7c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2c4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_2c4b80:
    // 0x2c4b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4b84:
    // 0x2c4b84: 0x0  nop
    ctx->pc = 0x2c4b84u;
    // NOP
label_2c4b88:
    // 0x2c4b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c4b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2c4b8c:
    // 0x2c4b8c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2c4b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2c4b90:
    // 0x2c4b90: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4b94:
    // 0x2c4b94: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_2c4b98:
    // 0x2c4b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4b9c:
    // 0x2c4b9c: 0x0  nop
    ctx->pc = 0x2c4b9cu;
    // NOP
label_2c4ba0:
    // 0x2c4ba0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c4ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c4ba4:
    // 0x2c4ba4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2c4ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2c4ba8:
    // 0x2c4ba8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4bac:
    // 0x2c4bac: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x2c4bacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_2c4bb0:
    // 0x2c4bb0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2c4bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4bb4:
    // 0x2c4bb4: 0x8cc30244  lw          $v1, 0x244($a2)
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 580)));
label_2c4bb8:
    // 0x2c4bb8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4bbc:
    // 0x2c4bbc: 0x8c420248  lw          $v0, 0x248($v0)
    ctx->pc = 0x2c4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
label_2c4bc0:
    // 0x2c4bc0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2c4bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2c4bc4:
    // 0x2c4bc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c4bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c4bc8:
    // 0x2c4bc8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c4bcc:
    // 0x2c4bcc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2c4bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2c4bd0:
    // 0x2c4bd0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2c4bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c4bd4:
    // 0x2c4bd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4bd8:
    // 0x2c4bd8: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x2c4bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4bdc:
    // 0x2c4bdc: 0xc074efc  jal         func_1D3BF0
label_2c4be0:
    if (ctx->pc == 0x2C4BE0u) {
        ctx->pc = 0x2C4BE4u;
        goto label_2c4be4;
    }
    ctx->pc = 0x2C4BDCu;
    SET_GPR_U32(ctx, 31, 0x2C4BE4u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x2C4BDCu, 0x2C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BE4u;
label_2c4be4:
    // 0x2c4be4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2c4be8:
    // 0x2c4be8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2c4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2c4bec:
    // 0x2c4bec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2c4bf0:
    // 0x2c4bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c4bf4:
    // 0x2c4bf4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c4bf8:
    // 0x2c4bf8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2c4bfc:
    // 0x2c4bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c4c00:
    // 0x2c4c00: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2c4c04:
    // 0x2c4c04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c4c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c4c08:
    // 0x2c4c08: 0xc06b0d4  jal         func_1AC350
label_2c4c0c:
    if (ctx->pc == 0x2C4C0Cu) {
        ctx->pc = 0x2C4C10u;
        goto label_2c4c10;
    }
    ctx->pc = 0x2C4C08u;
    SET_GPR_U32(ctx, 31, 0x2C4C10u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2C4C08u, 0x2C4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C10u;
label_2c4c10:
    // 0x2c4c10: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2c4c10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c4c14:
    // 0x2c4c14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c4c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4c18:
    // 0x2c4c18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c4c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4c1c:
    // 0x2c4c1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c4c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4c20:
    // 0x2c4c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c4c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4c24:
    // 0x2c4c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c4c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4c28:
    // 0x2c4c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c4c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4c2c:
    // 0x2c4c2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c4c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c4c30:
    // 0x2c4c30: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2c4c34:
    // 0x2c4c34: 0x3e00008  jr          $ra
label_2c4c38:
    if (ctx->pc == 0x2C4C38u) {
        ctx->pc = 0x2C4C3Cu;
        goto label_fallthrough_0x2c4c34;
    }
    ctx->pc = 0x2C4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4c34:
    ctx->pc = 0x2C4C3Cu;
}
