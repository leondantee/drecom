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

// Function: set_eff_om8b_effflash
// Address: 0x33f960 - 0x33fca8
void set_eff_om8b_effflash_0x33f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_om8b_effflash_0x33f960");
#endif

    switch (ctx->pc) {
        case 0x33f9b4u: goto label_33f9b4;
        case 0x33fa44u: goto label_33fa44;
        case 0x33fae4u: goto label_33fae4;
        case 0x33fb74u: goto label_33fb74;
        default: break;
    }

    ctx->pc = 0x33f960u;

    // 0x33f960: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x33f964: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x33f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x33f968: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33f96c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33f970: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33f974: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33f978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33f97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33f980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f984: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x33f984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x33f988: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x33f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x33f98c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x33f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33f990: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x33F990u;
    {
        const bool branch_taken_0x33f990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f990) {
            ctx->pc = 0x33FAA0u;
            goto label_33faa0;
        }
    }
    ctx->pc = 0x33F998u;
    // 0x33f998: 0x34048100  ori         $a0, $zero, 0x8100
    ctx->pc = 0x33f998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x33f99c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33f99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f9a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33f9a4: 0x24462960  addiu       $a2, $v0, 0x2960
    ctx->pc = 0x33f9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    // 0x33f9a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33f9a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f9ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33F9ACu;
    SET_GPR_U32(ctx, 31, 0x33F9B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33F9ACu, 0x33F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F9B4u;
label_33f9b4:
    // 0x33f9b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9b8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x33f9bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33f9c4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x33f9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f9c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33f9d0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x33f9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f9d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33f9dc: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x33f9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f9e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33f9e8: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x33f9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f9ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9f0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33f9f4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x33f9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f9f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33f9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33f9fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fa00: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x33fa00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fa0c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x33fa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fa18: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x33fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fa24: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x33fa24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fa30: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x33fa30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fa34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa38: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x33fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fa3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33FA3Cu;
    SET_GPR_U32(ctx, 31, 0x33FA44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33FA3Cu, 0x33FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA44u;
label_33fa44:
    // 0x33fa44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa48: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x33fa48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x33fa4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa50: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x33fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa54: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33fa58: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33fa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33fa5c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FA5Cu;
    {
        const bool branch_taken_0x33fa5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fa5c) {
            ctx->pc = 0x33FA70u;
            goto label_33fa70;
        }
    }
    ctx->pc = 0x33FA64u;
    // 0x33fa64: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33fa64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fa68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FA68u;
    {
        const bool branch_taken_0x33fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa68) {
            ctx->pc = 0x33FA8Cu;
            goto label_33fa8c;
        }
    }
    ctx->pc = 0x33FA70u;
label_33fa70:
    // 0x33fa70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa74: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fa7c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa80: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x33fa80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x33fa84: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x33fa84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33fa88: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x33fa88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33fa8c:
    // 0x33fa8c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x33fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x33fa90: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x33fa90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x33fa94: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x33fa94u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa98: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x33FA98u;
    {
        const bool branch_taken_0x33fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa98) {
            ctx->pc = 0x33FBCCu;
            goto label_33fbcc;
        }
    }
    ctx->pc = 0x33FAA0u;
label_33faa0:
    // 0x33faa0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x33faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33faa4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x33faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33faa8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33faac: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x33faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x33fab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33fab4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33fab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fab8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33fab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33fabc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33fabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33fac0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33fac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fac8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33fac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33facc: 0x34048100  ori         $a0, $zero, 0x8100
    ctx->pc = 0x33faccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x33fad0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33fad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fad4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33fad8: 0x24462960  addiu       $a2, $v0, 0x2960
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    // 0x33fadc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33FADCu;
    SET_GPR_U32(ctx, 31, 0x33FAE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33FADCu, 0x33FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAE4u;
label_33fae4:
    // 0x33fae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fae8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x33fae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x33faec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33faf0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33faf4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x33faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x33faf8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fafc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb00: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x33fb00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb0c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x33fb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb18: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x33fb18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb24: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x33fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb30: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x33fb30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb3c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x33fb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb44: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb48: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x33fb48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb50: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb54: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x33fb54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x33fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb60: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x33fb60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fb64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb68: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x33fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x33fb6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33FB6Cu;
    SET_GPR_U32(ctx, 31, 0x33FB74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33FB6Cu, 0x33FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB74u;
label_33fb74:
    // 0x33fb74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb78: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x33fb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x33fb7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fb80: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x33fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fb84: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33fb88: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33fb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33fb8c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FB8Cu;
    {
        const bool branch_taken_0x33fb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fb8c) {
            ctx->pc = 0x33FBA0u;
            goto label_33fba0;
        }
    }
    ctx->pc = 0x33FB94u;
    // 0x33fb94: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33fb94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fb98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FB98u;
    {
        const bool branch_taken_0x33fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb98) {
            ctx->pc = 0x33FBBCu;
            goto label_33fbbc;
        }
    }
    ctx->pc = 0x33FBA0u;
label_33fba0:
    // 0x33fba0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fba4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x33fba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x33fbac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x33fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fbb0: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x33fbb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x33fbb4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x33fbb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x33fbb8: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x33fbb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_33fbbc:
    // 0x33fbbc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x33fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x33fbc0: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x33fbc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x33fbc4: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x33fbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fbc8: 0x0  nop
    ctx->pc = 0x33fbc8u;
    // NOP
label_33fbcc:
    // 0x33fbcc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33fbd0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33fbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33fbd4: 0x12030029  beq         $s0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x33FBD4u;
    {
        const bool branch_taken_0x33fbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x33fbd4) {
            ctx->pc = 0x33FC7Cu;
            goto label_33fc7c;
        }
    }
    ctx->pc = 0x33FBDCu;
    // 0x33fbdc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fbe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fbe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fbe4: 0x0  nop
    ctx->pc = 0x33fbe4u;
    // NOP
    // 0x33fbe8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x33fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x33fbec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fbf4: 0x0  nop
    ctx->pc = 0x33fbf4u;
    // NOP
    // 0x33fbf8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x33fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x33fbfc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc04: 0x0  nop
    ctx->pc = 0x33fc04u;
    // NOP
    // 0x33fc08: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x33fc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x33fc0c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc14: 0x0  nop
    ctx->pc = 0x33fc14u;
    // NOP
    // 0x33fc18: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x33fc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x33fc1c: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x33fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x33fc20: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x33fc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x33fc24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc28: 0x0  nop
    ctx->pc = 0x33fc28u;
    // NOP
    // 0x33fc2c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x33fc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x33fc30: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33fc34: 0x24632960  addiu       $v1, $v1, 0x2960
    ctx->pc = 0x33fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10592));
    // 0x33fc38: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x33fc38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3B2960u));
    // 0x33fc3c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x33fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x33fc40: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x33fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x33fc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc48: 0x0  nop
    ctx->pc = 0x33fc48u;
    // NOP
    // 0x33fc4c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x33fc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x33fc50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x33fc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc58: 0x0  nop
    ctx->pc = 0x33fc58u;
    // NOP
    // 0x33fc5c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x33fc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x33fc60: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33fc64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33fc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33fc68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc6c: 0x0  nop
    ctx->pc = 0x33fc6cu;
    // NOP
    // 0x33fc70: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x33fc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x33fc74: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x33fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33fc78: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x33fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_33fc7c:
    // 0x33fc7c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x33fc7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33fc80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33fc80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33fc84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33fc84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33fc88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33fc88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33fc8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33fc8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33fc90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33fc90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fc94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33fc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33fc98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33fc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fc9c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x33fc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33fca0: 0x3e00008  jr          $ra
    ctx->pc = 0x33FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FCA8u;
}
