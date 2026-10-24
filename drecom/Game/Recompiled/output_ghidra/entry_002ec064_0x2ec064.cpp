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

// Function: entry_002ec064
// Address: 0x2ec064 - 0x2ec16c
void entry_002ec064_0x2ec064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec064_0x2ec064");
#endif

    switch (ctx->pc) {
        case 0x2ec0a4u: goto label_2ec0a4;
        case 0x2ec140u: goto label_2ec140;
        default: break;
    }

    ctx->pc = 0x2ec064u;

    // 0x2ec064: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2ec064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ec068: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ec068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ec06c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ec06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ec070: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ec074: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ec074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec078: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ec078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ec07c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ec07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ec080: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ec080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec084: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ec084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ec088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ec088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ec08c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2ec08cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ec090: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ec090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ec094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ec094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec098: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ec098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec09c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EC09Cu;
    SET_GPR_U32(ctx, 31, 0x2EC0A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EC09Cu, 0x2EC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0A4u;
label_2ec0a4:
    // 0x2ec0a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ec0ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec0b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ec0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec0bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ec0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec0c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0c8: 0xa044011d  sb          $a0, 0x11D($v0)
    ctx->pc = 0x2ec0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ec0cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0d4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ec0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec0dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0e4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ec0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec0e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ec0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec0f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec0f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec0fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ec0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec104: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec108: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ec108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec10c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec114: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ec114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec118: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec11c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec11cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec120: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ec120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec128: 0x8c33a618  lw          $s3, -0x59E8($at)
    ctx->pc = 0x2ec128u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec12c: 0xa260013f  sb          $zero, 0x13F($s3)
    ctx->pc = 0x2ec12cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec134: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ec134u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec138: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EC138u;
    SET_GPR_U32(ctx, 31, 0x2EC140u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EC138u, 0x2EC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC140u;
label_2ec140:
    // 0x2ec140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec144: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ec144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ec148: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec14c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec14cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec150: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec154: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec158: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC158u;
    {
        const bool branch_taken_0x2ec158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec158) {
            ctx->pc = 0x2EC16Cu;
            return;
        }
    }
    ctx->pc = 0x2EC160u;
    // 0x2ec160: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ec160u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC164u;
    {
        const bool branch_taken_0x2ec164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec164) {
            ctx->pc = 0x2EC188u;
            return;
        }
    }
    ctx->pc = 0x2EC16Cu;
}
