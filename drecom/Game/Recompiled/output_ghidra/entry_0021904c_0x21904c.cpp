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

// Function: entry_0021904c
// Address: 0x21904c - 0x219150
void entry_0021904c_0x21904c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021904c_0x21904c");
#endif

    switch (ctx->pc) {
        case 0x21908cu: goto label_21908c;
        case 0x219124u: goto label_219124;
        default: break;
    }

    ctx->pc = 0x21904cu;

    // 0x21904c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219050: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x219050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219054: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x219058: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x219058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21905c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21906c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219074: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219078: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x219078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21907c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21907cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219080: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x219080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x219084: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219084u;
    SET_GPR_U32(ctx, 31, 0x21908Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219084u, 0x21908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21908Cu;
label_21908c:
    // 0x21908c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219090: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219098: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21909c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21909cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2190a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190ac: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2190acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2190b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190b8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2190b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190c4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2190c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190d0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2190d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2190d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2190d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190e0: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2190e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2190e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190ec: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2190ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2190f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2190f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2190f8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2190f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2190fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2190fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219104: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219108: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21910c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21910cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219110: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219118: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219118u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21911c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21911Cu;
    SET_GPR_U32(ctx, 31, 0x219124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21911Cu, 0x219124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219124u;
label_219124:
    // 0x219124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219128: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21912c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219130: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219134: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x219138: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x219138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21913c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21913Cu;
    {
        const bool branch_taken_0x21913c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21913c) {
            ctx->pc = 0x219150u;
            return;
        }
    }
    ctx->pc = 0x219144u;
    // 0x219144: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219144u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x219148u;
    {
        const bool branch_taken_0x219148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219148) {
            ctx->pc = 0x219178u;
            return;
        }
    }
    ctx->pc = 0x219150u;
}
