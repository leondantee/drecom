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

// Function: Set_effect_em05_denki_dama
// Address: 0x2ee540 - 0x2ee858
void Set_effect_em05_denki_dama_0x2ee540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_denki_dama_0x2ee540");
#endif

    switch (ctx->pc) {
        case 0x2ee598u: goto label_2ee598;
        case 0x2ee628u: goto label_2ee628;
        case 0x2ee6c4u: goto label_2ee6c4;
        case 0x2ee758u: goto label_2ee758;
        default: break;
    }

    ctx->pc = 0x2ee540u;

    // 0x2ee540: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ee540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ee544: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2ee544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2ee548: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ee54c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ee550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee554: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ee558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee55c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee564: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2ee564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2ee568: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x2ee568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x2ee56c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2ee56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2ee570: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2ee570u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ee574: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee578: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2EE578u;
    {
        const bool branch_taken_0x2ee578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee578) {
            ctx->pc = 0x2EE684u;
            goto label_2ee684;
        }
    }
    ctx->pc = 0x2EE580u;
    // 0x2ee580: 0x24041509  addiu       $a0, $zero, 0x1509
    ctx->pc = 0x2ee580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5385));
    // 0x2ee584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ee584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee588: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2ee588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee58c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2ee58cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee590: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EE590u;
    SET_GPR_U32(ctx, 31, 0x2EE598u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EE590u, 0x2EE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE598u;
label_2ee598:
    // 0x2ee598: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee59c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ee5a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5a8: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ee5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5b4: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2ee5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5c0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ee5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5cc: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ee5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5d8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ee5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5e4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ee5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5f0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ee5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee5f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee5f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee5fc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ee5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee600: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee604: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee608: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ee608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee60c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee610: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee610u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee614: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ee614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee618: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee61c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ee61cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee620: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EE620u;
    SET_GPR_U32(ctx, 31, 0x2EE628u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EE620u, 0x2EE628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE628u;
label_2ee628:
    // 0x2ee628: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee62c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee62cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ee630: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee634: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee634u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee638: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee63c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee640: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE640u;
    {
        const bool branch_taken_0x2ee640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee640) {
            ctx->pc = 0x2EE654u;
            goto label_2ee654;
        }
    }
    ctx->pc = 0x2EE648u;
    // 0x2ee648: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ee648u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee64c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE64Cu;
    {
        const bool branch_taken_0x2ee64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee64c) {
            ctx->pc = 0x2EE670u;
            goto label_2ee670;
        }
    }
    ctx->pc = 0x2EE654u;
label_2ee654:
    // 0x2ee654: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee658: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee658u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee65c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee660: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee664: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x2ee664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2ee668: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2ee668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ee66c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2ee66cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ee670:
    // 0x2ee670: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ee670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ee674: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x2ee674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2ee678: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2ee678u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee67c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2EE67Cu;
    {
        const bool branch_taken_0x2ee67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee67c) {
            ctx->pc = 0x2EE7BCu;
            goto label_2ee7bc;
        }
    }
    ctx->pc = 0x2EE684u;
label_2ee684:
    // 0x2ee684: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2ee684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee688: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ee68c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ee68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ee690: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ee694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee698: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ee69c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ee6a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ee6a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ee6a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ee6ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ee6acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ee6b0: 0x24041509  addiu       $a0, $zero, 0x1509
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5385));
    // 0x2ee6b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ee6b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee6b8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee6bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EE6BCu;
    SET_GPR_U32(ctx, 31, 0x2EE6C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EE6BCu, 0x2EE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6C4u;
label_2ee6c4:
    // 0x2ee6c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6c8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ee6cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6d4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ee6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6e0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2ee6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6ec: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ee6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6f8: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ee6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee700: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee704: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ee704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee70c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee710: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee710u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee714: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2ee714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee718: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee71c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee71cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee720: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ee720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee724: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee728: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee72c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ee72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee730: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee734: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee738: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ee738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee73c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee740: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee744: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ee744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee748: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee74c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ee74cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee750: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EE750u;
    SET_GPR_U32(ctx, 31, 0x2EE758u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EE750u, 0x2EE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE758u;
label_2ee758:
    // 0x2ee758: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee75c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee75cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ee760: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee764: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee768: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee76c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee770: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE770u;
    {
        const bool branch_taken_0x2ee770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee770) {
            ctx->pc = 0x2EE784u;
            goto label_2ee784;
        }
    }
    ctx->pc = 0x2EE778u;
    // 0x2ee778: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ee778u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee77c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EE77Cu;
    {
        const bool branch_taken_0x2ee77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee77c) {
            ctx->pc = 0x2EE7ACu;
            goto label_2ee7ac;
        }
    }
    ctx->pc = 0x2EE784u;
label_2ee784:
    // 0x2ee784: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee788: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee78c: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x2ee78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x2ee790: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ee790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ee794: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x2ee794u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee798: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee79c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee79cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee7a0: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x2ee7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2ee7a4: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2ee7a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ee7a8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2ee7a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ee7ac:
    // 0x2ee7ac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ee7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ee7b0: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x2ee7b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2ee7b4: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2ee7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee7b8: 0x0  nop
    ctx->pc = 0x2ee7b8u;
    // NOP
label_2ee7bc:
    // 0x2ee7bc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee7c0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee7c4: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE7C4u;
    {
        const bool branch_taken_0x2ee7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee7c4) {
            ctx->pc = 0x2EE81Cu;
            goto label_2ee81c;
        }
    }
    ctx->pc = 0x2EE7CCu;
    // 0x2ee7cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7d4: 0x0  nop
    ctx->pc = 0x2ee7d4u;
    // NOP
    // 0x2ee7d8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ee7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ee7dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7e4: 0x0  nop
    ctx->pc = 0x2ee7e4u;
    // NOP
    // 0x2ee7e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ee7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ee7ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7f4: 0x0  nop
    ctx->pc = 0x2ee7f4u;
    // NOP
    // 0x2ee7f8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ee7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ee7fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee804: 0x0  nop
    ctx->pc = 0x2ee804u;
    // NOP
    // 0x2ee808: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ee808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ee80c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee810: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ee810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ee814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE814u;
    {
        const bool branch_taken_0x2ee814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee814) {
            ctx->pc = 0x2EE828u;
            goto label_2ee828;
        }
    }
    ctx->pc = 0x2EE81Cu;
label_2ee81c:
    // 0x2ee81c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2ee81cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE820u;
    {
        const bool branch_taken_0x2ee820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee820) {
            ctx->pc = 0x2EE82Cu;
            goto label_2ee82c;
        }
    }
    ctx->pc = 0x2EE828u;
label_2ee828:
    // 0x2ee828: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2ee828u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ee82c:
    // 0x2ee82c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2ee82cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee830: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ee830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee834: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ee834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee838: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee83c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee84c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2ee84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ee850: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE858u;
}
