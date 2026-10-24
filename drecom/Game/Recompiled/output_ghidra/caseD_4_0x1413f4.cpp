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

// Function: caseD_4
// Address: 0x1413f4 - 0x141478
void caseD_4_0x1413f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1413f4");
#endif

    switch (ctx->pc) {
        case 0x141428u: goto label_141428;
        case 0x141440u: goto label_141440;
        case 0x141464u: goto label_141464;
        default: break;
    }

    ctx->pc = 0x1413f4u;

    // 0x1413f4: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x1413f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1413f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1413fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141400: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x141400u;
    {
        const bool branch_taken_0x141400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141400) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x141408u;
    // 0x141408: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x141408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x14140c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141410: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x141410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x141414: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141418: 0xac201a48  sw          $zero, 0x1A48($at)
    ctx->pc = 0x141418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14141c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14141cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141420: 0xc062010  jal         func_188040
    ctx->pc = 0x141420u;
    SET_GPR_U32(ctx, 31, 0x141428u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x141420u, 0x141428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141428u;
label_141428:
    // 0x141428: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x14142c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141430: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x141430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141434: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x141434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141438: 0xc067c24  jal         func_19F090
    ctx->pc = 0x141438u;
    SET_GPR_U32(ctx, 31, 0x141440u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x141438u, 0x141440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141440u;
label_141440:
    // 0x141440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x141444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141448: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x141448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14144c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x14144cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141450: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x141454: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x141454u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141458: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14145c: 0xc059190  jal         func_164640
    ctx->pc = 0x14145Cu;
    SET_GPR_U32(ctx, 31, 0x141464u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x14145Cu, 0x141464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141464u;
label_141464:
    // 0x141464: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x141464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x141468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14146c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x14146cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x141470: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x141470u;
    {
        const bool branch_taken_0x141470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141470) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x141478u;
}
