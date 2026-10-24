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

// Function: Trans_index_data_one_parts_obj
// Address: 0x1e4500 - 0x1e47f8
void Trans_index_data_one_parts_obj_0x1e4500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans_index_data_one_parts_obj_0x1e4500");
#endif

    switch (ctx->pc) {
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e4508u: goto label_1e4508;
        case 0x1e450cu: goto label_1e450c;
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        case 0x1e453cu: goto label_1e453c;
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4544u: goto label_1e4544;
        case 0x1e4548u: goto label_1e4548;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e4550u: goto label_1e4550;
        case 0x1e4554u: goto label_1e4554;
        case 0x1e4558u: goto label_1e4558;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e4574u: goto label_1e4574;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4580u: goto label_1e4580;
        case 0x1e4584u: goto label_1e4584;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4590u: goto label_1e4590;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e4598u: goto label_1e4598;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45a4u: goto label_1e45a4;
        case 0x1e45a8u: goto label_1e45a8;
        case 0x1e45acu: goto label_1e45ac;
        case 0x1e45b0u: goto label_1e45b0;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45b8u: goto label_1e45b8;
        case 0x1e45bcu: goto label_1e45bc;
        case 0x1e45c0u: goto label_1e45c0;
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e45ccu: goto label_1e45cc;
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45d4u: goto label_1e45d4;
        case 0x1e45d8u: goto label_1e45d8;
        case 0x1e45dcu: goto label_1e45dc;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45e8u: goto label_1e45e8;
        case 0x1e45ecu: goto label_1e45ec;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45f4u: goto label_1e45f4;
        case 0x1e45f8u: goto label_1e45f8;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e4600u: goto label_1e4600;
        case 0x1e4604u: goto label_1e4604;
        case 0x1e4608u: goto label_1e4608;
        case 0x1e460cu: goto label_1e460c;
        case 0x1e4610u: goto label_1e4610;
        case 0x1e4614u: goto label_1e4614;
        case 0x1e4618u: goto label_1e4618;
        case 0x1e461cu: goto label_1e461c;
        case 0x1e4620u: goto label_1e4620;
        case 0x1e4624u: goto label_1e4624;
        case 0x1e4628u: goto label_1e4628;
        case 0x1e462cu: goto label_1e462c;
        case 0x1e4630u: goto label_1e4630;
        case 0x1e4634u: goto label_1e4634;
        case 0x1e4638u: goto label_1e4638;
        case 0x1e463cu: goto label_1e463c;
        case 0x1e4640u: goto label_1e4640;
        case 0x1e4644u: goto label_1e4644;
        case 0x1e4648u: goto label_1e4648;
        case 0x1e464cu: goto label_1e464c;
        case 0x1e4650u: goto label_1e4650;
        case 0x1e4654u: goto label_1e4654;
        case 0x1e4658u: goto label_1e4658;
        case 0x1e465cu: goto label_1e465c;
        case 0x1e4660u: goto label_1e4660;
        case 0x1e4664u: goto label_1e4664;
        case 0x1e4668u: goto label_1e4668;
        case 0x1e466cu: goto label_1e466c;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e4674u: goto label_1e4674;
        case 0x1e4678u: goto label_1e4678;
        case 0x1e467cu: goto label_1e467c;
        case 0x1e4680u: goto label_1e4680;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e468cu: goto label_1e468c;
        case 0x1e4690u: goto label_1e4690;
        case 0x1e4694u: goto label_1e4694;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a0u: goto label_1e46a0;
        case 0x1e46a4u: goto label_1e46a4;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46acu: goto label_1e46ac;
        case 0x1e46b0u: goto label_1e46b0;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46b8u: goto label_1e46b8;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46e8u: goto label_1e46e8;
        case 0x1e46ecu: goto label_1e46ec;
        case 0x1e46f0u: goto label_1e46f0;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e46f8u: goto label_1e46f8;
        case 0x1e46fcu: goto label_1e46fc;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4704u: goto label_1e4704;
        case 0x1e4708u: goto label_1e4708;
        case 0x1e470cu: goto label_1e470c;
        case 0x1e4710u: goto label_1e4710;
        case 0x1e4714u: goto label_1e4714;
        case 0x1e4718u: goto label_1e4718;
        case 0x1e471cu: goto label_1e471c;
        case 0x1e4720u: goto label_1e4720;
        case 0x1e4724u: goto label_1e4724;
        case 0x1e4728u: goto label_1e4728;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        case 0x1e47b8u: goto label_1e47b8;
        case 0x1e47bcu: goto label_1e47bc;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e47c4u: goto label_1e47c4;
        case 0x1e47c8u: goto label_1e47c8;
        case 0x1e47ccu: goto label_1e47cc;
        case 0x1e47d0u: goto label_1e47d0;
        case 0x1e47d4u: goto label_1e47d4;
        case 0x1e47d8u: goto label_1e47d8;
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47e0u: goto label_1e47e0;
        case 0x1e47e4u: goto label_1e47e4;
        case 0x1e47e8u: goto label_1e47e8;
        case 0x1e47ecu: goto label_1e47ec;
        case 0x1e47f0u: goto label_1e47f0;
        case 0x1e47f4u: goto label_1e47f4;
        default: break;
    }

    ctx->pc = 0x1e4500u;

label_1e4500:
    // 0x1e4500: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e4500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e4504:
    // 0x1e4504: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1e4504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_1e4508:
    // 0x1e4508: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e4508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e450c:
    // 0x1e450c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4510:
    // 0x1e4510: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4514:
    // 0x1e4514: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4518:
    // 0x1e4518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e451c:
    // 0x1e451c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4520:
    // 0x1e4520: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1e4520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1e4524:
    // 0x1e4524: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1e4524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1e4528:
    // 0x1e4528: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1e4528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e452c:
    // 0x1e452c: 0x8c7402d0  lw          $s4, 0x2D0($v1)
    ctx->pc = 0x1e452cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_1e4530:
    // 0x1e4530: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1e4530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e4534:
    // 0x1e4534: 0x8c710034  lw          $s1, 0x34($v1)
    ctx->pc = 0x1e4534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e4538:
    // 0x1e4538: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1e4538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e453c:
    // 0x1e453c: 0x8c750020  lw          $s5, 0x20($v1)
    ctx->pc = 0x1e453cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1e4540:
    // 0x1e4540: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4544:
    // 0x1e4544: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1e4544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
label_1e4548:
    // 0x1e4548: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e4548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e454c:
    // 0x1e454c: 0x39f02  srl         $s3, $v1, 28
    ctx->pc = 0x1e454cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
label_1e4550:
    // 0x1e4550: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4554:
    // 0x1e4554: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1e4554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1e4558:
    // 0x1e4558: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1e455c:
    if (ctx->pc == 0x1E455Cu) {
        ctx->pc = 0x1E4560u;
        goto label_1e4560;
    }
    ctx->pc = 0x1E4558u;
    {
        const bool branch_taken_0x1e4558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4558) {
            ctx->pc = 0x1E45DCu;
            goto label_1e45dc;
        }
    }
    ctx->pc = 0x1E4560u;
label_1e4560:
    // 0x1e4560: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e4564:
    // 0x1e4564: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e4564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e4568:
    // 0x1e4568: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1e4568u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e456c:
    // 0x1e456c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1e456cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4570:
    // 0x1e4570: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e4574:
    // 0x1e4574: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e4574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4578:
    // 0x1e4578: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e457c:
    // 0x1e457c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4580:
    // 0x1e4580: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e4584:
    // 0x1e4584: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1e4584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_1e4588:
    // 0x1e4588: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e4588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e458c:
    // 0x1e458c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e458cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e4590:
    // 0x1e4590: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4594:
    // 0x1e4594: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e4594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e4598:
    // 0x1e4598: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e459c:
    // 0x1e459c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e45a0:
    // 0x1e45a0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1e45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1e45a4:
    // 0x1e45a4: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x1e45a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1e45a8:
    // 0x1e45a8: 0xc078130  jal         func_1E04C0
label_1e45ac:
    if (ctx->pc == 0x1E45ACu) {
        ctx->pc = 0x1E45B0u;
        goto label_1e45b0;
    }
    ctx->pc = 0x1E45A8u;
    SET_GPR_U32(ctx, 31, 0x1E45B0u);
    ctx->pc = 0x1E04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E04C0u, 0x1E45A8u, 0x1E45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45B0u;
label_1e45b0:
    // 0x1e45b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e45b4:
    // 0x1e45b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e45b8:
    // 0x1e45b8: 0x1640ffed  bnez        $s2, . + 4 + (-0x13 << 2)
label_1e45bc:
    if (ctx->pc == 0x1E45BCu) {
        ctx->pc = 0x1E45C0u;
        goto label_1e45c0;
    }
    ctx->pc = 0x1E45B8u;
    {
        const bool branch_taken_0x1e45b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45b8) {
            ctx->pc = 0x1E4570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4570;
        }
    }
    ctx->pc = 0x1E45C0u;
label_1e45c0:
    // 0x1e45c0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e45c4:
    // 0x1e45c4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1e45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1e45c8:
    // 0x1e45c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e45cc:
    // 0x1e45cc: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1e45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_1e45d0:
    // 0x1e45d0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e45d4:
    // 0x1e45d4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1e45d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1e45d8:
    // 0x1e45d8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1e45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_1e45dc:
    // 0x1e45dc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e45e0:
    // 0x1e45e0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1e45e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e45e4:
    // 0x1e45e4: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
label_1e45e8:
    if (ctx->pc == 0x1E45E8u) {
        ctx->pc = 0x1E45ECu;
        goto label_1e45ec;
    }
    ctx->pc = 0x1E45E4u;
    {
        const bool branch_taken_0x1e45e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e45e4) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E45ECu;
label_1e45ec:
    // 0x1e45ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e45f0:
    // 0x1e45f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e45f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e45f4:
    // 0x1e45f4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1e45f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e45f8:
    // 0x1e45f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1e45f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e45fc:
    // 0x1e45fc: 0x2e610008  sltiu       $at, $s3, 0x8
    ctx->pc = 0x1e45fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1e4600:
    // 0x1e4600: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
label_1e4604:
    if (ctx->pc == 0x1E4604u) {
        ctx->pc = 0x1E4608u;
        goto label_1e4608;
    }
    ctx->pc = 0x1E4600u;
    {
        const bool branch_taken_0x1e4600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4600) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4608u;
label_1e4608:
    // 0x1e4608: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1e4608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1e460c:
    // 0x1e460c: 0x24430c60  addiu       $v1, $v0, 0xC60
    ctx->pc = 0x1e460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
label_1e4610:
    // 0x1e4610: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e4610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1e4614:
    // 0x1e4614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4618:
    // 0x1e4618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e461c:
    // 0x1e461c: 0x400008  jr          $v0
label_1e4620:
    if (ctx->pc == 0x1E4620u) {
        ctx->pc = 0x1E4624u;
        goto label_1e4624;
    }
    ctx->pc = 0x1E461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E461Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E4624u;
label_1e4624:
    // 0x1e4624: 0x0  nop
    ctx->pc = 0x1e4624u;
    // NOP
label_1e4628:
    // 0x1e4628: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e462c:
    // 0x1e462c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4630:
    // 0x1e4630: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4634:
    // 0x1e4634: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4638:
    // 0x1e4638: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e463c:
    // 0x1e463c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4640:
    // 0x1e4640: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4640u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4644:
    // 0x1e4644: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e4648:
    // 0x1e4648: 0xc078350  jal         func_1E0D40
label_1e464c:
    if (ctx->pc == 0x1E464Cu) {
        ctx->pc = 0x1E4650u;
        goto label_1e4650;
    }
    ctx->pc = 0x1E4648u;
    SET_GPR_U32(ctx, 31, 0x1E4650u);
    ctx->pc = 0x1E0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D40u, 0x1E4648u, 0x1E4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4650u;
label_1e4650:
    // 0x1e4650: 0x10000053  b           . + 4 + (0x53 << 2)
label_1e4654:
    if (ctx->pc == 0x1E4654u) {
        ctx->pc = 0x1E4658u;
        goto label_1e4658;
    }
    ctx->pc = 0x1E4650u;
    {
        const bool branch_taken_0x1e4650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4650) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4658u;
label_1e4658:
    // 0x1e4658: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e465c:
    // 0x1e465c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4660:
    // 0x1e4660: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4664:
    // 0x1e4664: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4668:
    // 0x1e4668: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e466c:
    // 0x1e466c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4670:
    // 0x1e4670: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4670u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4674:
    // 0x1e4674: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e4678:
    // 0x1e4678: 0xc0784a0  jal         func_1E1280
label_1e467c:
    if (ctx->pc == 0x1E467Cu) {
        ctx->pc = 0x1E4680u;
        goto label_1e4680;
    }
    ctx->pc = 0x1E4678u;
    SET_GPR_U32(ctx, 31, 0x1E4680u);
    ctx->pc = 0x1E1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1280u, 0x1E4678u, 0x1E4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4680u;
label_1e4680:
    // 0x1e4680: 0x10000047  b           . + 4 + (0x47 << 2)
label_1e4684:
    if (ctx->pc == 0x1E4684u) {
        ctx->pc = 0x1E4688u;
        goto label_1e4688;
    }
    ctx->pc = 0x1E4680u;
    {
        const bool branch_taken_0x1e4680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4680) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4688u;
label_1e4688:
    // 0x1e4688: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e468c:
    // 0x1e468c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4690:
    // 0x1e4690: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4694:
    // 0x1e4694: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4698:
    // 0x1e4698: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e469c:
    // 0x1e469c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e46a0:
    // 0x1e46a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e46a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e46a4:
    // 0x1e46a4: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e46a8:
    // 0x1e46a8: 0xc07869c  jal         func_1E1A70
label_1e46ac:
    if (ctx->pc == 0x1E46ACu) {
        ctx->pc = 0x1E46B0u;
        goto label_1e46b0;
    }
    ctx->pc = 0x1E46A8u;
    SET_GPR_U32(ctx, 31, 0x1E46B0u);
    ctx->pc = 0x1E1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A70u, 0x1E46A8u, 0x1E46B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46B0u;
label_1e46b0:
    // 0x1e46b0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1e46b4:
    if (ctx->pc == 0x1E46B4u) {
        ctx->pc = 0x1E46B8u;
        goto label_1e46b8;
    }
    ctx->pc = 0x1E46B0u;
    {
        const bool branch_taken_0x1e46b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e46b0) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E46B8u;
label_1e46b8:
    // 0x1e46b8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e46bc:
    // 0x1e46bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e46c0:
    // 0x1e46c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e46c4:
    // 0x1e46c4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e46c8:
    // 0x1e46c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e46cc:
    // 0x1e46cc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e46d0:
    // 0x1e46d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e46d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e46d4:
    // 0x1e46d4: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e46d8:
    // 0x1e46d8: 0xc078898  jal         func_1E2260
label_1e46dc:
    if (ctx->pc == 0x1E46DCu) {
        ctx->pc = 0x1E46E0u;
        goto label_1e46e0;
    }
    ctx->pc = 0x1E46D8u;
    SET_GPR_U32(ctx, 31, 0x1E46E0u);
    ctx->pc = 0x1E2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2260u, 0x1E46D8u, 0x1E46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46E0u;
label_1e46e0:
    // 0x1e46e0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e46e4:
    if (ctx->pc == 0x1E46E4u) {
        ctx->pc = 0x1E46E8u;
        goto label_1e46e8;
    }
    ctx->pc = 0x1E46E0u;
    {
        const bool branch_taken_0x1e46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e46e0) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E46E8u;
label_1e46e8:
    // 0x1e46e8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e46ec:
    // 0x1e46ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e46f0:
    // 0x1e46f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e46f4:
    // 0x1e46f4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e46f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e46f8:
    // 0x1e46f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e46fc:
    // 0x1e46fc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4700:
    // 0x1e4700: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4704:
    // 0x1e4704: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e4708:
    // 0x1e4708: 0xc078a8c  jal         func_1E2A30
label_1e470c:
    if (ctx->pc == 0x1E470Cu) {
        ctx->pc = 0x1E4710u;
        goto label_1e4710;
    }
    ctx->pc = 0x1E4708u;
    SET_GPR_U32(ctx, 31, 0x1E4710u);
    ctx->pc = 0x1E2A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2A30u, 0x1E4708u, 0x1E4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4710u;
label_1e4710:
    // 0x1e4710: 0x10000023  b           . + 4 + (0x23 << 2)
label_1e4714:
    if (ctx->pc == 0x1E4714u) {
        ctx->pc = 0x1E4718u;
        goto label_1e4718;
    }
    ctx->pc = 0x1E4710u;
    {
        const bool branch_taken_0x1e4710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4710) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4718u;
label_1e4718:
    // 0x1e4718: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e471c:
    // 0x1e471c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4720:
    // 0x1e4720: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4724:
    // 0x1e4724: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4728:
    // 0x1e4728: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e472c:
    // 0x1e472c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4730:
    // 0x1e4730: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4730u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4734:
    // 0x1e4734: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e4738:
    // 0x1e4738: 0xc078cbc  jal         func_1E32F0
label_1e473c:
    if (ctx->pc == 0x1E473Cu) {
        ctx->pc = 0x1E4740u;
        goto label_1e4740;
    }
    ctx->pc = 0x1E4738u;
    SET_GPR_U32(ctx, 31, 0x1E4740u);
    ctx->pc = 0x1E32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E32F0u, 0x1E4738u, 0x1E4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4740u;
label_1e4740:
    // 0x1e4740: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e4744:
    if (ctx->pc == 0x1E4744u) {
        ctx->pc = 0x1E4748u;
        goto label_1e4748;
    }
    ctx->pc = 0x1E4740u;
    {
        const bool branch_taken_0x1e4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4740) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4748u;
label_1e4748:
    // 0x1e4748: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e474c:
    // 0x1e474c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4750:
    // 0x1e4750: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4754:
    // 0x1e4754: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4758:
    // 0x1e4758: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e475c:
    // 0x1e475c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4760:
    // 0x1e4760: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4760u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4764:
    // 0x1e4764: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e4768:
    // 0x1e4768: 0xc078e1c  jal         func_1E3870
label_1e476c:
    if (ctx->pc == 0x1E476Cu) {
        ctx->pc = 0x1E4770u;
        goto label_1e4770;
    }
    ctx->pc = 0x1E4768u;
    SET_GPR_U32(ctx, 31, 0x1E4770u);
    ctx->pc = 0x1E3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3870u, 0x1E4768u, 0x1E4770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4770u;
label_1e4770:
    // 0x1e4770: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4774:
    if (ctx->pc == 0x1E4774u) {
        ctx->pc = 0x1E4778u;
        goto label_1e4778;
    }
    ctx->pc = 0x1E4770u;
    {
        const bool branch_taken_0x1e4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4770) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4778u;
label_1e4778:
    // 0x1e4778: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e477c:
    // 0x1e477c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4780:
    // 0x1e4780: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4784:
    // 0x1e4784: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1e4784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4788:
    // 0x1e4788: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e478c:
    // 0x1e478c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4790:
    // 0x1e4790: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e4790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e4794:
    // 0x1e4794: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x1e4794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e4798:
    // 0x1e4798: 0xc078fec  jal         func_1E3FB0
label_1e479c:
    if (ctx->pc == 0x1E479Cu) {
        ctx->pc = 0x1E47A0u;
        goto label_1e47a0;
    }
    ctx->pc = 0x1E4798u;
    SET_GPR_U32(ctx, 31, 0x1E47A0u);
    ctx->pc = 0x1E3FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3FB0u, 0x1E4798u, 0x1E47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E47A0u;
label_1e47a0:
    // 0x1e47a0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e47a4:
    // 0x1e47a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e47a8:
    // 0x1e47a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e47ac:
    // 0x1e47ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e47b0:
    // 0x1e47b0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1e47b4:
    // 0x1e47b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e47b8:
    // 0x1e47b8: 0xc06aff4  jal         func_1ABFD0
label_1e47bc:
    if (ctx->pc == 0x1E47BCu) {
        ctx->pc = 0x1E47C0u;
        goto label_1e47c0;
    }
    ctx->pc = 0x1E47B8u;
    SET_GPR_U32(ctx, 31, 0x1E47C0u);
    ctx->pc = 0x1ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABFD0u, 0x1E47B8u, 0x1E47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E47C0u;
label_1e47c0:
    // 0x1e47c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e47c4:
    // 0x1e47c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e47c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e47c8:
    // 0x1e47c8: 0x1640ff8c  bnez        $s2, . + 4 + (-0x74 << 2)
label_1e47cc:
    if (ctx->pc == 0x1E47CCu) {
        ctx->pc = 0x1E47D0u;
        goto label_1e47d0;
    }
    ctx->pc = 0x1E47C8u;
    {
        const bool branch_taken_0x1e47c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e47c8) {
            ctx->pc = 0x1E45FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45fc;
        }
    }
    ctx->pc = 0x1E47D0u;
label_1e47d0:
    // 0x1e47d0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1e47d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e47d4:
    // 0x1e47d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e47d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e47d8:
    // 0x1e47d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e47d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e47dc:
    // 0x1e47dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e47dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e47e0:
    // 0x1e47e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e47e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e47e4:
    // 0x1e47e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e47e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e47e8:
    // 0x1e47e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e47e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e47ec:
    // 0x1e47ec: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e47f0:
    // 0x1e47f0: 0x3e00008  jr          $ra
label_1e47f4:
    if (ctx->pc == 0x1E47F4u) {
        ctx->pc = 0x1E47F8u;
        goto label_fallthrough_0x1e47f0;
    }
    ctx->pc = 0x1E47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e47f0:
    ctx->pc = 0x1E47F8u;
}
