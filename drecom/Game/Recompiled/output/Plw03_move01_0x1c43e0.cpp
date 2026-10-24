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

// Function: Plw03_move01
// Address: 0x1c43e0 - 0x1c47c4
void Plw03_move01_0x1c43e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_move01_0x1c43e0");
#endif

    switch (ctx->pc) {
        case 0x1c43e0u: goto label_1c43e0;
        case 0x1c43e4u: goto label_1c43e4;
        case 0x1c43e8u: goto label_1c43e8;
        case 0x1c43ecu: goto label_1c43ec;
        case 0x1c43f0u: goto label_1c43f0;
        case 0x1c43f4u: goto label_1c43f4;
        case 0x1c43f8u: goto label_1c43f8;
        case 0x1c43fcu: goto label_1c43fc;
        case 0x1c4400u: goto label_1c4400;
        case 0x1c4404u: goto label_1c4404;
        case 0x1c4408u: goto label_1c4408;
        case 0x1c440cu: goto label_1c440c;
        case 0x1c4410u: goto label_1c4410;
        case 0x1c4414u: goto label_1c4414;
        case 0x1c4418u: goto label_1c4418;
        case 0x1c441cu: goto label_1c441c;
        case 0x1c4420u: goto label_1c4420;
        case 0x1c4424u: goto label_1c4424;
        case 0x1c4428u: goto label_1c4428;
        case 0x1c442cu: goto label_1c442c;
        case 0x1c4430u: goto label_1c4430;
        case 0x1c4434u: goto label_1c4434;
        case 0x1c4438u: goto label_1c4438;
        case 0x1c443cu: goto label_1c443c;
        case 0x1c4440u: goto label_1c4440;
        case 0x1c4444u: goto label_1c4444;
        case 0x1c4448u: goto label_1c4448;
        case 0x1c444cu: goto label_1c444c;
        case 0x1c4450u: goto label_1c4450;
        case 0x1c4454u: goto label_1c4454;
        case 0x1c4458u: goto label_1c4458;
        case 0x1c445cu: goto label_1c445c;
        case 0x1c4460u: goto label_1c4460;
        case 0x1c4464u: goto label_1c4464;
        case 0x1c4468u: goto label_1c4468;
        case 0x1c446cu: goto label_1c446c;
        case 0x1c4470u: goto label_1c4470;
        case 0x1c4474u: goto label_1c4474;
        case 0x1c4478u: goto label_1c4478;
        case 0x1c447cu: goto label_1c447c;
        case 0x1c4480u: goto label_1c4480;
        case 0x1c4484u: goto label_1c4484;
        case 0x1c4488u: goto label_1c4488;
        case 0x1c448cu: goto label_1c448c;
        case 0x1c4490u: goto label_1c4490;
        case 0x1c4494u: goto label_1c4494;
        case 0x1c4498u: goto label_1c4498;
        case 0x1c449cu: goto label_1c449c;
        case 0x1c44a0u: goto label_1c44a0;
        case 0x1c44a4u: goto label_1c44a4;
        case 0x1c44a8u: goto label_1c44a8;
        case 0x1c44acu: goto label_1c44ac;
        case 0x1c44b0u: goto label_1c44b0;
        case 0x1c44b4u: goto label_1c44b4;
        case 0x1c44b8u: goto label_1c44b8;
        case 0x1c44bcu: goto label_1c44bc;
        case 0x1c44c0u: goto label_1c44c0;
        case 0x1c44c4u: goto label_1c44c4;
        case 0x1c44c8u: goto label_1c44c8;
        case 0x1c44ccu: goto label_1c44cc;
        case 0x1c44d0u: goto label_1c44d0;
        case 0x1c44d4u: goto label_1c44d4;
        case 0x1c44d8u: goto label_1c44d8;
        case 0x1c44dcu: goto label_1c44dc;
        case 0x1c44e0u: goto label_1c44e0;
        case 0x1c44e4u: goto label_1c44e4;
        case 0x1c44e8u: goto label_1c44e8;
        case 0x1c44ecu: goto label_1c44ec;
        case 0x1c44f0u: goto label_1c44f0;
        case 0x1c44f4u: goto label_1c44f4;
        case 0x1c44f8u: goto label_1c44f8;
        case 0x1c44fcu: goto label_1c44fc;
        case 0x1c4500u: goto label_1c4500;
        case 0x1c4504u: goto label_1c4504;
        case 0x1c4508u: goto label_1c4508;
        case 0x1c450cu: goto label_1c450c;
        case 0x1c4510u: goto label_1c4510;
        case 0x1c4514u: goto label_1c4514;
        case 0x1c4518u: goto label_1c4518;
        case 0x1c451cu: goto label_1c451c;
        case 0x1c4520u: goto label_1c4520;
        case 0x1c4524u: goto label_1c4524;
        case 0x1c4528u: goto label_1c4528;
        case 0x1c452cu: goto label_1c452c;
        case 0x1c4530u: goto label_1c4530;
        case 0x1c4534u: goto label_1c4534;
        case 0x1c4538u: goto label_1c4538;
        case 0x1c453cu: goto label_1c453c;
        case 0x1c4540u: goto label_1c4540;
        case 0x1c4544u: goto label_1c4544;
        case 0x1c4548u: goto label_1c4548;
        case 0x1c454cu: goto label_1c454c;
        case 0x1c4550u: goto label_1c4550;
        case 0x1c4554u: goto label_1c4554;
        case 0x1c4558u: goto label_1c4558;
        case 0x1c455cu: goto label_1c455c;
        case 0x1c4560u: goto label_1c4560;
        case 0x1c4564u: goto label_1c4564;
        case 0x1c4568u: goto label_1c4568;
        case 0x1c456cu: goto label_1c456c;
        case 0x1c4570u: goto label_1c4570;
        case 0x1c4574u: goto label_1c4574;
        case 0x1c4578u: goto label_1c4578;
        case 0x1c457cu: goto label_1c457c;
        case 0x1c4580u: goto label_1c4580;
        case 0x1c4584u: goto label_1c4584;
        case 0x1c4588u: goto label_1c4588;
        case 0x1c458cu: goto label_1c458c;
        case 0x1c4590u: goto label_1c4590;
        case 0x1c4594u: goto label_1c4594;
        case 0x1c4598u: goto label_1c4598;
        case 0x1c459cu: goto label_1c459c;
        case 0x1c45a0u: goto label_1c45a0;
        case 0x1c45a4u: goto label_1c45a4;
        case 0x1c45a8u: goto label_1c45a8;
        case 0x1c45acu: goto label_1c45ac;
        case 0x1c45b0u: goto label_1c45b0;
        case 0x1c45b4u: goto label_1c45b4;
        case 0x1c45b8u: goto label_1c45b8;
        case 0x1c45bcu: goto label_1c45bc;
        case 0x1c45c0u: goto label_1c45c0;
        case 0x1c45c4u: goto label_1c45c4;
        case 0x1c45c8u: goto label_1c45c8;
        case 0x1c45ccu: goto label_1c45cc;
        case 0x1c45d0u: goto label_1c45d0;
        case 0x1c45d4u: goto label_1c45d4;
        case 0x1c45d8u: goto label_1c45d8;
        case 0x1c45dcu: goto label_1c45dc;
        case 0x1c45e0u: goto label_1c45e0;
        case 0x1c45e4u: goto label_1c45e4;
        case 0x1c45e8u: goto label_1c45e8;
        case 0x1c45ecu: goto label_1c45ec;
        case 0x1c45f0u: goto label_1c45f0;
        case 0x1c45f4u: goto label_1c45f4;
        case 0x1c45f8u: goto label_1c45f8;
        case 0x1c45fcu: goto label_1c45fc;
        case 0x1c4600u: goto label_1c4600;
        case 0x1c4604u: goto label_1c4604;
        case 0x1c4608u: goto label_1c4608;
        case 0x1c460cu: goto label_1c460c;
        case 0x1c4610u: goto label_1c4610;
        case 0x1c4614u: goto label_1c4614;
        case 0x1c4618u: goto label_1c4618;
        case 0x1c461cu: goto label_1c461c;
        case 0x1c4620u: goto label_1c4620;
        case 0x1c4624u: goto label_1c4624;
        case 0x1c4628u: goto label_1c4628;
        case 0x1c462cu: goto label_1c462c;
        case 0x1c4630u: goto label_1c4630;
        case 0x1c4634u: goto label_1c4634;
        case 0x1c4638u: goto label_1c4638;
        case 0x1c463cu: goto label_1c463c;
        case 0x1c4640u: goto label_1c4640;
        case 0x1c4644u: goto label_1c4644;
        case 0x1c4648u: goto label_1c4648;
        case 0x1c464cu: goto label_1c464c;
        case 0x1c4650u: goto label_1c4650;
        case 0x1c4654u: goto label_1c4654;
        case 0x1c4658u: goto label_1c4658;
        case 0x1c465cu: goto label_1c465c;
        case 0x1c4660u: goto label_1c4660;
        case 0x1c4664u: goto label_1c4664;
        case 0x1c4668u: goto label_1c4668;
        case 0x1c466cu: goto label_1c466c;
        case 0x1c4670u: goto label_1c4670;
        case 0x1c4674u: goto label_1c4674;
        case 0x1c4678u: goto label_1c4678;
        case 0x1c467cu: goto label_1c467c;
        case 0x1c4680u: goto label_1c4680;
        case 0x1c4684u: goto label_1c4684;
        case 0x1c4688u: goto label_1c4688;
        case 0x1c468cu: goto label_1c468c;
        case 0x1c4690u: goto label_1c4690;
        case 0x1c4694u: goto label_1c4694;
        case 0x1c4698u: goto label_1c4698;
        case 0x1c469cu: goto label_1c469c;
        case 0x1c46a0u: goto label_1c46a0;
        case 0x1c46a4u: goto label_1c46a4;
        case 0x1c46a8u: goto label_1c46a8;
        case 0x1c46acu: goto label_1c46ac;
        case 0x1c46b0u: goto label_1c46b0;
        case 0x1c46b4u: goto label_1c46b4;
        case 0x1c46b8u: goto label_1c46b8;
        case 0x1c46bcu: goto label_1c46bc;
        case 0x1c46c0u: goto label_1c46c0;
        case 0x1c46c4u: goto label_1c46c4;
        case 0x1c46c8u: goto label_1c46c8;
        case 0x1c46ccu: goto label_1c46cc;
        case 0x1c46d0u: goto label_1c46d0;
        case 0x1c46d4u: goto label_1c46d4;
        case 0x1c46d8u: goto label_1c46d8;
        case 0x1c46dcu: goto label_1c46dc;
        case 0x1c46e0u: goto label_1c46e0;
        case 0x1c46e4u: goto label_1c46e4;
        case 0x1c46e8u: goto label_1c46e8;
        case 0x1c46ecu: goto label_1c46ec;
        case 0x1c46f0u: goto label_1c46f0;
        case 0x1c46f4u: goto label_1c46f4;
        case 0x1c46f8u: goto label_1c46f8;
        case 0x1c46fcu: goto label_1c46fc;
        case 0x1c4700u: goto label_1c4700;
        case 0x1c4704u: goto label_1c4704;
        case 0x1c4708u: goto label_1c4708;
        case 0x1c470cu: goto label_1c470c;
        case 0x1c4710u: goto label_1c4710;
        case 0x1c4714u: goto label_1c4714;
        case 0x1c4718u: goto label_1c4718;
        case 0x1c471cu: goto label_1c471c;
        case 0x1c4720u: goto label_1c4720;
        case 0x1c4724u: goto label_1c4724;
        case 0x1c4728u: goto label_1c4728;
        case 0x1c472cu: goto label_1c472c;
        case 0x1c4730u: goto label_1c4730;
        case 0x1c4734u: goto label_1c4734;
        case 0x1c4738u: goto label_1c4738;
        case 0x1c473cu: goto label_1c473c;
        case 0x1c4740u: goto label_1c4740;
        case 0x1c4744u: goto label_1c4744;
        case 0x1c4748u: goto label_1c4748;
        case 0x1c474cu: goto label_1c474c;
        case 0x1c4750u: goto label_1c4750;
        case 0x1c4754u: goto label_1c4754;
        case 0x1c4758u: goto label_1c4758;
        case 0x1c475cu: goto label_1c475c;
        case 0x1c4760u: goto label_1c4760;
        case 0x1c4764u: goto label_1c4764;
        case 0x1c4768u: goto label_1c4768;
        case 0x1c476cu: goto label_1c476c;
        case 0x1c4770u: goto label_1c4770;
        case 0x1c4774u: goto label_1c4774;
        case 0x1c4778u: goto label_1c4778;
        case 0x1c477cu: goto label_1c477c;
        case 0x1c4780u: goto label_1c4780;
        case 0x1c4784u: goto label_1c4784;
        case 0x1c4788u: goto label_1c4788;
        case 0x1c478cu: goto label_1c478c;
        case 0x1c4790u: goto label_1c4790;
        case 0x1c4794u: goto label_1c4794;
        case 0x1c4798u: goto label_1c4798;
        case 0x1c479cu: goto label_1c479c;
        case 0x1c47a0u: goto label_1c47a0;
        case 0x1c47a4u: goto label_1c47a4;
        case 0x1c47a8u: goto label_1c47a8;
        case 0x1c47acu: goto label_1c47ac;
        case 0x1c47b0u: goto label_1c47b0;
        case 0x1c47b4u: goto label_1c47b4;
        case 0x1c47b8u: goto label_1c47b8;
        case 0x1c47bcu: goto label_1c47bc;
        case 0x1c47c0u: goto label_1c47c0;
        default: break;
    }

    ctx->pc = 0x1c43e0u;

label_1c43e0:
    // 0x1c43e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c43e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c43e4:
    // 0x1c43e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1c43e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1c43e8:
    // 0x1c43e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c43ec:
    // 0x1c43ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c43ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c43f0:
    // 0x1c43f0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1c43f4:
    // 0x1c43f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c43f8:
    // 0x1c43f8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1c43f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c43fc:
    // 0x1c43fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4400:
    // 0x1c4400: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c4400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4404:
    // 0x1c4404: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1c4408:
    // 0x1c4408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c440c:
    // 0x1c440c: 0x0  nop
    ctx->pc = 0x1c440cu;
    // NOP
label_1c4410:
    // 0x1c4410: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4414:
    // 0x1c4414: 0x0  nop
    ctx->pc = 0x1c4414u;
    // NOP
label_1c4418:
    // 0x1c4418: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1c441c:
    if (ctx->pc == 0x1C441Cu) {
        ctx->pc = 0x1C4420u;
        goto label_1c4420;
    }
    ctx->pc = 0x1C4418u;
    {
        const bool branch_taken_0x1c4418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4418) {
            ctx->pc = 0x1C4440u;
            goto label_1c4440;
        }
    }
    ctx->pc = 0x1C4420u;
label_1c4420:
    // 0x1c4420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4424:
    // 0x1c4424: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1c4424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_1c4428:
    // 0x1c4428: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c442c:
    if (ctx->pc == 0x1C442Cu) {
        ctx->pc = 0x1C4430u;
        goto label_1c4430;
    }
    ctx->pc = 0x1C4428u;
    {
        const bool branch_taken_0x1c4428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4428) {
            ctx->pc = 0x1C4440u;
            goto label_1c4440;
        }
    }
    ctx->pc = 0x1C4430u;
label_1c4430:
    // 0x1c4430: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4434:
    // 0x1c4434: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1c4434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4438:
    // 0x1c4438: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c443c:
    // 0x1c443c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c4440:
    // 0x1c4440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4444:
    // 0x1c4444: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x1c4444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_1c4448:
    // 0x1c4448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c444c:
    if (ctx->pc == 0x1C444Cu) {
        ctx->pc = 0x1C4450u;
        goto label_1c4450;
    }
    ctx->pc = 0x1C4448u;
    {
        const bool branch_taken_0x1c4448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4448) {
            ctx->pc = 0x1C4460u;
            goto label_1c4460;
        }
    }
    ctx->pc = 0x1C4450u;
label_1c4450:
    // 0x1c4450: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4454:
    // 0x1c4454: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1c4454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_1c4458:
    // 0x1c4458: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c4458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c445c:
    // 0x1c445c: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x1c445cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
label_1c4460:
    // 0x1c4460: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4464:
    // 0x1c4464: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1c4464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_1c4468:
    // 0x1c4468: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_1c446c:
    if (ctx->pc == 0x1C446Cu) {
        ctx->pc = 0x1C4470u;
        goto label_1c4470;
    }
    ctx->pc = 0x1C4468u;
    {
        const bool branch_taken_0x1c4468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4468) {
            ctx->pc = 0x1C45FCu;
            goto label_1c45fc;
        }
    }
    ctx->pc = 0x1C4470u;
label_1c4470:
    // 0x1c4470: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4474:
    // 0x1c4474: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4478:
    // 0x1c4478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c447c:
    // 0x1c447c: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1c447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c4480:
    // 0x1c4480: 0xc46d1568  lwc1        $f13, 0x1568($v1)
    ctx->pc = 0x1c4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c4484:
    // 0x1c4484: 0x9044156c  lbu         $a0, 0x156C($v0)
    ctx->pc = 0x1c4484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c4488:
    // 0x1c4488: 0xc058978  jal         func_1625E0
label_1c448c:
    if (ctx->pc == 0x1C448Cu) {
        ctx->pc = 0x1C4490u;
        goto label_1c4490;
    }
    ctx->pc = 0x1C4488u;
    SET_GPR_U32(ctx, 31, 0x1C4490u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x1C4488u, 0x1C4490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4490u;
label_1c4490:
    // 0x1c4490: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c4490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c4494:
    // 0x1c4494: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c4494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c4498:
    // 0x1c4498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c449c:
    // 0x1c449c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1c44a0:
    if (ctx->pc == 0x1C44A0u) {
        ctx->pc = 0x1C44A4u;
        goto label_1c44a4;
    }
    ctx->pc = 0x1C449Cu;
    {
        const bool branch_taken_0x1c449c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c449c) {
            ctx->pc = 0x1C44ACu;
            goto label_1c44ac;
        }
    }
    ctx->pc = 0x1C44A4u;
label_1c44a4:
    // 0x1c44a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c44a8:
    // 0x1c44a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c44a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c44ac:
    // 0x1c44ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c44b0:
    // 0x1c44b0: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c44b4:
    // 0x1c44b4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1c44b8:
    // 0x1c44b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c44b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c44bc:
    // 0x1c44bc: 0x0  nop
    ctx->pc = 0x1c44bcu;
    // NOP
label_1c44c0:
    // 0x1c44c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c44c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c44c4:
    // 0x1c44c4: 0x0  nop
    ctx->pc = 0x1c44c4u;
    // NOP
label_1c44c8:
    // 0x1c44c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1c44cc:
    if (ctx->pc == 0x1C44CCu) {
        ctx->pc = 0x1C44D0u;
        goto label_1c44d0;
    }
    ctx->pc = 0x1C44C8u;
    {
        const bool branch_taken_0x1c44c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c44c8) {
            ctx->pc = 0x1C44E8u;
            goto label_1c44e8;
        }
    }
    ctx->pc = 0x1C44D0u;
label_1c44d0:
    // 0x1c44d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c44d4:
    // 0x1c44d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c44d8:
    // 0x1c44d8: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
label_1c44dc:
    // 0x1c44dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c44e0:
    // 0x1c44e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c44e4:
    if (ctx->pc == 0x1C44E4u) {
        ctx->pc = 0x1C44E8u;
        goto label_1c44e8;
    }
    ctx->pc = 0x1C44E0u;
    {
        const bool branch_taken_0x1c44e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c44e0) {
            ctx->pc = 0x1C44ECu;
            goto label_1c44ec;
        }
    }
    ctx->pc = 0x1C44E8u;
label_1c44e8:
    // 0x1c44e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c44e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c44ec:
    // 0x1c44ec: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c44ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1c44f0:
    // 0x1c44f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c44f4:
    // 0x1c44f4: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c44f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c44f8:
    // 0x1c44f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c44f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c44fc:
    // 0x1c44fc: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_1c4500:
    if (ctx->pc == 0x1C4500u) {
        ctx->pc = 0x1C4504u;
        goto label_1c4504;
    }
    ctx->pc = 0x1C44FCu;
    {
        const bool branch_taken_0x1c44fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c44fc) {
            ctx->pc = 0x1C45FCu;
            goto label_1c45fc;
        }
    }
    ctx->pc = 0x1C4504u;
label_1c4504:
    // 0x1c4504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4508:
    // 0x1c4508: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c4508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c450c:
    // 0x1c450c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c4510:
    // 0x1c4510: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c4510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c4514:
    // 0x1c4514: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1c4518:
    if (ctx->pc == 0x1C4518u) {
        ctx->pc = 0x1C451Cu;
        goto label_1c451c;
    }
    ctx->pc = 0x1C4514u;
    {
        const bool branch_taken_0x1c4514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4514) {
            ctx->pc = 0x1C4584u;
            goto label_1c4584;
        }
    }
    ctx->pc = 0x1C451Cu;
label_1c451c:
    // 0x1c451c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c4520:
    // 0x1c4520: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_1c4524:
    if (ctx->pc == 0x1C4524u) {
        ctx->pc = 0x1C4528u;
        goto label_1c4528;
    }
    ctx->pc = 0x1C4520u;
    {
        const bool branch_taken_0x1c4520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4520) {
            ctx->pc = 0x1C4578u;
            goto label_1c4578;
        }
    }
    ctx->pc = 0x1C4528u;
label_1c4528:
    // 0x1c4528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c452c:
    // 0x1c452c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1c4530:
    if (ctx->pc == 0x1C4530u) {
        ctx->pc = 0x1C4534u;
        goto label_1c4534;
    }
    ctx->pc = 0x1C452Cu;
    {
        const bool branch_taken_0x1c452c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c452c) {
            ctx->pc = 0x1C456Cu;
            goto label_1c456c;
        }
    }
    ctx->pc = 0x1C4534u;
label_1c4534:
    // 0x1c4534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c4538:
    // 0x1c4538: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1c453c:
    if (ctx->pc == 0x1C453Cu) {
        ctx->pc = 0x1C4540u;
        goto label_1c4540;
    }
    ctx->pc = 0x1C4538u;
    {
        const bool branch_taken_0x1c4538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4538) {
            ctx->pc = 0x1C4560u;
            goto label_1c4560;
        }
    }
    ctx->pc = 0x1C4540u;
label_1c4540:
    // 0x1c4540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4544:
    // 0x1c4544: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c4548:
    if (ctx->pc == 0x1C4548u) {
        ctx->pc = 0x1C454Cu;
        goto label_1c454c;
    }
    ctx->pc = 0x1C4544u;
    {
        const bool branch_taken_0x1c4544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c4544) {
            ctx->pc = 0x1C4554u;
            goto label_1c4554;
        }
    }
    ctx->pc = 0x1C454Cu;
label_1c454c:
    // 0x1c454c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c4550:
    if (ctx->pc == 0x1C4550u) {
        ctx->pc = 0x1C4554u;
        goto label_1c4554;
    }
    ctx->pc = 0x1C454Cu;
    {
        const bool branch_taken_0x1c454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c454c) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4554u;
label_1c4554:
    // 0x1c4554: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4554u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c4558:
    // 0x1c4558: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c455c:
    if (ctx->pc == 0x1C455Cu) {
        ctx->pc = 0x1C4560u;
        goto label_1c4560;
    }
    ctx->pc = 0x1C4558u;
    {
        const bool branch_taken_0x1c4558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4558) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4560u;
label_1c4560:
    // 0x1c4560: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4560u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c4564:
    // 0x1c4564: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c4568:
    if (ctx->pc == 0x1C4568u) {
        ctx->pc = 0x1C456Cu;
        goto label_1c456c;
    }
    ctx->pc = 0x1C4564u;
    {
        const bool branch_taken_0x1c4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4564) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C456Cu;
label_1c456c:
    // 0x1c456c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c456cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c4570:
    // 0x1c4570: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c4574:
    if (ctx->pc == 0x1C4574u) {
        ctx->pc = 0x1C4578u;
        goto label_1c4578;
    }
    ctx->pc = 0x1C4570u;
    {
        const bool branch_taken_0x1c4570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4570) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4578u;
label_1c4578:
    // 0x1c4578: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4578u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c457c:
    // 0x1c457c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c4580:
    if (ctx->pc == 0x1C4580u) {
        ctx->pc = 0x1C4584u;
        goto label_1c4584;
    }
    ctx->pc = 0x1C457Cu;
    {
        const bool branch_taken_0x1c457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c457c) {
            ctx->pc = 0x1C4588u;
            goto label_1c4588;
        }
    }
    ctx->pc = 0x1C4584u;
label_1c4584:
    // 0x1c4584: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4584u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c4588:
    // 0x1c4588: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c458c:
    // 0x1c458c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4590:
    // 0x1c4590: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1c4590u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c4594:
    // 0x1c4594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4598:
    // 0x1c4598: 0xa050156c  sb          $s0, 0x156C($v0)
    ctx->pc = 0x1c4598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 16));
label_1c459c:
    // 0x1c459c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c45a0:
    // 0x1c45a0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1c45a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c45a4:
    // 0x1c45a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c45a8:
    // 0x1c45a8: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c45ac:
    // 0x1c45ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c45b0:
    if (ctx->pc == 0x1C45B0u) {
        ctx->pc = 0x1C45B4u;
        goto label_1c45b4;
    }
    ctx->pc = 0x1C45ACu;
    {
        const bool branch_taken_0x1c45ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45ac) {
            ctx->pc = 0x1C45D4u;
            goto label_1c45d4;
        }
    }
    ctx->pc = 0x1C45B4u;
label_1c45b4:
    // 0x1c45b4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1c45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1c45b8:
    // 0x1c45b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c45b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c45bc:
    // 0x1c45bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c45c0:
    if (ctx->pc == 0x1C45C0u) {
        ctx->pc = 0x1C45C4u;
        goto label_1c45c4;
    }
    ctx->pc = 0x1C45BCu;
    {
        const bool branch_taken_0x1c45bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45bc) {
            ctx->pc = 0x1C45D4u;
            goto label_1c45d4;
        }
    }
    ctx->pc = 0x1C45C4u;
label_1c45c4:
    // 0x1c45c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c45c8:
    // 0x1c45c8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c45c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1c45cc:
    // 0x1c45cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c45d0:
    if (ctx->pc == 0x1C45D0u) {
        ctx->pc = 0x1C45D4u;
        goto label_1c45d4;
    }
    ctx->pc = 0x1C45CCu;
    {
        const bool branch_taken_0x1c45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45cc) {
            ctx->pc = 0x1C45E0u;
            goto label_1c45e0;
        }
    }
    ctx->pc = 0x1C45D4u;
label_1c45d4:
    // 0x1c45d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c45d8:
    // 0x1c45d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c45dc:
    // 0x1c45dc: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1c45dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1c45e0:
    // 0x1c45e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c45e4:
    // 0x1c45e4: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c45e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c45e8:
    // 0x1c45e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c45e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c45ec:
    // 0x1c45ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c45f0:
    if (ctx->pc == 0x1C45F0u) {
        ctx->pc = 0x1C45F4u;
        goto label_1c45f4;
    }
    ctx->pc = 0x1C45ECu;
    {
        const bool branch_taken_0x1c45ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45ec) {
            ctx->pc = 0x1C45FCu;
            goto label_1c45fc;
        }
    }
    ctx->pc = 0x1C45F4u;
label_1c45f4:
    // 0x1c45f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c45f8:
    // 0x1c45f8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c45f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1c45fc:
    // 0x1c45fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4600:
    // 0x1c4600: 0xc058aa4  jal         func_162A90
label_1c4604:
    if (ctx->pc == 0x1C4604u) {
        ctx->pc = 0x1C4608u;
        goto label_1c4608;
    }
    ctx->pc = 0x1C4600u;
    SET_GPR_U32(ctx, 31, 0x1C4608u);
    ctx->pc = 0x162A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A90u, 0x1C4600u, 0x1C4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4608u;
label_1c4608:
    // 0x1c4608: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c460c:
    // 0x1c460c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c460cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c4610:
    // 0x1c4610: 0xc0572a4  jal         func_15CA90
label_1c4614:
    if (ctx->pc == 0x1C4614u) {
        ctx->pc = 0x1C4618u;
        goto label_1c4618;
    }
    ctx->pc = 0x1C4610u;
    SET_GPR_U32(ctx, 31, 0x1C4618u);
    ctx->pc = 0x15CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CA90u, 0x1C4610u, 0x1C4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4618u;
label_1c4618:
    // 0x1c4618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c461c:
    // 0x1c461c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4620:
    // 0x1c4620: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c4620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c4624:
    // 0x1c4624: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c4624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c4628:
    // 0x1c4628: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c4628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c462c:
    // 0x1c462c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4630:
    // 0x1c4630: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c4634:
    // 0x1c4634: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c4634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c4638:
    // 0x1c4638: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
label_1c463c:
    // 0x1c463c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4640:
    // 0x1c4640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4644:
    // 0x1c4644: 0x9042156d  lbu         $v0, 0x156D($v0)
    ctx->pc = 0x1c4644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5485)));
label_1c4648:
    // 0x1c4648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c464c:
    // 0x1c464c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c464cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c4650:
    // 0x1c4650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4654:
    // 0x1c4654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4658:
    // 0x1c4658: 0x40f809  jalr        $v0
label_1c465c:
    if (ctx->pc == 0x1C465Cu) {
        ctx->pc = 0x1C4660u;
        goto label_1c4660;
    }
    ctx->pc = 0x1C4658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4660u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4658u, 0x1C4660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4660u;
label_1c4660:
    // 0x1c4660: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4664:
    // 0x1c4664: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c4664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4668:
    // 0x1c4668: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c466c:
    // 0x1c466c: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c4670:
    // 0x1c4670: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4674:
    // 0x1c4674: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c4674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1c4678:
    // 0x1c4678: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c467c:
    if (ctx->pc == 0x1C467Cu) {
        ctx->pc = 0x1C4680u;
        goto label_1c4680;
    }
    ctx->pc = 0x1C4678u;
    {
        const bool branch_taken_0x1c4678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4678) {
            ctx->pc = 0x1C4690u;
            goto label_1c4690;
        }
    }
    ctx->pc = 0x1C4680u;
label_1c4680:
    // 0x1c4680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4684:
    // 0x1c4684: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1c4684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_1c4688:
    // 0x1c4688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c468c:
    // 0x1c468c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c468cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c4690:
    // 0x1c4690: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4694:
    // 0x1c4694: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c4698:
    // 0x1c4698: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c4698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1c469c:
    // 0x1c469c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c469cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1c46a0:
    // 0x1c46a0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_1c46a4:
    if (ctx->pc == 0x1C46A4u) {
        ctx->pc = 0x1C46A8u;
        goto label_1c46a8;
    }
    ctx->pc = 0x1C46A0u;
    {
        const bool branch_taken_0x1c46a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46a0) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C46A8u;
label_1c46a8:
    // 0x1c46a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c46ac:
    // 0x1c46ac: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c46acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1c46b0:
    // 0x1c46b0: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_1c46b4:
    if (ctx->pc == 0x1C46B4u) {
        ctx->pc = 0x1C46B8u;
        goto label_1c46b8;
    }
    ctx->pc = 0x1C46B0u;
    {
        const bool branch_taken_0x1c46b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46b0) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C46B8u;
label_1c46b8:
    // 0x1c46b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c46bc:
    // 0x1c46bc: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1c46bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
label_1c46c0:
    // 0x1c46c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c46c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c46c4:
    // 0x1c46c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c46c8:
    // 0x1c46c8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_1c46cc:
    if (ctx->pc == 0x1C46CCu) {
        ctx->pc = 0x1C46D0u;
        goto label_1c46d0;
    }
    ctx->pc = 0x1C46C8u;
    {
        const bool branch_taken_0x1c46c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c46c8) {
            ctx->pc = 0x1C4748u;
            goto label_1c4748;
        }
    }
    ctx->pc = 0x1C46D0u;
label_1c46d0:
    // 0x1c46d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c46d4:
    // 0x1c46d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1c46d8:
    if (ctx->pc == 0x1C46D8u) {
        ctx->pc = 0x1C46DCu;
        goto label_1c46dc;
    }
    ctx->pc = 0x1C46D4u;
    {
        const bool branch_taken_0x1c46d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c46d4) {
            ctx->pc = 0x1C46ECu;
            goto label_1c46ec;
        }
    }
    ctx->pc = 0x1C46DCu;
label_1c46dc:
    // 0x1c46dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c46e0:
    if (ctx->pc == 0x1C46E0u) {
        ctx->pc = 0x1C46E4u;
        goto label_1c46e4;
    }
    ctx->pc = 0x1C46DCu;
    {
        const bool branch_taken_0x1c46dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46dc) {
            ctx->pc = 0x1C46ECu;
            goto label_1c46ec;
        }
    }
    ctx->pc = 0x1C46E4u;
label_1c46e4:
    // 0x1c46e4: 0x10000031  b           . + 4 + (0x31 << 2)
label_1c46e8:
    if (ctx->pc == 0x1C46E8u) {
        ctx->pc = 0x1C46ECu;
        goto label_1c46ec;
    }
    ctx->pc = 0x1C46E4u;
    {
        const bool branch_taken_0x1c46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46e4) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C46ECu;
label_1c46ec:
    // 0x1c46ec: 0xc057acc  jal         func_15EB30
label_1c46f0:
    if (ctx->pc == 0x1C46F0u) {
        ctx->pc = 0x1C46F4u;
        goto label_1c46f4;
    }
    ctx->pc = 0x1C46ECu;
    SET_GPR_U32(ctx, 31, 0x1C46F4u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C46ECu, 0x1C46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46F4u;
label_1c46f4:
    // 0x1c46f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c46f8:
    if (ctx->pc == 0x1C46F8u) {
        ctx->pc = 0x1C46FCu;
        goto label_1c46fc;
    }
    ctx->pc = 0x1C46F4u;
    {
        const bool branch_taken_0x1c46f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46f4) {
            ctx->pc = 0x1C4710u;
            goto label_1c4710;
        }
    }
    ctx->pc = 0x1C46FCu;
label_1c46fc:
    // 0x1c46fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c4700:
    // 0x1c4700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4704:
    // 0x1c4704: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c4704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c4708:
    // 0x1c4708: 0x10000028  b           . + 4 + (0x28 << 2)
label_1c470c:
    if (ctx->pc == 0x1C470Cu) {
        ctx->pc = 0x1C4710u;
        goto label_1c4710;
    }
    ctx->pc = 0x1C4708u;
    {
        const bool branch_taken_0x1c4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4708) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C4710u;
label_1c4710:
    // 0x1c4710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4714:
    // 0x1c4714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4718:
    // 0x1c4718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c4718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c471c:
    // 0x1c471c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4720:
    // 0x1c4720: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c4720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c4724:
    // 0x1c4724: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4728:
    // 0x1c4728: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c4728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c472c:
    // 0x1c472c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4730:
    // 0x1c4730: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c4734:
    // 0x1c4734: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c4738:
    // 0x1c4738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c473c:
    // 0x1c473c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c473cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c4740:
    // 0x1c4740: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1c4744:
    if (ctx->pc == 0x1C4744u) {
        ctx->pc = 0x1C4748u;
        goto label_1c4748;
    }
    ctx->pc = 0x1C4740u;
    {
        const bool branch_taken_0x1c4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4740) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C4748u;
label_1c4748:
    // 0x1c4748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c474c:
    // 0x1c474c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c474cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_1c4750:
    // 0x1c4750: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1c4754:
    if (ctx->pc == 0x1C4754u) {
        ctx->pc = 0x1C4758u;
        goto label_1c4758;
    }
    ctx->pc = 0x1C4750u;
    {
        const bool branch_taken_0x1c4750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4750) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C4758u;
label_1c4758:
    // 0x1c4758: 0xc057acc  jal         func_15EB30
label_1c475c:
    if (ctx->pc == 0x1C475Cu) {
        ctx->pc = 0x1C4760u;
        goto label_1c4760;
    }
    ctx->pc = 0x1C4758u;
    SET_GPR_U32(ctx, 31, 0x1C4760u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C4758u, 0x1C4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4760u;
label_1c4760:
    // 0x1c4760: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c4764:
    if (ctx->pc == 0x1C4764u) {
        ctx->pc = 0x1C4768u;
        goto label_1c4768;
    }
    ctx->pc = 0x1C4760u;
    {
        const bool branch_taken_0x1c4760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4760) {
            ctx->pc = 0x1C477Cu;
            goto label_1c477c;
        }
    }
    ctx->pc = 0x1C4768u;
label_1c4768:
    // 0x1c4768: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c4768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c476c:
    // 0x1c476c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4770:
    // 0x1c4770: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c4770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c4774:
    // 0x1c4774: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c4778:
    if (ctx->pc == 0x1C4778u) {
        ctx->pc = 0x1C477Cu;
        goto label_1c477c;
    }
    ctx->pc = 0x1C4774u;
    {
        const bool branch_taken_0x1c4774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4774) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C477Cu;
label_1c477c:
    // 0x1c477c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4780:
    // 0x1c4780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4784:
    // 0x1c4784: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1c4784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c4788:
    // 0x1c4788: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c478c:
    // 0x1c478c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1c478cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c4790:
    // 0x1c4790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4794:
    // 0x1c4794: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c4794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c4798:
    // 0x1c4798: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c479c:
    // 0x1c479c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c479cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c47a0:
    // 0x1c47a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c47a4:
    // 0x1c47a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c47a8:
    // 0x1c47a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1c47ac:
    // 0x1c47ac: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1c47acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c47b0:
    // 0x1c47b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c47b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c47b4:
    // 0x1c47b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c47b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c47b8:
    // 0x1c47b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c47b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c47bc:
    // 0x1c47bc: 0x3e00008  jr          $ra
label_1c47c0:
    if (ctx->pc == 0x1C47C0u) {
        ctx->pc = 0x1C47C4u;
        goto label_fallthrough_0x1c47bc;
    }
    ctx->pc = 0x1C47BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c47bc:
    ctx->pc = 0x1C47C4u;
}
