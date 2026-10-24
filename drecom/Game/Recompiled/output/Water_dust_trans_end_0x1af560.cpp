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

// Function: Water_dust_trans_end
// Address: 0x1af560 - 0x1af780
void Water_dust_trans_end_0x1af560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Water_dust_trans_end_0x1af560");
#endif

    switch (ctx->pc) {
        case 0x1af560u: goto label_1af560;
        case 0x1af564u: goto label_1af564;
        case 0x1af568u: goto label_1af568;
        case 0x1af56cu: goto label_1af56c;
        case 0x1af570u: goto label_1af570;
        case 0x1af574u: goto label_1af574;
        case 0x1af578u: goto label_1af578;
        case 0x1af57cu: goto label_1af57c;
        case 0x1af580u: goto label_1af580;
        case 0x1af584u: goto label_1af584;
        case 0x1af588u: goto label_1af588;
        case 0x1af58cu: goto label_1af58c;
        case 0x1af590u: goto label_1af590;
        case 0x1af594u: goto label_1af594;
        case 0x1af598u: goto label_1af598;
        case 0x1af59cu: goto label_1af59c;
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5a4u: goto label_1af5a4;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5acu: goto label_1af5ac;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5b4u: goto label_1af5b4;
        case 0x1af5b8u: goto label_1af5b8;
        case 0x1af5bcu: goto label_1af5bc;
        case 0x1af5c0u: goto label_1af5c0;
        case 0x1af5c4u: goto label_1af5c4;
        case 0x1af5c8u: goto label_1af5c8;
        case 0x1af5ccu: goto label_1af5cc;
        case 0x1af5d0u: goto label_1af5d0;
        case 0x1af5d4u: goto label_1af5d4;
        case 0x1af5d8u: goto label_1af5d8;
        case 0x1af5dcu: goto label_1af5dc;
        case 0x1af5e0u: goto label_1af5e0;
        case 0x1af5e4u: goto label_1af5e4;
        case 0x1af5e8u: goto label_1af5e8;
        case 0x1af5ecu: goto label_1af5ec;
        case 0x1af5f0u: goto label_1af5f0;
        case 0x1af5f4u: goto label_1af5f4;
        case 0x1af5f8u: goto label_1af5f8;
        case 0x1af5fcu: goto label_1af5fc;
        case 0x1af600u: goto label_1af600;
        case 0x1af604u: goto label_1af604;
        case 0x1af608u: goto label_1af608;
        case 0x1af60cu: goto label_1af60c;
        case 0x1af610u: goto label_1af610;
        case 0x1af614u: goto label_1af614;
        case 0x1af618u: goto label_1af618;
        case 0x1af61cu: goto label_1af61c;
        case 0x1af620u: goto label_1af620;
        case 0x1af624u: goto label_1af624;
        case 0x1af628u: goto label_1af628;
        case 0x1af62cu: goto label_1af62c;
        case 0x1af630u: goto label_1af630;
        case 0x1af634u: goto label_1af634;
        case 0x1af638u: goto label_1af638;
        case 0x1af63cu: goto label_1af63c;
        case 0x1af640u: goto label_1af640;
        case 0x1af644u: goto label_1af644;
        case 0x1af648u: goto label_1af648;
        case 0x1af64cu: goto label_1af64c;
        case 0x1af650u: goto label_1af650;
        case 0x1af654u: goto label_1af654;
        case 0x1af658u: goto label_1af658;
        case 0x1af65cu: goto label_1af65c;
        case 0x1af660u: goto label_1af660;
        case 0x1af664u: goto label_1af664;
        case 0x1af668u: goto label_1af668;
        case 0x1af66cu: goto label_1af66c;
        case 0x1af670u: goto label_1af670;
        case 0x1af674u: goto label_1af674;
        case 0x1af678u: goto label_1af678;
        case 0x1af67cu: goto label_1af67c;
        case 0x1af680u: goto label_1af680;
        case 0x1af684u: goto label_1af684;
        case 0x1af688u: goto label_1af688;
        case 0x1af68cu: goto label_1af68c;
        case 0x1af690u: goto label_1af690;
        case 0x1af694u: goto label_1af694;
        case 0x1af698u: goto label_1af698;
        case 0x1af69cu: goto label_1af69c;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6a4u: goto label_1af6a4;
        case 0x1af6a8u: goto label_1af6a8;
        case 0x1af6acu: goto label_1af6ac;
        case 0x1af6b0u: goto label_1af6b0;
        case 0x1af6b4u: goto label_1af6b4;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6bcu: goto label_1af6bc;
        case 0x1af6c0u: goto label_1af6c0;
        case 0x1af6c4u: goto label_1af6c4;
        case 0x1af6c8u: goto label_1af6c8;
        case 0x1af6ccu: goto label_1af6cc;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af6d4u: goto label_1af6d4;
        case 0x1af6d8u: goto label_1af6d8;
        case 0x1af6dcu: goto label_1af6dc;
        case 0x1af6e0u: goto label_1af6e0;
        case 0x1af6e4u: goto label_1af6e4;
        case 0x1af6e8u: goto label_1af6e8;
        case 0x1af6ecu: goto label_1af6ec;
        case 0x1af6f0u: goto label_1af6f0;
        case 0x1af6f4u: goto label_1af6f4;
        case 0x1af6f8u: goto label_1af6f8;
        case 0x1af6fcu: goto label_1af6fc;
        case 0x1af700u: goto label_1af700;
        case 0x1af704u: goto label_1af704;
        case 0x1af708u: goto label_1af708;
        case 0x1af70cu: goto label_1af70c;
        case 0x1af710u: goto label_1af710;
        case 0x1af714u: goto label_1af714;
        case 0x1af718u: goto label_1af718;
        case 0x1af71cu: goto label_1af71c;
        case 0x1af720u: goto label_1af720;
        case 0x1af724u: goto label_1af724;
        case 0x1af728u: goto label_1af728;
        case 0x1af72cu: goto label_1af72c;
        case 0x1af730u: goto label_1af730;
        case 0x1af734u: goto label_1af734;
        case 0x1af738u: goto label_1af738;
        case 0x1af73cu: goto label_1af73c;
        case 0x1af740u: goto label_1af740;
        case 0x1af744u: goto label_1af744;
        case 0x1af748u: goto label_1af748;
        case 0x1af74cu: goto label_1af74c;
        case 0x1af750u: goto label_1af750;
        case 0x1af754u: goto label_1af754;
        case 0x1af758u: goto label_1af758;
        case 0x1af75cu: goto label_1af75c;
        case 0x1af760u: goto label_1af760;
        case 0x1af764u: goto label_1af764;
        case 0x1af768u: goto label_1af768;
        case 0x1af76cu: goto label_1af76c;
        case 0x1af770u: goto label_1af770;
        case 0x1af774u: goto label_1af774;
        case 0x1af778u: goto label_1af778;
        case 0x1af77cu: goto label_1af77c;
        default: break;
    }

    ctx->pc = 0x1af560u;

label_1af560:
    // 0x1af560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1af560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1af564:
    // 0x1af564: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1af564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_1af568:
    // 0x1af568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1af568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1af56c:
    // 0x1af56c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1af570:
    // 0x1af570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1af574:
    // 0x1af574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af578:
    // 0x1af578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1af57c:
    // 0x1af57c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1af57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1af580:
    // 0x1af580: 0x2471f010  addiu       $s1, $v1, -0xFF0
    ctx->pc = 0x1af580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
label_1af584:
    // 0x1af584: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1af584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1af588:
    // 0x1af588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af58c:
    // 0x1af58c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af590:
    // 0x1af590: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1af594:
    // 0x1af594: 0xe420b4f0  swc1        $f0, -0x4B10($at)
    ctx->pc = 0x1af594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948080), bits); }
label_1af598:
    // 0x1af598: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x1af598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
label_1af59c:
    // 0x1af59c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1af59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1af5a0:
    // 0x1af5a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af5a4:
    // 0x1af5a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af5a8:
    // 0x1af5a8: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1af5ac:
    // 0x1af5ac: 0xe420b4f4  swc1        $f0, -0x4B0C($at)
    ctx->pc = 0x1af5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948084), bits); }
label_1af5b0:
    // 0x1af5b0: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1af5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_1af5b4:
    // 0x1af5b4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1af5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_1af5b8:
    // 0x1af5b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af5bc:
    // 0x1af5bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af5c0:
    // 0x1af5c0: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1af5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1af5c4:
    // 0x1af5c4: 0xe420b4f8  swc1        $f0, -0x4B08($at)
    ctx->pc = 0x1af5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948088), bits); }
label_1af5c8:
    // 0x1af5c8: 0x3c033f0c  lui         $v1, 0x3F0C
    ctx->pc = 0x1af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16140 << 16));
label_1af5cc:
    // 0x1af5cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1af5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1af5d0:
    // 0x1af5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af5d4:
    // 0x1af5d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af5d8:
    // 0x1af5d8: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x1af5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_1af5dc:
    // 0x1af5dc: 0xe420b4fc  swc1        $f0, -0x4B04($at)
    ctx->pc = 0x1af5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948092), bits); }
label_1af5e0:
    // 0x1af5e0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1af5e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1af5e4:
    // 0x1af5e4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1af5e8:
    if (ctx->pc == 0x1AF5E8u) {
        ctx->pc = 0x1AF5ECu;
        goto label_1af5ec;
    }
    ctx->pc = 0x1AF5E4u;
    {
        const bool branch_taken_0x1af5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5e4) {
            ctx->pc = 0x1AF750u;
            goto label_1af750;
        }
    }
    ctx->pc = 0x1AF5ECu;
label_1af5ec:
    // 0x1af5ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af5f0:
    // 0x1af5f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1af5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af5f4:
    // 0x1af5f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af5f8:
    // 0x1af5f8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af5fc:
    // 0x1af5fc: 0x8c33b490  lw          $s3, -0x4B70($at)
    ctx->pc = 0x1af5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
label_1af600:
    // 0x1af600: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af604:
    // 0x1af604: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1af604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af608:
    // 0x1af608: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af60c:
    // 0x1af60c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af60cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af610:
    // 0x1af610: 0x8c22b4a0  lw          $v0, -0x4B60($at)
    ctx->pc = 0x1af610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1af614:
    // 0x1af614: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1af614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1af618:
    // 0x1af618: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1af618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1af61c:
    // 0x1af61c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1af61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1af620:
    // 0x1af620: 0x3a142  srl         $s4, $v1, 5
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_1af624:
    // 0x1af624: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af628:
    // 0x1af628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1af628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af62c:
    // 0x1af62c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af630:
    // 0x1af630: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af634:
    // 0x1af634: 0x8c32b4a0  lw          $s2, -0x4B60($at)
    ctx->pc = 0x1af634u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1af638:
    // 0x1af638: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1af638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1af63c:
    // 0x1af63c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1af63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1af640:
    // 0x1af640: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1af640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1af644:
    // 0x1af644: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1af648:
    // 0x1af648: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1af64c:
    // 0x1af64c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1af64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1af650:
    // 0x1af650: 0x3c020164  lui         $v0, 0x164
    ctx->pc = 0x1af650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)356 << 16));
label_1af654:
    // 0x1af654: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1af658:
    // 0x1af658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1af658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1af65c:
    // 0x1af65c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1af65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1af660:
    // 0x1af660: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1af664:
    // 0x1af664: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1af664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1af668:
    // 0x1af668: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1af668u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1af66c:
    // 0x1af66c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1af66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1af670:
    // 0x1af670: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1af670u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
label_1af674:
    // 0x1af674: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af678:
    // 0x1af678: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1af678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af67c:
    // 0x1af67c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1af67cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1af680:
    // 0x1af680: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af684:
    // 0x1af684: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af684u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af688:
    // 0x1af688: 0xc42cb4f0  lwc1        $f12, -0x4B10($at)
    ctx->pc = 0x1af688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1af68c:
    // 0x1af68c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1af68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af690:
    // 0x1af690: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1af690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1af694:
    // 0x1af694: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x1af694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_1af698:
    // 0x1af698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1af69c:
    // 0x1af69c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1af69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1af6a0:
    // 0x1af6a0: 0x40f809  jalr        $v0
label_1af6a4:
    if (ctx->pc == 0x1AF6A4u) {
        ctx->pc = 0x1AF6A8u;
        goto label_1af6a8;
    }
    ctx->pc = 0x1AF6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF6A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF6A0u, 0x1AF6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF6A8u;
label_1af6a8:
    // 0x1af6a8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1af6a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1af6ac:
    // 0x1af6ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1af6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1af6b0:
    // 0x1af6b0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1af6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1af6b4:
    // 0x1af6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1af6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1af6b8:
    // 0x1af6b8: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1af6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af6bc:
    // 0x1af6bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af6c0:
    // 0x1af6c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af6c4:
    // 0x1af6c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af6c8:
    // 0x1af6c8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af6cc:
    // 0x1af6cc: 0x8c22b470  lw          $v0, -0x4B90($at)
    ctx->pc = 0x1af6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1af6d0:
    // 0x1af6d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1af6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1af6d4:
    // 0x1af6d4: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1af6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1af6d8:
    // 0x1af6d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1af6dc:
    // 0x1af6dc: 0x3a102  srl         $s4, $v1, 4
    ctx->pc = 0x1af6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1af6e0:
    // 0x1af6e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1af6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1af6e4:
    // 0x1af6e4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1af6e8:
    // 0x1af6e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1af6ec:
    // 0x1af6ec: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1af6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af6f0:
    // 0x1af6f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af6f4:
    // 0x1af6f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1af6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af6f8:
    // 0x1af6f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af6fc:
    // 0x1af6fc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af700:
    // 0x1af700: 0x8c32b470  lw          $s2, -0x4B90($at)
    ctx->pc = 0x1af700u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1af704:
    // 0x1af704: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1af704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1af708:
    // 0x1af708: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1af708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1af70c:
    // 0x1af70c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1af710:
    // 0x1af710: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1af710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1af714:
    // 0x1af714: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1af714u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1af718:
    // 0x1af718: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x1af718u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
label_1af71c:
    // 0x1af71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1af720:
    // 0x1af720: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1af724:
    // 0x1af724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1af724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1af728:
    // 0x1af728: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1af728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1af72c:
    // 0x1af72c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1af72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1af730:
    // 0x1af730: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1af730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af734:
    // 0x1af734: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1af734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1af738:
    // 0x1af738: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1af738u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1af73c:
    // 0x1af73c: 0x8c24b470  lw          $a0, -0x4B90($at)
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1af740:
    // 0x1af740: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1af740u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1af744:
    // 0x1af744: 0xc06aff4  jal         func_1ABFD0
label_1af748:
    if (ctx->pc == 0x1AF748u) {
        ctx->pc = 0x1AF74Cu;
        goto label_1af74c;
    }
    ctx->pc = 0x1AF744u;
    SET_GPR_U32(ctx, 31, 0x1AF74Cu);
    ctx->pc = 0x1ABFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABFD0u, 0x1AF744u, 0x1AF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF74Cu;
label_1af74c:
    // 0x1af74c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af750:
    // 0x1af750: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1af750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1af754:
    // 0x1af754: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
label_1af758:
    if (ctx->pc == 0x1AF758u) {
        ctx->pc = 0x1AF75Cu;
        goto label_1af75c;
    }
    ctx->pc = 0x1AF754u;
    {
        const bool branch_taken_0x1af754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af754) {
            ctx->pc = 0x1AF5ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af5ec;
        }
    }
    ctx->pc = 0x1AF75Cu;
label_1af75c:
    // 0x1af75c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1af75cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1af760:
    // 0x1af760: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1af760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1af764:
    // 0x1af764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af768:
    // 0x1af768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af76c:
    // 0x1af76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af770:
    // 0x1af770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af774:
    // 0x1af774: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1af778:
    // 0x1af778: 0x3e00008  jr          $ra
label_1af77c:
    if (ctx->pc == 0x1AF77Cu) {
        ctx->pc = 0x1AF780u;
        goto label_fallthrough_0x1af778;
    }
    ctx->pc = 0x1AF778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af778:
    ctx->pc = 0x1AF780u;
}
