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

// Function: Eff_stat_move
// Address: 0x18e560 - 0x18e7a4
void Eff_stat_move_0x18e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_stat_move_0x18e560");
#endif

    switch (ctx->pc) {
        case 0x18e560u: goto label_18e560;
        case 0x18e564u: goto label_18e564;
        case 0x18e568u: goto label_18e568;
        case 0x18e56cu: goto label_18e56c;
        case 0x18e570u: goto label_18e570;
        case 0x18e574u: goto label_18e574;
        case 0x18e578u: goto label_18e578;
        case 0x18e57cu: goto label_18e57c;
        case 0x18e580u: goto label_18e580;
        case 0x18e584u: goto label_18e584;
        case 0x18e588u: goto label_18e588;
        case 0x18e58cu: goto label_18e58c;
        case 0x18e590u: goto label_18e590;
        case 0x18e594u: goto label_18e594;
        case 0x18e598u: goto label_18e598;
        case 0x18e59cu: goto label_18e59c;
        case 0x18e5a0u: goto label_18e5a0;
        case 0x18e5a4u: goto label_18e5a4;
        case 0x18e5a8u: goto label_18e5a8;
        case 0x18e5acu: goto label_18e5ac;
        case 0x18e5b0u: goto label_18e5b0;
        case 0x18e5b4u: goto label_18e5b4;
        case 0x18e5b8u: goto label_18e5b8;
        case 0x18e5bcu: goto label_18e5bc;
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5c4u: goto label_18e5c4;
        case 0x18e5c8u: goto label_18e5c8;
        case 0x18e5ccu: goto label_18e5cc;
        case 0x18e5d0u: goto label_18e5d0;
        case 0x18e5d4u: goto label_18e5d4;
        case 0x18e5d8u: goto label_18e5d8;
        case 0x18e5dcu: goto label_18e5dc;
        case 0x18e5e0u: goto label_18e5e0;
        case 0x18e5e4u: goto label_18e5e4;
        case 0x18e5e8u: goto label_18e5e8;
        case 0x18e5ecu: goto label_18e5ec;
        case 0x18e5f0u: goto label_18e5f0;
        case 0x18e5f4u: goto label_18e5f4;
        case 0x18e5f8u: goto label_18e5f8;
        case 0x18e5fcu: goto label_18e5fc;
        case 0x18e600u: goto label_18e600;
        case 0x18e604u: goto label_18e604;
        case 0x18e608u: goto label_18e608;
        case 0x18e60cu: goto label_18e60c;
        case 0x18e610u: goto label_18e610;
        case 0x18e614u: goto label_18e614;
        case 0x18e618u: goto label_18e618;
        case 0x18e61cu: goto label_18e61c;
        case 0x18e620u: goto label_18e620;
        case 0x18e624u: goto label_18e624;
        case 0x18e628u: goto label_18e628;
        case 0x18e62cu: goto label_18e62c;
        case 0x18e630u: goto label_18e630;
        case 0x18e634u: goto label_18e634;
        case 0x18e638u: goto label_18e638;
        case 0x18e63cu: goto label_18e63c;
        case 0x18e640u: goto label_18e640;
        case 0x18e644u: goto label_18e644;
        case 0x18e648u: goto label_18e648;
        case 0x18e64cu: goto label_18e64c;
        case 0x18e650u: goto label_18e650;
        case 0x18e654u: goto label_18e654;
        case 0x18e658u: goto label_18e658;
        case 0x18e65cu: goto label_18e65c;
        case 0x18e660u: goto label_18e660;
        case 0x18e664u: goto label_18e664;
        case 0x18e668u: goto label_18e668;
        case 0x18e66cu: goto label_18e66c;
        case 0x18e670u: goto label_18e670;
        case 0x18e674u: goto label_18e674;
        case 0x18e678u: goto label_18e678;
        case 0x18e67cu: goto label_18e67c;
        case 0x18e680u: goto label_18e680;
        case 0x18e684u: goto label_18e684;
        case 0x18e688u: goto label_18e688;
        case 0x18e68cu: goto label_18e68c;
        case 0x18e690u: goto label_18e690;
        case 0x18e694u: goto label_18e694;
        case 0x18e698u: goto label_18e698;
        case 0x18e69cu: goto label_18e69c;
        case 0x18e6a0u: goto label_18e6a0;
        case 0x18e6a4u: goto label_18e6a4;
        case 0x18e6a8u: goto label_18e6a8;
        case 0x18e6acu: goto label_18e6ac;
        case 0x18e6b0u: goto label_18e6b0;
        case 0x18e6b4u: goto label_18e6b4;
        case 0x18e6b8u: goto label_18e6b8;
        case 0x18e6bcu: goto label_18e6bc;
        case 0x18e6c0u: goto label_18e6c0;
        case 0x18e6c4u: goto label_18e6c4;
        case 0x18e6c8u: goto label_18e6c8;
        case 0x18e6ccu: goto label_18e6cc;
        case 0x18e6d0u: goto label_18e6d0;
        case 0x18e6d4u: goto label_18e6d4;
        case 0x18e6d8u: goto label_18e6d8;
        case 0x18e6dcu: goto label_18e6dc;
        case 0x18e6e0u: goto label_18e6e0;
        case 0x18e6e4u: goto label_18e6e4;
        case 0x18e6e8u: goto label_18e6e8;
        case 0x18e6ecu: goto label_18e6ec;
        case 0x18e6f0u: goto label_18e6f0;
        case 0x18e6f4u: goto label_18e6f4;
        case 0x18e6f8u: goto label_18e6f8;
        case 0x18e6fcu: goto label_18e6fc;
        case 0x18e700u: goto label_18e700;
        case 0x18e704u: goto label_18e704;
        case 0x18e708u: goto label_18e708;
        case 0x18e70cu: goto label_18e70c;
        case 0x18e710u: goto label_18e710;
        case 0x18e714u: goto label_18e714;
        case 0x18e718u: goto label_18e718;
        case 0x18e71cu: goto label_18e71c;
        case 0x18e720u: goto label_18e720;
        case 0x18e724u: goto label_18e724;
        case 0x18e728u: goto label_18e728;
        case 0x18e72cu: goto label_18e72c;
        case 0x18e730u: goto label_18e730;
        case 0x18e734u: goto label_18e734;
        case 0x18e738u: goto label_18e738;
        case 0x18e73cu: goto label_18e73c;
        case 0x18e740u: goto label_18e740;
        case 0x18e744u: goto label_18e744;
        case 0x18e748u: goto label_18e748;
        case 0x18e74cu: goto label_18e74c;
        case 0x18e750u: goto label_18e750;
        case 0x18e754u: goto label_18e754;
        case 0x18e758u: goto label_18e758;
        case 0x18e75cu: goto label_18e75c;
        case 0x18e760u: goto label_18e760;
        case 0x18e764u: goto label_18e764;
        case 0x18e768u: goto label_18e768;
        case 0x18e76cu: goto label_18e76c;
        case 0x18e770u: goto label_18e770;
        case 0x18e774u: goto label_18e774;
        case 0x18e778u: goto label_18e778;
        case 0x18e77cu: goto label_18e77c;
        case 0x18e780u: goto label_18e780;
        case 0x18e784u: goto label_18e784;
        case 0x18e788u: goto label_18e788;
        case 0x18e78cu: goto label_18e78c;
        case 0x18e790u: goto label_18e790;
        case 0x18e794u: goto label_18e794;
        case 0x18e798u: goto label_18e798;
        case 0x18e79cu: goto label_18e79c;
        case 0x18e7a0u: goto label_18e7a0;
        default: break;
    }

    ctx->pc = 0x18e560u;

label_18e560:
    // 0x18e560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18e564:
    // 0x18e564: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x18e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_18e568:
    // 0x18e568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18e56c:
    // 0x18e56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e570:
    // 0x18e570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e574:
    // 0x18e574: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_18e578:
    // 0x18e578: 0x2472a630  addiu       $s2, $v1, -0x59D0
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
label_18e57c:
    // 0x18e57c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e580:
    // 0x18e580: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x18e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_18e584:
    // 0x18e584: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18e584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_18e588:
    // 0x18e588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18e58c:
    // 0x18e58c: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
label_18e590:
    if (ctx->pc == 0x18E590u) {
        ctx->pc = 0x18E594u;
        goto label_18e594;
    }
    ctx->pc = 0x18E58Cu;
    {
        const bool branch_taken_0x18e58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e58c) {
            ctx->pc = 0x18E788u;
            goto label_18e788;
        }
    }
    ctx->pc = 0x18E594u;
label_18e594:
    // 0x18e594: 0x8e510078  lw          $s1, 0x78($s2)
    ctx->pc = 0x18e594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_18e598:
    // 0x18e598: 0x10000027  b           . + 4 + (0x27 << 2)
label_18e59c:
    if (ctx->pc == 0x18E59Cu) {
        ctx->pc = 0x18E5A0u;
        goto label_18e5a0;
    }
    ctx->pc = 0x18E598u;
    {
        const bool branch_taken_0x18e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e598) {
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E5A0u;
label_18e5a0:
    // 0x18e5a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e5a4:
    // 0x18e5a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e5a8:
    // 0x18e5a8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_18e5ac:
    if (ctx->pc == 0x18E5ACu) {
        ctx->pc = 0x18E5B0u;
        goto label_18e5b0;
    }
    ctx->pc = 0x18E5A8u;
    {
        const bool branch_taken_0x18e5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5a8) {
            ctx->pc = 0x18E630u;
            goto label_18e630;
        }
    }
    ctx->pc = 0x18E5B0u;
label_18e5b0:
    // 0x18e5b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e5b4:
    // 0x18e5b4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18e5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_18e5b8:
    // 0x18e5b8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_18e5bc:
    if (ctx->pc == 0x18E5BCu) {
        ctx->pc = 0x18E5C0u;
        goto label_18e5c0;
    }
    ctx->pc = 0x18E5B8u;
    {
        const bool branch_taken_0x18e5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5b8) {
            ctx->pc = 0x18E630u;
            goto label_18e630;
        }
    }
    ctx->pc = 0x18E5C0u;
label_18e5c0:
    // 0x18e5c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e5c4:
    // 0x18e5c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18e5c8:
    // 0x18e5c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18e5cc:
    if (ctx->pc == 0x18E5CCu) {
        ctx->pc = 0x18E5D0u;
        goto label_18e5d0;
    }
    ctx->pc = 0x18E5C8u;
    {
        const bool branch_taken_0x18e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5c8) {
            ctx->pc = 0x18E5E8u;
            goto label_18e5e8;
        }
    }
    ctx->pc = 0x18E5D0u;
label_18e5d0:
    // 0x18e5d0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e5d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e5d4:
    // 0x18e5d4: 0xc063bec  jal         func_18EFB0
label_18e5d8:
    if (ctx->pc == 0x18E5D8u) {
        ctx->pc = 0x18E5DCu;
        goto label_18e5dc;
    }
    ctx->pc = 0x18E5D4u;
    SET_GPR_U32(ctx, 31, 0x18E5DCu);
    ctx->pc = 0x18EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EFB0u, 0x18E5D4u, 0x18E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5DCu;
label_18e5dc:
    // 0x18e5dc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e5dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e5e0:
    // 0x18e5e0: 0x10000015  b           . + 4 + (0x15 << 2)
label_18e5e4:
    if (ctx->pc == 0x18E5E4u) {
        ctx->pc = 0x18E5E8u;
        goto label_18e5e8;
    }
    ctx->pc = 0x18E5E0u;
    {
        const bool branch_taken_0x18e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5e0) {
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E5E8u;
label_18e5e8:
    // 0x18e5e8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e5ec:
    // 0x18e5ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e5f0:
    // 0x18e5f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e5f4:
    // 0x18e5f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e5f8:
    // 0x18e5f8: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x18e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
label_18e5fc:
    // 0x18e5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e600:
    // 0x18e600: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e604:
    // 0x18e604: 0x40f809  jalr        $v0
label_18e608:
    if (ctx->pc == 0x18E608u) {
        ctx->pc = 0x18E60Cu;
        goto label_18e60c;
    }
    ctx->pc = 0x18E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E60Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E604u, 0x18E60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x18e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_18e610:
    // 0x18e610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e614:
    // 0x18e614: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x18e614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_18e618:
    // 0x18e618: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x18e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e61c:
    // 0x18e61c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18e620:
    // 0x18e620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e624:
    // 0x18e624: 0x0  nop
    ctx->pc = 0x18e624u;
    // NOP
label_18e628:
    // 0x18e628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e62c:
    // 0x18e62c: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x18e62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_18e630:
    // 0x18e630: 0x8e3100e8  lw          $s1, 0xE8($s1)
    ctx->pc = 0x18e630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_18e634:
    // 0x18e634: 0x0  nop
    ctx->pc = 0x18e634u;
    // NOP
label_18e638:
    // 0x18e638: 0x1620ffd9  bnez        $s1, . + 4 + (-0x27 << 2)
label_18e63c:
    if (ctx->pc == 0x18E63Cu) {
        ctx->pc = 0x18E640u;
        goto label_18e640;
    }
    ctx->pc = 0x18E638u;
    {
        const bool branch_taken_0x18e638 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e638) {
            ctx->pc = 0x18E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e5a0;
        }
    }
    ctx->pc = 0x18E640u;
label_18e640:
    // 0x18e640: 0x8e500038  lw          $s0, 0x38($s2)
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_18e644:
    // 0x18e644: 0x1000004e  b           . + 4 + (0x4E << 2)
label_18e648:
    if (ctx->pc == 0x18E648u) {
        ctx->pc = 0x18E64Cu;
        goto label_18e64c;
    }
    ctx->pc = 0x18E644u;
    {
        const bool branch_taken_0x18e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e644) {
            ctx->pc = 0x18E780u;
            goto label_18e780;
        }
    }
    ctx->pc = 0x18E64Cu;
label_18e64c:
    // 0x18e64c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e650:
    // 0x18e650: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18e654:
    // 0x18e654: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_18e658:
    if (ctx->pc == 0x18E658u) {
        ctx->pc = 0x18E65Cu;
        goto label_18e65c;
    }
    ctx->pc = 0x18E654u;
    {
        const bool branch_taken_0x18e654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e654) {
            ctx->pc = 0x18E778u;
            goto label_18e778;
        }
    }
    ctx->pc = 0x18E65Cu;
label_18e65c:
    // 0x18e65c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e660:
    // 0x18e660: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_18e664:
    // 0x18e664: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_18e668:
    if (ctx->pc == 0x18E668u) {
        ctx->pc = 0x18E66Cu;
        goto label_18e66c;
    }
    ctx->pc = 0x18E664u;
    {
        const bool branch_taken_0x18e664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e664) {
            ctx->pc = 0x18E778u;
            goto label_18e778;
        }
    }
    ctx->pc = 0x18E66Cu;
label_18e66c:
    // 0x18e66c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18e66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18e670:
    // 0x18e670: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_18e674:
    // 0x18e674: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_18e678:
    // 0x18e678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18e67c:
    if (ctx->pc == 0x18E67Cu) {
        ctx->pc = 0x18E680u;
        goto label_18e680;
    }
    ctx->pc = 0x18E678u;
    {
        const bool branch_taken_0x18e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e678) {
            ctx->pc = 0x18E6A8u;
            goto label_18e6a8;
        }
    }
    ctx->pc = 0x18E680u;
label_18e680:
    // 0x18e680: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_18e684:
    // 0x18e684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e688:
    // 0x18e688: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e68c:
    if (ctx->pc == 0x18E68Cu) {
        ctx->pc = 0x18E690u;
        goto label_18e690;
    }
    ctx->pc = 0x18E688u;
    {
        const bool branch_taken_0x18e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e688) {
            ctx->pc = 0x18E6A8u;
            goto label_18e6a8;
        }
    }
    ctx->pc = 0x18E690u;
label_18e690:
    // 0x18e690: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e694:
    // 0x18e694: 0xc063ab8  jal         func_18EAE0
label_18e698:
    if (ctx->pc == 0x18E698u) {
        ctx->pc = 0x18E69Cu;
        goto label_18e69c;
    }
    ctx->pc = 0x18E694u;
    SET_GPR_U32(ctx, 31, 0x18E69Cu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E694u, 0x18E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E69Cu;
label_18e69c:
    // 0x18e69c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e69cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e6a0:
    // 0x18e6a0: 0x10000037  b           . + 4 + (0x37 << 2)
label_18e6a4:
    if (ctx->pc == 0x18E6A4u) {
        ctx->pc = 0x18E6A8u;
        goto label_18e6a8;
    }
    ctx->pc = 0x18E6A0u;
    {
        const bool branch_taken_0x18e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6a0) {
            ctx->pc = 0x18E780u;
            goto label_18e780;
        }
    }
    ctx->pc = 0x18E6A8u;
label_18e6a8:
    // 0x18e6a8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e6ac:
    // 0x18e6ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_18e6b0:
    // 0x18e6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18e6b4:
    if (ctx->pc == 0x18E6B4u) {
        ctx->pc = 0x18E6B8u;
        goto label_18e6b8;
    }
    ctx->pc = 0x18E6B0u;
    {
        const bool branch_taken_0x18e6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6b0) {
            ctx->pc = 0x18E6D0u;
            goto label_18e6d0;
        }
    }
    ctx->pc = 0x18E6B8u;
label_18e6b8:
    // 0x18e6b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e6b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e6bc:
    // 0x18e6bc: 0xc063ab8  jal         func_18EAE0
label_18e6c0:
    if (ctx->pc == 0x18E6C0u) {
        ctx->pc = 0x18E6C4u;
        goto label_18e6c4;
    }
    ctx->pc = 0x18E6BCu;
    SET_GPR_U32(ctx, 31, 0x18E6C4u);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E6BCu, 0x18E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6C4u;
label_18e6c4:
    // 0x18e6c4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e6c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e6c8:
    // 0x18e6c8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_18e6cc:
    if (ctx->pc == 0x18E6CCu) {
        ctx->pc = 0x18E6D0u;
        goto label_18e6d0;
    }
    ctx->pc = 0x18E6C8u;
    {
        const bool branch_taken_0x18e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6c8) {
            ctx->pc = 0x18E780u;
            goto label_18e780;
        }
    }
    ctx->pc = 0x18E6D0u;
label_18e6d0:
    // 0x18e6d0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_18e6d4:
    // 0x18e6d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18e6d8:
    if (ctx->pc == 0x18E6D8u) {
        ctx->pc = 0x18E6DCu;
        goto label_18e6dc;
    }
    ctx->pc = 0x18E6D4u;
    {
        const bool branch_taken_0x18e6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6d4) {
            ctx->pc = 0x18E708u;
            goto label_18e708;
        }
    }
    ctx->pc = 0x18E6DCu;
label_18e6dc:
    // 0x18e6dc: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x18e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_18e6e0:
    // 0x18e6e0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_18e6e4:
    // 0x18e6e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18e6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18e6e8:
    // 0x18e6e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18e6ec:
    if (ctx->pc == 0x18E6ECu) {
        ctx->pc = 0x18E6F0u;
        goto label_18e6f0;
    }
    ctx->pc = 0x18E6E8u;
    {
        const bool branch_taken_0x18e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e6e8) {
            ctx->pc = 0x18E708u;
            goto label_18e708;
        }
    }
    ctx->pc = 0x18E6F0u;
label_18e6f0:
    // 0x18e6f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e6f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e6f4:
    // 0x18e6f4: 0xc063ab8  jal         func_18EAE0
label_18e6f8:
    if (ctx->pc == 0x18E6F8u) {
        ctx->pc = 0x18E6FCu;
        goto label_18e6fc;
    }
    ctx->pc = 0x18E6F4u;
    SET_GPR_U32(ctx, 31, 0x18E6FCu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E6F4u, 0x18E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6FCu;
label_18e6fc:
    // 0x18e6fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e6fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18e700:
    // 0x18e700: 0x1000001f  b           . + 4 + (0x1F << 2)
label_18e704:
    if (ctx->pc == 0x18E704u) {
        ctx->pc = 0x18E708u;
        goto label_18e708;
    }
    ctx->pc = 0x18E700u;
    {
        const bool branch_taken_0x18e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e700) {
            ctx->pc = 0x18E780u;
            goto label_18e780;
        }
    }
    ctx->pc = 0x18E708u;
label_18e708:
    // 0x18e708: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e70c:
    // 0x18e70c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x18e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_18e710:
    // 0x18e710: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e714:
    // 0x18e714: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e718:
    // 0x18e718: 0x24426fc0  addiu       $v0, $v0, 0x6FC0
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28608));
label_18e71c:
    // 0x18e71c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e720:
    // 0x18e720: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e724:
    // 0x18e724: 0x40f809  jalr        $v0
label_18e728:
    if (ctx->pc == 0x18E728u) {
        ctx->pc = 0x18E72Cu;
        goto label_18e72c;
    }
    ctx->pc = 0x18E724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E72Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E724u, 0x18E72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E72Cu;
label_18e72c:
    // 0x18e72c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e730:
    // 0x18e730: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e734:
    // 0x18e734: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_18e738:
    if (ctx->pc == 0x18E738u) {
        ctx->pc = 0x18E73Cu;
        goto label_18e73c;
    }
    ctx->pc = 0x18E734u;
    {
        const bool branch_taken_0x18e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e734) {
            ctx->pc = 0x18E748u;
            goto label_18e748;
        }
    }
    ctx->pc = 0x18E73Cu;
label_18e73c:
    // 0x18e73c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e73cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e740:
    // 0x18e740: 0xc0c977c  jal         func_325DF0
label_18e744:
    if (ctx->pc == 0x18E744u) {
        ctx->pc = 0x18E748u;
        goto label_18e748;
    }
    ctx->pc = 0x18E740u;
    SET_GPR_U32(ctx, 31, 0x18E748u);
    ctx->pc = 0x325DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DF0u, 0x18E740u, 0x18E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E748u;
label_18e748:
    // 0x18e748: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_18e74c:
    // 0x18e74c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18e74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_18e750:
    // 0x18e750: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18e754:
    if (ctx->pc == 0x18E754u) {
        ctx->pc = 0x18E758u;
        goto label_18e758;
    }
    ctx->pc = 0x18E750u;
    {
        const bool branch_taken_0x18e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e750) {
            ctx->pc = 0x18E768u;
            goto label_18e768;
        }
    }
    ctx->pc = 0x18E758u;
label_18e758:
    // 0x18e758: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e758u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e75c:
    // 0x18e75c: 0x8e0501fc  lw          $a1, 0x1FC($s0)
    ctx->pc = 0x18e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
label_18e760:
    // 0x18e760: 0xc0c9838  jal         func_3260E0
label_18e764:
    if (ctx->pc == 0x18E764u) {
        ctx->pc = 0x18E768u;
        goto label_18e768;
    }
    ctx->pc = 0x18E760u;
    SET_GPR_U32(ctx, 31, 0x18E768u);
    ctx->pc = 0x3260E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260E0u, 0x18E760u, 0x18E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E768u;
label_18e768:
    // 0x18e768: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_18e76c:
    // 0x18e76c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e770:
    // 0x18e770: 0xae0301f8  sw          $v1, 0x1F8($s0)
    ctx->pc = 0x18e770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 3));
label_18e774:
    // 0x18e774: 0x0  nop
    ctx->pc = 0x18e774u;
    // NOP
label_18e778:
    // 0x18e778: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_18e77c:
    // 0x18e77c: 0x0  nop
    ctx->pc = 0x18e77cu;
    // NOP
label_18e780:
    // 0x18e780: 0x1600ffb2  bnez        $s0, . + 4 + (-0x4E << 2)
label_18e784:
    if (ctx->pc == 0x18E784u) {
        ctx->pc = 0x18E788u;
        goto label_18e788;
    }
    ctx->pc = 0x18E780u;
    {
        const bool branch_taken_0x18e780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e780) {
            ctx->pc = 0x18E64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e64c;
        }
    }
    ctx->pc = 0x18E788u;
label_18e788:
    // 0x18e788: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x18e788u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18e78c:
    // 0x18e78c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e790:
    // 0x18e790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e794:
    // 0x18e794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18e798:
    // 0x18e798: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18e798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18e79c:
    // 0x18e79c: 0x3e00008  jr          $ra
label_18e7a0:
    if (ctx->pc == 0x18E7A0u) {
        ctx->pc = 0x18E7A4u;
        goto label_fallthrough_0x18e79c;
    }
    ctx->pc = 0x18E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e79c:
    ctx->pc = 0x18E7A4u;
}
