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

// Function: entry_0021cb34
// Address: 0x21cb34 - 0x21cc0c
void entry_0021cb34_0x21cb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cb34_0x21cb34");
#endif

    switch (ctx->pc) {
        case 0x21cb4cu: goto label_21cb4c;
        case 0x21cbe0u: goto label_21cbe0;
        default: break;
    }

    ctx->pc = 0x21cb34u;

    // 0x21cb34: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21cb38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21cb38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cb3c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x21cb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21cb40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21cb40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cb44: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21CB44u;
    SET_GPR_U32(ctx, 31, 0x21CB4Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21CB44u, 0x21CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB4Cu;
label_21cb4c:
    // 0x21cb4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb50: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21cb54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cb58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb60: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21cb60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cb64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb68: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb6c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb78: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21cb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb84: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21cb84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb90: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21cb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb9c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21cb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cba0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cba4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cba8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbb0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbb4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21cbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbc0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21cbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbcc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21cbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbd4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21CBD8u;
    SET_GPR_U32(ctx, 31, 0x21CBE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21CBD8u, 0x21CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBE0u;
label_21cbe0:
    // 0x21cbe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbe4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21cbe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21cbe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbec: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cbf0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21cbf4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21cbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21cbf8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CBF8u;
    {
        const bool branch_taken_0x21cbf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21cbf8) {
            ctx->pc = 0x21CC0Cu;
            return;
        }
    }
    ctx->pc = 0x21CC00u;
    // 0x21cc00: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21cc00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cc04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21CC04u;
    {
        const bool branch_taken_0x21cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cc04) {
            ctx->pc = 0x21CC28u;
            return;
        }
    }
    ctx->pc = 0x21CC0Cu;
}
