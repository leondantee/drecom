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

// Function: entry_0035671c
// Address: 0x35671c - 0x3567f8
void entry_0035671c_0x35671c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035671c_0x35671c");
#endif

    switch (ctx->pc) {
        case 0x356734u: goto label_356734;
        case 0x3567ccu: goto label_3567cc;
        default: break;
    }

    ctx->pc = 0x35671cu;

    // 0x35671c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x35671cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356720: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356720u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356724: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x356728: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x356728u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35672c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35672Cu;
    SET_GPR_U32(ctx, 31, 0x356734u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35672Cu, 0x356734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356734u;
label_356734:
    // 0x356734: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356738: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x356738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x35673c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35673cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356740: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356744: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x356744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x356748: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x356748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35674c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356750: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356754: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x356754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x356758: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35675c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35675cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356760: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356768: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35676c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35676cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356770: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356774: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356778: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x35677c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x35677cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356780: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356784: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356788: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x356788u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x35678c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35678cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356790: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356794: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x356798: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35679c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35679cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567a0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3567a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3567a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567ac: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3567acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3567b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3567b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567b8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3567b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3567bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567c0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3567c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3567c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3567C4u;
    SET_GPR_U32(ctx, 31, 0x3567CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3567C4u, 0x3567CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3567CCu;
label_3567cc:
    // 0x3567cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567d0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3567d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3567d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3567d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3567d8: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3567d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3567dc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3567dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3567e0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3567e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3567e4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3567E4u;
    {
        const bool branch_taken_0x3567e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3567e4) {
            ctx->pc = 0x3567F8u;
            return;
        }
    }
    ctx->pc = 0x3567ECu;
    // 0x3567ec: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x3567ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3567f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3567F0u;
    {
        const bool branch_taken_0x3567f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567f0) {
            ctx->pc = 0x356818u;
            return;
        }
    }
    ctx->pc = 0x3567F8u;
}
